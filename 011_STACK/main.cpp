#include<iostream>
#include<vector>
#include<list>
#include<deque>


#include<stack>

using namespace std;

/*
	Библиотекастандарных шаблонов(STL)
	Адаптер контейнеров

			stack
*/

int main()
{
	setlocale(LC_ALL, "rus");
	stack<int, list<int>> st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.emplace(9);
	auto a = st._Get_container();
	//cout <<"deque:,list:  " <<a[1] << endl;
	//cout<<st.size()<<endl;
	//cout<<st.top()<<endl<<endl;
	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}




	return 0;
}