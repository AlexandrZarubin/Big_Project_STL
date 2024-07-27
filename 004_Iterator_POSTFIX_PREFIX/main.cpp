#include<iostream>
#include<list>
#include<vector>
using namespace std;

/*
	Библиотека стандарных шаблонов (STL)

*/

template<typename T>void PrintList(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
	cout << "--------------------------------------------\n\n";
}
int main()
{
	setlocale(LC_ALL, "rus");
	list<int>::iterator it;
	//it++;

	//++it;
	return 0;
}