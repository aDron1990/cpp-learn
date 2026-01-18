#include <iostream>
#include <string>

void copy(int val)
{
	val++;
}

void copyconst(const int val)
{

}

void ref(int& val)
{
	val++;
}

void refconst(const int& val)
{
	
}

void ptr(int* val)
{
	(*val)++;
}

void ptrconst(const int* val)
{

}

const int* ptrreturn(int* val)
{
	int q = 42;
	return &q;
}

const int& refreturn(int& val)
{
	int q = 42;
	return q;
}

int main()
{
	//int a = 5;
	//std::cout << a << "\n";

	// int& b = a;
	//std::cout << b << "\n";

	//a++;
	//std::cout << a << "\n";
	//std::cout << b << "\n";

	// ------------------------------------

	//int a = 5;
	//std::cout << a << "\n";

	//int* b = &a;	// & делает из int -> int*
	//std::cout << b + 1 << "\n"; // арифметика указателей

	//std::cout << sizeof(int) << "\n"; // 4 байта

	//int** c = &b;
	//std::cout << b << "\n";
	//std::cout << c << "\n";
	//std::cout << *c << "\n";
	//std::cout << **c << "\n";

	// --------------------------------

	// const int a = 5; // a не меняется
	// a++; // - ошибка

	// int& b = a; // - ошибка, мы нек можем сделать неконстантную ссылку на константное значение
	// const int& b = a;
	// b++; // - ошибка

	// std::cout << b << "\n";
	// std::cout << b++ << "\n"; // - ошибка

	// -------------------
	// int a = 5;
//	const int const * const b = &a;         // const int const * const b = &a;
											//   |		   |	   |
											//	 a		   a      ptr
	// (*b)++; // - 5 -> 6 
	// b++; 
//	std::cout << b << "\n";

	// -------------------------

	//int a = 5;
	//std::cout << a << "\n";

	//ref(a);
	//std::cout << a << "\n";

	//copy(a);
	//std::cout << a << "\n";

	//ptr(&a);
	//std::cout << a << "\n";



	//const int b = 5;
	//ref(b);
	//std::cout << b << "\n";

	//copy(b);
	//std::cout << b << "\n";

	//ptr(&b);
	//std::cout << b << "\n";

	// ------------------------------

	int a = 5;
	std::cout << refreturn(a) << std::endl;

	std::cout << ptrreturn(&a) << std::endl;
	std::cout << *ptrreturn(&a) << std::endl;
}

