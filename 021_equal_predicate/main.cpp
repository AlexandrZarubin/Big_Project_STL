#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*
		Алгоритмы

	сравнить две последовательности
		equal and mismatch

*/
class Point
{
public:
	int x, y;
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	
	vector<Point>arr
	{
		Point(1, 3),
		Point(4, 5),
		Point(5, 7),
	};
	vector<Point>arr2
	{
		Point(1, 3),
		Point(4, 5),
		Point(5, 7),
	};
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point& p1, const Point& p2) {
		//bool result = p1.x == p2.x && p1.y == p2.y;
			//return result;
		return p1.x == p2.x && p1.y == p2.y;
		});
	cout << result << endl;
	return 0;
}