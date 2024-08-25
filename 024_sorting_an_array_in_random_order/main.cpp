#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include<random>
using namespace std;
/*
	Библиотека стандарных шаблонов (STL)

				Алгоритмы

	соритровка массива в случайном порядке

	std::random_shiffle
*/

class IAction
{
public:
	virtual void Action() = 0;
};
class CatAction :public IAction
{
	virtual void Action()override
	{
		cout << "Гладим кота" << endl;
	}
};
class TeaAction :public IAction
{
	virtual void Action()override
	{
		cout << "Пьем чай " << endl;
	}
};
class DogAction :public IAction
{
	virtual void Action()override
	{
		cout << "Гуляем с собакой " << endl;
	}
};
class SleepAction :public IAction
{
	virtual void Action()override
	{
		cout << "Спим " << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto item : arr)
	{
		cout << item << "\t";
	}
	cout << endl;
	random_shuffle(begin(arr), end(arr));
	for (auto item : arr)
	{
		cout << item << "\t";
	}

	cout << endl;
	IAction* arr1[] = {
		new CatAction (),
		new TeaAction (),
		new DogAction (),
		new SleepAction()
	};
	for (auto const&item : arr1)
	{
		item->Action();
	}
	cout << endl;
	//random_shuffle(begin(arr1), end(arr1));
	
	// Создаем генератор случайных чисел и перемешиваем элементы массива
	random_device rd;					// Создаем объект random_device для получения истинных случайных чисел
	mt19937 g(rd());					// Инициализируем генератор псевдослучайных чисел с помощью значения от random_device
	shuffle(begin(arr1), end(arr1), g); // Перемешиваем элементы массива arr1 случайным образом

	for (auto const & item : arr1)
	{
		item->Action();
	}
	for (auto const& item : arr1)
	{
		delete item;
	}
	return 0;
}