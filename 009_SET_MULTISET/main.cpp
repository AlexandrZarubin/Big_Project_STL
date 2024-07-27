#include<iostream>
#include<vector>
#include<set>
using namespace std;

/*
		Библиотека стандарнтых шаблонов STL
		set
		multiset  бинарное дерево
*/

int main()
{
	setlocale(LC_ALL, "rus");
	multiset<int>myMultiset = { 1,2,3,4,5,6,6,6,7,8,9 };

	auto it1 = myMultiset.lower_bound(6);
	auto it2 = myMultiset.upper_bound(6);
	auto it2 = myMultiset.equal_range(6);
	for (auto& var : myMultiset)
	{
		cout << var << endl;
	}
	cout << "-----------------------\n\n\n";
	set<int>mySet = { 1,2,3,4,5,6,7,8,9,99 };

	mySet.erase(5);
	mySet.insert(64);
	//int value;
	//cin >> value;
	/*if (mySet.find(value) != mySet.end())
	{
		cout << "Число " << value << " найдено";
	}
	else
	{
		cout << "число " << value << " отсутсвует";
	}*/

	//auto it=mySet.find(9);
	//cout << *it;
	/*mySet.insert(5);
	mySet.insert(1);
	mySet.insert(12);
	mySet.insert(20);
	mySet.insert(5);*/
	/*for (int i = 0; i < 20; i++)
	{
		mySet.insert(rand() % 10);
	}*/
	//mySet.find(100);
	for (auto& var : mySet)
	{
		cout << var << endl;
	}
}