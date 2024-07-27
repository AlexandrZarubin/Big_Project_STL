#include<iostream>
#include<vector>
using namespace std;

/*
	Библиотека стандарных шаблонов STL

	VECTOR
*/

int main()
{
	setlocale(LC_ALL, "rus");
	//vector<int> myVector{0,484,484,999};
	//vector<int> myVector(20);
	vector<int> myVector(20, 999);
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);
	cout << "Количество элементов в векторе: " << myVector.size() << endl;
	//myVector.clear();
	myVector.pop_back();
	cout << "Количество элементов в векторе: " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	myVector[0] = 1000;
	cout << "-----------------------------------\n";
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	cout << "----------------------------------\n\n";
	try
	{
		cout << myVector.at(10) << endl;

	}
	catch (const std::out_of_range& ex)
	{
		cout << ex.what() << endl << endl;
	}
	cout << "--------------------------------------\n\n";
	cout << "capacity vectora: " << myVector.capacity() << endl;
	myVector.reserve(100);
	cout << "capacity vectora: " << myVector.capacity() << endl;
	myVector.shrink_to_fit();
	cout << "shrink_to_fit()\n";
	cout << "capacity vectora: " << myVector.capacity() << endl;
	cout << myVector.empty() << endl;
	myVector.resize(5, 448);
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	return 0;
}