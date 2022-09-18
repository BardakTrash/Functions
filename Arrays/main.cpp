#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shifts.h"


template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts);


int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	
	int minRand=100, maxRand=100;

	/*cout << "Введите минимальное случ.число: "; cin >> minRand;
	cout << "Введите максимальное случ.число: "; cin >> maxRand;*/
	
	FillRand(arr, n, minRand,maxRand);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арефметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr, n) << endl;

	/*int nuber_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> nuber_of_shifts;
	shiftLeft(arr, n, nuber_of_shifts);
	Print(arr, n);

	cout << "Введите количество сдвигов: "; cin >> nuber_of_shifts;
	shiftRight(arr, n, nuber_of_shifts);
	Print(arr, n);*/

	//-----------------------------------------------------------------
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арефметическое: " << Avg(d_arr, D_SIZE) << endl;

	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "\n2D:\n";

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//minValueIn(i_arr_2, ROWS, COLS);
	//maxValueIn(i_arr_2, ROWS, COLS);
	//Sum(i_arr_2, ROWS, COLS);
	//Sort(i_arr_2, ROWS, COLS);
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
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
int Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
int minValueIn(T arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
int maxValueIn(T arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}