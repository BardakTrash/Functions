#include<iostream>
using namespace std;

int Add(int a, int b); // прототип функции - обьявления функции (Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b); //Вызов функции (Function call) - использование функции.
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a,b) << endl;
	cout << a << " * " << b << " = " << Mul(a,b) << endl;
	cout << a << " / " << b << " = " << Div(a,b) << endl;
}
//type name(parameters)
int Add(int a, int b) //Реализация функции - определение функции (Function definition)
{
	//Addition - сложения
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;

}
int Mul(int a, int b)
{
	//Multiplication - умножение
	return a * b;

}
double Div(int a, int b)
{
	//Division - деление
	return (double)a / b;

}

