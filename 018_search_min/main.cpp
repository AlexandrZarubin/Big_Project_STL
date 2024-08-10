﻿#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>

using namespace std;
/*

	Библиотека стандарных шаблонов(Stl)

	Алгоритмы

	поиск наименьшего элемента

*/
int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> v = { 10,1,-55,11,13,58 };

	list<int>lst = { 4,7,77,-3,44,74 };

	auto result = min_element(v.begin(), v.end());
	cout << *result << endl;

	auto result2 = min_element(lst.begin(), lst.end());
	cout << *result2 << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10,1,-55,59,13,58 };

	auto result3 = min_element(arr, arr + SIZE);
	cout << *result3 << endl;

	auto result4 = minmax_element(arr, arr + SIZE);
	cout << "-------------\n";
	cout << *result4.first << endl;
	cout << *result4.second << endl;

	return 0;
}