#include <iostream>
#include "Foo.hpp"

// это - однострочный комментарий, но с помощью обратного слеша \
он разбит на несколько строк.

#define PI 3.14    // объявить*

#define forever for (unsigned long long fori = 0ULL;;fori++)

//Макросы:  работают на этапе препроцессора // инлайн функции работают на этапе компиляции
#define in std::cin 
#define out std::cout 

#define  sum(a, b) (a + b)
#define  sumAB(A, B) int result = A + B; result // не работает, не возможно вставить переменную

//макрос выводящий массив в консоль
#define print_arr(arr,size) \
out << "{ ";\
for(int i = 0; i < size; i++)\
	out << arr[i] << ", ";\
out << "\b\b }\n";

//----------------------------------------------------------------------------------------------

#define TEST 2


#if TEST == 1

void func() {
	out << "TEST №1\n";
}
#elif TEST  == 2
void func() {
	out << "TEST №2\n";
}
#else
void func() {
	out << "No active test\n";
}
#endif

#define FLAGs

#ifndef FLAG
const int A = 12;
#else
const int A = 13
#endif














int main() {
	setlocale(LC_ALL, "ru");
	int n, m;

	func();




	//препроцессор - это программа, которая производит некоторые, а иногда весьма значительные, манипуляции с первоначальным текстом программы перед тем, как он подвергается компиляции.
	// Директивы препроцессора- команды, указывающие препроцессору на то, где и какие изменения с исходным кодом ему необходимо выполнить. Все директивы препроцессора начинаются с символа '#'
	
	//Константы и конструкции препроцессора
	/*
	std::cout << "Pi = " << PI << std::endl;

	forever{ 
		std::cout << '.';
		std::cout << fori;
	}
	*/

	//Макросы препроцессора
	/*
	out << "Введите два числа ->";
	in >> n >> m;
	out << n << " + " << m << " = " << sum(n, m);
	out << sum(2, 2) * 2 << std::endl;

	const int size = 4;
	int arr[size]{ 10,20,30,40 };
	print_arr(arr, size);


	out << "Pi = " << PI << std::endl;
#undef PI
	//out << "Pi = " << PI << std::endl;
#define PI 3.1416
	out << "Pi = " << PI << std::endl;
	*/



	return 0;
}