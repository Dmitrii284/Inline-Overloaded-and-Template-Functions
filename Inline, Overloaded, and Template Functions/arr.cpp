#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);

template <typename T>
void in_mass(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

int mass(int arr[], const int length = 5) {
	int sum = 0;
	for (int i = 0; i < length; i++)		
	     sum += arr[i];
	return sum;
}

template <typename T>
double func(T arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return (double) sum/length;
}

int main() {
	setlocale(LC_ALL, "Rus");
	
	/* Task 1
Create a function that accepts from 1 to
5 (inclusive) different numbers, after which
returns their sum. To solve it is necessary
use the default settings. Please note that in
A function must have one required parameter.*/
	/*std::cout << "Task 1. \nCreate a function that accepts from 1 to 5 (inclusive)different numbers, after which returns their sum.\n";
	const int size = 5;
	int array[size]{ 7, 10, 50, 100, 13 };
	std::cout << "Initial array of nambers \n";
	in_mass(array, size);
	std::cout<<"Sum array elementh: "<<mass(array)<<std::endl;
	std::cout << "\n\n";*/

	/*Task 2
Create an inline function that
takes three numbers and returns their average
arithmetic. */
	std::cout << "Task2.\nCreate an inline function that takes three numbers and returns their average airthmetic \n";
	const int size1 = 3;	
	int array1[size1]{};
	std::cout << "Enter three numbers -> \n";
	std::cin >> array1[0] >> array1[1] >> array1[2];
	std::cout << "Their average arithmetic: " << func(array1, size1) << std::endl;


	return 0;
}