#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	Бибилиотека стандарных шаблонов (STL)

	Алгоритмы

	удалить повторяющиейся элемент

	std::unique  std::unique_copy
*/

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[] = { 1,2,2,2,5,4,4 };
	for (auto ar : arr)
	{
		cout << ar << "\t";
	}
	cout << endl;
	auto result = unique(begin(arr), end(arr));
	cout << result << endl << endl;
	for (auto ar : arr)
	{
		cout << ar << "\t";
	}
	cout << endl << endl;cout << endl << endl;

	for_each(begin(arr), result, [](int a) {cout << a << "\t"; });

	vector<int> v = { 1,2,2,2,5,4,4 };
	auto result1 = unique(begin(v), end(v));
	v.erase(result1, v.end());
	vector<int> v2 = { 1,2,2,2,5,4,4 };
	vector<int> v3;
	unique_copy(begin(v), end(v), back_inserter(v3));
	cout << endl << endl;
	for (auto ar : v3)
	{
		cout << ar << "\t";
	}
	return 0;
}