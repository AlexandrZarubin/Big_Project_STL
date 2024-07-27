#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

/*
	STL
	Алгоритмы
	Поиск
	std::copy, std::copy_if

*/
class Person
{
public:
	string Name;
	double Score;
	int Age;
	Person(string name, double score, int age)
	{
		this->Name = name;
		this->Score = score;
		this->Age = age;
	}
	bool operator()(const Person& p)
	{
		return p.Score > 180;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	vector<Person>people
	{
		Person("Вася", 181, 17),
			Person("Петя", 30, 22),
			Person("Маша", 179, 19),
			Person("Даша", 200, 25),
			Person("Катя", 198, 24),
			Person("Андрей", 181, 23),
			Person("Сергей", 50, 30),
			Person("Иван", 150, 40)

	};
	vector<Person>result;
	//copy(people.begin(), people.end(),back_inserter(result) );
	copy_if(people.begin(), people.end(), back_inserter(result), [](const Person& p)
		{
			//return p.Name == "Иван";
			return p.Age > 25;
			//return p.Age > 25&&p.Score>140;
			//return p.Age > 25&&p.Score>140;
		});
	sort(result.begin(), result.end(), [](const Person& p1, const Person& p2) {
		return p1.Age < p2.Age;
		});
	cout << "Всего элементов:\t" << result.size() << endl;
	for (auto element : result)
	{
		cout << "Имя:\t" << element.Name << "\tбаллы\t" << element.Score << endl;
	}
	return 0;
}