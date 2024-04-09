#include <iostream>
using namespace std;

int Sum(int a, int b);
int Dif(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Factorial(int a);
int Pow(int a, int b);

//#define ClassWork
#define Factorial
#define Pow

void main() {
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
#ifdef ClassWork
	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	cout << a << " + " << b << " = " << Sum(a, b) << endl;
	cout << a << " - " << b << " = " << Dif(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
#endif // ClassWork

#ifdef Pow
	int c, d;
	cout << "¬ведите число: "; cin >> c; cout << "¬ведите основание степени: "; cin >> d;
	cout << a << " ^ " << b << " = " << Pow(c, d) << endl;
#endif // Pow

#ifdef Factorial
	int h;
	cout << "¬ведите число дл€ факториала: "; cin >> h;
	cout << a << "!" << "=" << Factorial(h) << endl;
#endif // Factorial

}

int Sum(int a, int b) {
	int c = a + b;
	return c;
}
int Dif(int a, int b) {
	return a - b;
}
int Prod(int a, int b) {
	return a * b;
}
double Quot(int a, int b) {
	return (double) a / b;
}

int Factorial(int a) {
	
	int factorial;
	int c = 1;

	for (int i = 1; i <= a; i++) {
		c = c * i;
	}
	return c;
}

int Pow(int a, int b) {
	int c = a;
	for (int i = 0; i < b - 1; i++) {
		c = c*a;
	}
	return c;
}
