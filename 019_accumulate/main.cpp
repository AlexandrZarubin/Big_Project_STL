#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>

#include<numeric>
using namespace std;
/*

	Библиотека стандарных шаблонов(Stl)

	Алгоритмы

	Cумма элементов

	произведение элементов

	сумма четных элементов

*/

int main()
{
	setlocale(LC_ALL, "rus");
	vector<int> v = { 2,3,4 };
	int v1[] = { 2,3,4 };
	auto result = accumulate(begin(v1),end(v1), 0);//сумма
	auto result1 = accumulate(v.begin(), v.end(), 0);//сумма
	auto result2 = accumulate(v.begin(), v.end(), 1, [](int a, int b) {return a * b; });//произведение
	auto result3 = accumulate(v.begin(), v.end(), 0, [](int a, int b) //сумма четных элеметов
		{
		if (b % 2 == 0) 
		{
			return a + b;
		} 
		else
		{
			return a;
		}
		
		});
	auto result4 = accumulate(next(v.begin()), v.end(), to_string(v[0]), [](string a, int b) {return a+"-"+to_string(b); });
	cout << "RESULT: " << result << endl;
	cout << "RESULT1: " << result1 << endl;
	cout << "RESULT2: " << result2 << endl;
	cout << "RESULT3: " << result3 << endl;
	cout << "RESULT3: " << result4 << endl;
	


	return 0;
}