#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
/*
	STL
	Алгоритмы
	Поиск
	std::find, std::find_if, std::find_if_not
*/

class Person
{
public:
	string Name;
	double Score;
	Person(string name, double score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p)
	{
		return p.Score > 180;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> v = { 6,4,4,12,1,2,7 };
	/*auto result = find(v.begin(), v.end(), 7);
	if (result == v.end())
	{
		cout << "no number\n";
	}
	else
	{

		cout << "number\n";
	}*/

	auto result = find_if(v.begin(), v.end(), [](int a)
		{
			return a % 2 == 0;
		});
	if (result == v.end())
	{
		cout << "no number\n";
	}
	else
	{

		cout << "number\n";
	}

	vector<Person>people
	{
		Person("Вася", 181),
			Person("Петя", 30),
			Person("Маша", 179),
			Person("Даша", 200),
			Person("Катя", 198),
			Person("Андрей", 181),
			Person("Сергей", 50),
			Person("Иван", 150),

	};
	auto result2 = find_if(people.begin(), people.end(), [](const Person& p)
		{
			return p.Name == "fsdfdfsdf";
		});
	if (result2 == people.end())
	{
		cout << "no people\n";
	}
	else
	{

		cout << "people\n";
	}
	return 0;
}