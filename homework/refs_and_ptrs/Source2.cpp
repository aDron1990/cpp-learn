#include <iostream>
#include <random>
#include <ctime>
#include <memory>

int* append(int* array, int size, int newValue)
{
	int* newArray = new int[size + 1];

	for (int i = 0; i < size; i++) {
		newArray[i] = array[i];       // копируем старый массив
	}

	delete[] array;

	// [42, 11, 12]			size = 3,		last_i = 2
	// [42, 11, 12, ...]	size + 1 = 4,	last_i = 3

	newArray[size] = newValue;  // добавляем новое значение в конец нового массива

	return newArray;
}

void print_array(const int * const array, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}
}

int main()
{
	srand(time(0));

	int a;
	int array[4] = {0, 1, 2, 3};  // массив это указатель

	for (int i = 0; i < 4; i++)
	{
		std::cout << array[i] << std::endl;      // лучше делать так
		std::cout << *(array + i) << std::endl;  // но это стоит понимать
	}

	std::cout << &a << std::endl;
	std::cout << array << std::endl;		// предопределенное расположение

	int* intHeap = new int{ 0 };  // куча
	delete intHeap;

	int* u = (int*)malloc(4);   // это из C
	free(u);

	int size = 5;						// int*
	int* arrayHeap = new int[size] {};		// куча // [1, 2, 3, 4]
	std::cout << arrayHeap << std::endl;	// случайное расположение

	for (int i = 0; i < size; i++)
	{
		arrayHeap[i] = i;
	}

	print_array(arrayHeap, size);

	int* newArray = append(arrayHeap, size, 42);

	print_array(newArray, size + 1);

	delete[] newArray;

	int** ptrArray = new int*[2];  // int** -> [int*, int*] -> int[5]
								   //                       -> int[3]
	ptrArray[0] = new int[5] {};
	ptrArray[1] = new int[3] {};

	ptrArray[0][2] = 5;
	ptrArray[1][0] = 1;

	delete[] ptrArray[0];
	delete[] ptrArray[1];
	delete[] ptrArray;
}