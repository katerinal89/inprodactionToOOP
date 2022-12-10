#include<iostream>
using namespace std;
#define WIDTH 22

class String
{
	size_t size; //������ ������ � ������
	             //size_t - unsigned int
	char* str; //����� ������ � ������������ ������
public:
	//  Constructors:
	explicit String(size_t size = 80)
	{
		this->size = size;
		this->str = new char[size]{};
		cout.width(WIDTH);
		cout << std::left << "DefaultConstactor:" << this << endl;

	}
	String(const char* str)
	{
		this->size = strlen(str) + 1; //strlen() ���������� ������ ������ � �������
									  // +1 ����������� ����� ��� NULL ����������� 
		this->str = new char[size] {};
		for (int i = 0; i< size; i++)
		{
			this->str[i] = str[i];
		}
		cout.width(WIDTH);
		cout << std::left << "Constructor:" << this << endl;


	}
	String(const String& other)
	{
		this->size = other.size;
		this->str = new char[size] {};
		for (int i = 0; i < size; i++) this->str[i] = other.str[i];
		cout.width(WIDTH);
		cout << std::left << "CopyConstructor:" << this << endl;

	}
	~String()
	{
		delete[]this->str;
		cout.width(WIDTH);
		cout << std::left << "Destructor:" << this << endl;
	}
	// Methods:
	void print()const
	{
		cout << "Size:\t" << size << endl;
		cout << "Str:\t" << str << endl;

	}
};
void main()
{
	setlocale(LC_ALL, "");
	//String str1=12; // explicit constructor ������ ��� �������� 
	
	String str1(12); // explicit constructor ����� ������� ������ ���

	str1.print();

	String str2 = "Hello";
	str2.print();
	
	String str3 = str2;
	str3.print();

}