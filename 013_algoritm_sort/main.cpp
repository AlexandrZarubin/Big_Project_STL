#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

/*
	STL
	алгоритмы
	Sort
*/
bool MyPred(int a, int b)
{
	return a > b;
}
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
	vector<int> v = { 9,4,94,6,1,3,7 };
	for (auto element : v)
	{
		cout << element << endl;
	}
	sort(v.begin(), v.end(), [](int a, int b)
		{
			return a > b;
		});
	//sort(v.begin(), v.end(),MyPred);
	cout << "==============sort===========================" << endl;
	for (auto element : v)
	{
		cout << element << endl;
	}
	cout << "=========================================" << endl;
	const int size = 7;
	int arr[size] = { 9,4,94,6,1,3,7 };
	for (auto element : arr)
	{
		cout << element << endl;
	}
	sort(arr, arr + size);
	cout << "==============sort===========================" << endl;
	for (auto element : arr)
	{
		cout << element << endl;
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
	for (auto element : people)
	{
		cout << "Name:\t" << element.Name << "\tball\t" << element.Score << endl;
	}
	sort(people.begin(), people.end(), [](const Person& p1, const Person& p2)
		{
			//bool result = p1.Name > p2.Name;
			//return result;
			//return p1.Name < p2.Name;
			return p1.Score < p2.Score;

		});
	cout << "sort-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	for (auto element : people)
	{
		cout << "Name:\t" << element.Name << "\tball\t" << element.Score << endl;
	}
	return 0;
}