#include<iostream>
#include<array>

using namespace std;

/*
	библиотека стандарных шаблонов STL
	ARRAY
*/

int main()
{
	setlocale(LC_ALL, "rus");
	array<int, 4>arr{1, 2, 3, 4};
	cout << arr[0] << endl;
	try
	{
		cout << arr.at(11) << endl;//с проверкой за выход из массива

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	for (auto var : arr)
	{
		cout << var << endl;
	}
	arr.fill(-1);
	for (auto var : arr)
	{
		cout << var << endl;
	}
	return 0;

}