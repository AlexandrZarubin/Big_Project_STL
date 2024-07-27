#include<iostream>
#include<vector>
using namespace std;

/*
	библиотека стандарных шаблонов (STL)

			Итераторы
*/

int main()
{

	setlocale(LC_ALL, "rus");
	/*int arr[] = { 2,6,9 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl;*/

	vector<int> myVector = { 1,9,44,422,676,78 };
	//cout << myVector[0] << endl;
	//vector<int>::iterator it;
	//it = myVector.begin();
	////*it = 1000;
	////it++;
	//it+=2;
	//it--;
	//cout << *it << endl;
	vector<int>::iterator i = myVector.begin();
	//cout << *(i+3) << endl;

	//for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		//*i = 5; iter //итератор константный
		cout << *i << endl;
	}
	cout << "\tinsert\t\n\n";
	vector<int>::iterator it = myVector.begin();
	advance(it, 3);
	myVector.insert(it, 9999);

	vector<int>::iterator itErase = myVector.begin();
	//myVector.erase(itErase);
	myVector.erase(itErase + 3, itErase + 5);
	//advance(i, 3);		//сдвиг итератора
	//cout << *i << endl;

	cout << "-------------------------------------------\n";
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
		//for (vector<int>::const_iterator i=myVector.cbegin();i!=myVector.cend(); i++)
		//for (vector<int>::reverse_iterator i=myVector.rbegin();i!=myVector.rend(); i++)
	{
		//*i = 5; iter //итератор константный
		cout << *i << endl;
	}
	return 0;
}