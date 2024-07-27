#include<iostream>
#include<array>

using namespace std;

/*
	библиотека стандарных шаблонов STL
	ARRAY
*/

int main()
{
	array<int, 4>arr = { 4,94,77,9 };
	array<int, 4>arr2 = { 1,94,77,9 };

	bool result = (arr == arr2);
	cout << result << endl;

	return 0;
}