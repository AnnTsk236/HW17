#include <iostream>
#include "VectorHW_17.h"

class Vector
{
private:

	double x; //���������� ������
	double y;
	double z;

public:
	Vector() : x(7), y(7), z(8) //����������� �� ���������
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) //����������� � �����������
	{}

	void Show()
	{
		std::cout << x << ' ' << y << ' ' << z << '\n';
	}

	void Size()
	{
		std::cout << sqrt(x * x + y * y + z * z); //���������� ������� � ���������� ������������ 
	}

};


int main()
{
	Vector V;
	V.Show();
	Vector V2(12, 10, 9); //������� ������
	V2.Show();

	V2.Size(); //����� void Size 

	return 0;

}
