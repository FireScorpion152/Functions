#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 4;
const int COLS = 6;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Print(T arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Sort(T arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T Sum(T arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(T arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(T arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T maxValueIn(T arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts);

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
void FillRand(char arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}

template<typename T>
void Print(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = 0; k < COLS - j - 1; k++) {
				if (arr[i][k] > arr[i][k + 1]) {
					int buffer = arr[i][k + 1];
					arr[i][k + 1] = buffer;
				}
			}
		}
	}cout << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = 0; k < COLS - j - 1; k++) {
				if (arr[i][k] > arr[i][k + 1]) {
					double buffer = arr[i][k + 1];
					arr[i][k + 1] = buffer;
				}
			}
		}
	}cout << endl;
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = 0; k < COLS - j - 1; k++) {
				if (arr[i][k] > arr[i][k + 1]) {
					char buffer = arr[i][k + 1];
					arr[i][k + 1] = buffer;
				}
			}
		}
	}cout << endl;
}

template<typename T>
T Sum(T arr[], const int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Не получится сложить сумму массива из char";
	cout << endl;
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
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	double avg;
	double sum = 0;
	int n = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
			n++;
		}
	}
	avg = sum / n;
	return avg;
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double avg;
	double sum = 0;
	int n = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			sum += arr[i][j];
			n++;
		}
	}
	avg = sum / n;
	return avg;
}
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Не получится вычислить среднее значение массива из char";
	cout << endl;
}


template<typename T>
T minValueIn(T arr[], const int n){
		T min = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] < min) min = arr[i];
		}
		return min;
}
int  minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Невозможно вычислить минимальное значение массива из char" << endl;
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

int  maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	cout << "Невозможно вычислить максимальное значение массива из char" << endl;
}

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