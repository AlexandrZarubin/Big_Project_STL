
#include<iostream>
#include<list>
#include<deque>


#include<queue>

using namespace std;

/*
	Библиотекастандарных шаблонов(STL)
	Адаптер контейнеров

			queue  #include<list> #include<deque>

			prioritu_queue #include<list> #include<vector>
*/

int main()
{
	setlocale(LC_ALL, "rus");
	priority_queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.
		//cout << q.front() << endl;
		//cout << q.back() << endl;
		//auto a = q.;

		cout << "elements count " << q.size() << endl;
	while (!q.empty())
	{
		//cout << q.front() << endl;
		q.pop();
		cout << "elements count " << q.size() << endl;
	}

	return 0;
}