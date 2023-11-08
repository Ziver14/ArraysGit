#include<iostream>
#include<cstdlib>
#include<ctime>


int main() {
	setlocale(LC_ALL, "Ru");

	//Задача 1.
	int n;
	int sum = 0;
	int counter = 0;
	const int size = 10;
	double average;
	int arr1[size]{ 2,15,19,28,47,65,5,6,9,15 };
	std::cout << " Массив: \n";
	std::cout << "{ ";
	for (int i = 0; i < size; i++) {
		std::cout << arr1[i] << ' ';
		sum += arr1[i];
		average = sum / size;
	}
	for (int i = 0; i < size; i++) {
		if (arr1[i] < average) 
			counter++;
		 }
	std::cout << "}"<< '\n';
	std::cout << " Среднеарифметическое = " << average << '\n';
	std::cout << " Элементов в массиве меньших чем среднеарифметическое -> " << counter<<"\n\n";

	//Задача 2.
	const int rows = 5;
	const int cols = 5;
	int mx1[cols][rows];
	int mx2[cols][rows];
	int mx3[cols][rows];

	srand(time(NULL));
	std::cout << "Массив 1: " << '\n';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mx1[i][j] = rand()%(10-1)+1;
			std::cout << mx1[i][j]<< "\t";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	std::cout << "Массив 2: " << '\n';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mx2[i][j] = rand()%(30-10)+10;
			std::cout << mx2[i][j] << "\t";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	std::cout << " Массив из массивов:" << '\n';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mx3[i][j] = mx1[i][j] + mx2[i][j];
			std::cout << mx3[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	//Задача 3.
	const int size1 = 6;
	int arr[size]{};
	std::cout << "Введите шестизначное число -> ";
	std::cin >> n;
	if (n >= 100000 && n < 1000000) {
		std::cout << "Массив:\n";
		
		for (int i = size1 - 1; i >= 0; i--) {
			{
				arr[i] = n % 10;
				n /= 10;
			}
		}
		std::cout << '\n';
		for (int i = 0; i < size1; i++)
			std::cout << arr[i] << ", ";
	}
	else
		std::cout << "Ошибка ввода";
		

	






	return 0;
}

