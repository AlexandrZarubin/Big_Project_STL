#include<iostream>
#include<algorithm>
using namespace std;

/*
	Библиотека стандарных шаблонов(STL)
			Алгоритмы

			for_earch

*/

void Foo(int a)
{
	cout << a << endl;
}

int main()
{

	setlocale(LC_ALL, "");

	int arr[] = { 1,2,10,55 };
	for_each(begin(arr), end(arr), [](int& a) {cout << a << endl; a++; });
	for_each(begin(arr), end(arr), [](int a) {cout <<a<< endl; });
	//for_each(begin(arr), end(arr), Foo);

	/*for (auto a : arr)
	{
		Foo(a);
	}*/
	/*for (auto a : arr)
	{
		cout<<a<<endl;
	}*/
	for (auto &a : arr)
	{
		cout<<a<<endl;
		a++;
	}
	for (auto a : arr)
	{
		cout<<a<<endl;
	}
	return 0;
}