#include<iostream>
#include<list>
#include<vector>
using namespace std;

/*
	Библиотека стандарных шаблонов (STL)

	LIST
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
	list<int>myList{1, 2, 3, 4, 5, 6, 7, 99, 99, 99, 999};
	myList.push_back(555);
	myList.push_front(151);

	list<int>::iterator it = myList.begin();
	//cout << *it << endl;
	PrintList(myList);
	myList.sort();
	PrintList(myList);
	cout << endl << "pop_front\n" << endl;
	myList.pop_front();
	PrintList(myList);
	myList.unique();
	PrintList(myList);
	myList.reverse();
	PrintList(myList);
	//myList.clear();
	//PrintList(myList);
	auto in = myList.begin();
	advance(in, 5);
	myList.insert(in, 1111);
	PrintList(myList);
	myList.remove(999);
	PrintList(myList);
	//myList.assign(5, 516515616515);
	//PrintList(myList);
	list<int>myList2 = { 19,66,44,22 };
	myList.assign(myList2.begin(), myList2.end());
	PrintList(myList);
	return 0;
}