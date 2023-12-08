// zadacha 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Дана последовательность вещественных чисел{ Aj }. 
//Найти произведение отрицательных чисел с ненулевой дробной частью, 
//наименьшее из таких чисел и номер этого числа в последовательности.
//Дано натуральное число N(N < 10 ^ 9).Найти наименьшую цифру числа N.


#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	//1
    float A[5]{ 1.1, -5.6, -3.0, -3.12, 5.0 };
	float result = 1;
	int minI = 0;
	float minNumber = A[0];
	float celaya;
	float drobnaya;
	for (int i = 0; i < 5; i++)
	{
		drobnaya = modf(A[i], &celaya);
		if (A[i] < 0 && abs(drobnaya)>0)
		{
			result *= A[i];
		}
		if (A[i] < minNumber)
		{
			minNumber = A[i];
			minI = i;
		}
	}
	cout << result << " " << minNumber << " " << minI << endl;

	//2

	int N = 57486;
	int minN = 10;
	while (N > 0)
	{
		int n = N % 10;
		N /= 10;
		minN = min(minN, n);
	}

	cout << minN;
};

