#include<iostream>
using namespace std;


class Fraction
{
	int x; //числитель
	int y; //знаминатель
public:
	Fraction(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
}

void main()
{
	setlocale(LC_ALL, "");
	int x, y;
	cout << "¬ведите числитель дроби: ";
	cin >> x;
	cout << "¬ведите знаменатель дроби: ";
	cin >> y;
	Fraction A(x, y);
	cout << x << "/" << y << endl;
	
}
