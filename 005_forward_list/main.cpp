#include<iostream>
#include<forward_list>
using namespace std;

/*
	библиотека стандартных шаблонов STL
				forward_list
*/

int main()
{
	setlocale(LC_ALL, "rus");
	forward_list<int>fl = { 5,4,3,2,1 };
	fl.push_front(1);
	fl.push_front(2);
	fl.push_front(3);
	fl.push_front(4);
	fl.push_front(5);

	forward_list<int>::iterator it = fl.begin();
	//it++;
	fl.insert_after(it, 99999);
	for (const auto& var : fl)
	{
		cout << var << endl;
	}
	fl.erase_after(it);
	//cout << *it << endl;
	cout << "-------------------------\n\n";

	forward_list<int>::iterator it2 = fl.before_begin();
	//cout << *it2 << endl;
	fl.insert_after(it2, 9999);
	cout << "---------------------------\n\n";
	for (const auto& var : fl)
	{
		cout << var << endl;
	}


	return 0;
}