#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

/*

	Библиотека стандарных шаблонов(Stl)

	Алгоритмы

	сравнение две последовательности

	equal и mismatch
*/

int main()
{
	setlocale(LC_ALL, "rus");

	int arr[] = { 10,3,4,5,7,11 };
	vector<int> arr2 = { 10,3,4,5,7,11 };

	bool result = equal(begin(arr), end(arr), begin(arr2),end(arr2));

	vector<int> arr3 = { 11,3,4,5,7,10 };
	vector<int> arr4 = { 10,3,4,5,7,11 };
	//sort(begin(arr3), end(arr3));
	//sort(begin(arr4), end(arr4));
	bool result2= equal(begin(arr3), end(arr3), begin(arr4),end(arr4));
	cout << result << endl;
	cout << result2 << endl;

	auto result3 = mismatch(begin(arr), end(arr), begin(arr2), end(arr2));

	if (result3.first == end(arr) && result3.second == end(arr2))
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
		cout << "result.first:\t" << *result3.first << "\t result.second:\t" << *result3.second << endl;
	}

	return 0;
}