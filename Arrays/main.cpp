#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);

#define tab "\t";

void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма массива: " << Sum(arr, n) << "\n Среднее арифметическое массива: " << Avg(arr, n) << "\n Минимальное значение массива: " << minValueIn(arr, n);
	cout << "\n Максимальное значение массива: " << maxValueIn(arr, n) << endl;
	shiftLeft(arr, n);
	shiftRight(arr, n);

}

void FillRand(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}
	cout << endl;
}
int Sum(int arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n) {
	double sum = 0, avg;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	avg = sum / n;
	return avg;
}
double Avg(double arr[], const int n) {
	double sum = 0, avg;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	avg = sum / n;
	return avg;
}

int minValueIn(int arr[], const int n){
		int min = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] < min) min = arr[i];
		}
		return min;
}

double minValueIn(double arr[], const int n) {
		double min = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] < min) min = arr[i];
		}
		return min;
	}


int maxValueIn(int arr[], const int n){
		int max = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] > max) max = arr[i];
		}
		return max;
}
double maxValueIn(double arr[], const int n) {
		double max = arr[0];
		for (int i = 0; i < n; i++) {
			if (arr[i] > max) max = arr[i];
		}
		return max;
	}


	void shiftLeft(int arr[], const int n) {
		int left, x;
		cout << "Введите число сдвигов влево: "; cin >> left;
		for (int i = 0; i < left + 1; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[j] << "\t";
				if (j == 0) { x = arr[j]; }
				if (j != n - 1) {
					arr[j] = arr[j + 1];
				}
				else arr[j] = x;

			}
			cout << endl;
		}
		cout << endl;;
	}

	void shiftRight(int arr[], const int n) {
		int right, x;
		cout << "Введите число сдвигов вправо: "; cin >> right;
		for (int i = 0; i < right + 1; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[j] << "\t";
				if (j == 0) {
					x = arr[n - 1];
					arr[n - 1] = arr[n - 2];
				}
				else if (j < n) {
					x = arr[n - (j + 1)];
					arr[n - (j + 1)] = arr[n - (j + 2)];
				}
			}cout << endl;
		}
	}