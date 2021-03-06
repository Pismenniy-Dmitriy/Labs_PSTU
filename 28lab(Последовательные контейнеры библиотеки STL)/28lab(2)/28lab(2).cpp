﻿#include <iostream>
#include <vector>
#include <cstdlib>
#include "Time.h"
using namespace std;
typedef vector<Time>Vec;//определяем тип для работы с вектором
//функция для формирования вектора
Vec make_vector(int n)
{
	Vec v;//пустой вектор
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 100 - 50;
		v.push_back(a);//добавляем а в конец вектора
	}
	return v;//возвращаем вектор как результа работы функции
}
//функция для печати вектора
void print_vector(Vec v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
//основная функция
void main()
{
	try
	{
		vector<int> v;//вектор
		vector<int>::iterator vi = v.begin();//итератор
		int n;
		cout << "N?"; cin >> n;
		v = make_vector(n);//формирование вектора
		print_vector(v);//печать вектора
	}
	catch (int)//блок обработки ошибок
	{
		cout << "error!";
	}
}
