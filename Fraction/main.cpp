#include<iostream>
using namespace std;


class Fraction
{
	int x; //���������
	int y; //�����������
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
	cout << "������� ��������� �����: ";
	cin >> x;
	cout << "������� ����������� �����: ";
	cin >> y;
	Fraction A(x, y);
	cout << x << "/" << y << endl;
	
}
