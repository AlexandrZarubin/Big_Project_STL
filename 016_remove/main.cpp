#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

/*
	Бибилиотека стандарных шаблонов(STL)
	Алгоритмы
	удаление элемента
	std::remove, std::remove_if
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

	vector<int>v = { 5,9,1,46,4,9,4 };

	auto result= remove(v.begin(), v.end(), 9);
	v.erase(result, v.end());

	vector<Person>people
	{
		Person("Петя", 30, 22),
			Person("Даша", 200, 25),
			Person("Катя", 198, 24),
			Person("Андрей", 181, 23),
			Person("Сергей", 50, 30)
	};
	//auto result2= remove_if(people.begin(), people.end(), [](const Person& p) {
		//return p.Score<150;
		//});
	//people.erase(result2, people.end());
	
	people.erase(remove_if(people.begin(), people.end(), [](const Person& p) 
		{
		return p.Score<150&&p.Age>25;
		}),people.end());
	
	cout << "Всего элементов:\t" << people.size() << endl;
	
	for (auto element:people)
	{
		cout << "Имя:\t" << element.Name << "\tбаллы\t" << element.Score << "\tВозраст\t" << element.Age << endl;
	}
	string str = "Текст с несколькими  пробелами";
	cout << str << endl;
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;
	return 0;
}