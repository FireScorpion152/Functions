#include <iostream>
using namespace std;

int Sum(int a, int b = 0); /*значение по умолчанию*/
			   //параметр по умолчанию
int Dif(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Factorial(int a);
int Pow(int a, int b);

//#define CLASSWORK
#define FACTORIAL
#define POW

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

#ifdef POW
	int c, d;
	cout << "¬ведите число: "; cin >> c; cout << "¬ведите основание степени: "; cin >> d;
	cout << c << " ^ " << d << " = " << Pow(c, d) << endl;
#endif // Pow

#ifdef FACTORIAL
	int h;
	cout << "¬ведите число дл€ факториала: "; cin >> h;
	cout << h << "!" << "=" << Factorial(h) << endl;
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

int Factorial(int h) {
	
	int c = 1;

	for (int i = 1; i <= h; i++) {
		c = c * i;
	}
	return c;
}

int Pow(int c, int d) {
	int x = c;
	for (int i = 0; i < d - 1; i++) {
		c = x * c;
	}
	return c;
}
