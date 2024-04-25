#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Print(T arr[], const int n);
template<typename T>
T Sum(T arr[], const int n);
template<typename T>
double Avg(T arr[], const int n);
template<typename T>
T minValueIn(T arr[], const int n);
//double minValueIn(double arr[], const int n);
template<typename T>
T maxValueIn(T arr[], const int n);
//double maxValueIn(double arr[], const int n);
template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts);

#define tab "\t";

void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;	//Sum of array elements
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;//Avarage of array elemnts
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << endl;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
}

void FillRand(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(double arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

template<typename T>
void Print(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

//double Sum(double arr[], const int n) {
//	double sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//	return sum;
//}
template<typename T>
double Avg(T arr[], const int n) {
	double sum = 0;
	T avg;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	avg = sum / n;
	return avg;
}


template<typename T>
T minValueIn(T arr[], const int n){
		T min = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] < min) min = arr[i];
		}
		return min;
}

//double minValueIn(double arr[], const int n) {
//		double min = arr[0];
//		for (int i = 0; i < n; i++) {
//			if (arr[i] < min) min = arr[i];
//		}
//		return min;
//	}

template<typename T>
T maxValueIn(T arr[], const int n){
		T max = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] > max) max = arr[i];
		}
		return max;
}
//double maxValueIn(double arr[], const int n) {
//		double max = arr[0];
//		for (int i = 0; i < n; i++) {
//			if (arr[i] > max) max = arr[i];
//		}
//		return max;
//	}

template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
	template<typename T>
	void shiftRight(T arr[], const int n, int number_of_shifts)
	{
		shiftLeft(arr, n, n - number_of_shifts);
	}