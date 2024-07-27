#include<iostream>
#include<vector>
#include<string>

#include<map>
using namespace std;

/*
		Библиотека стандарнтых шаблонов STL
		map
		multimap
*/

int main()
{
	setlocale(LC_ALL, "rus");

	/*pair<int, string> p(1,"telefon");
	cout << p.first << endl;
	cout << p.second << endl;*/

	map<int, string>myMap;
	myMap.insert(make_pair(1, "telefon"));
	myMap.insert(pair<int, string>(2, "telefon2"));
	myMap.emplace(3, "monitor");
	auto it = myMap.find(2);
	if (it != myMap.end())
	{
		cout << it->first << endl;
		cout << it->second << endl;
	}
	cout << "---------------------------------\n\n";
	cout << myMap[1] << endl;

	map<string, int>myMap2;
	myMap2.emplace("pety", 222);
	cout << "___________________________________________---\n\n";
	cout << myMap2["pety"] << endl;
	multimap<string, int>myMultimap;
	return 0;
}