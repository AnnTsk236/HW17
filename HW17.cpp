#include <iostream>
#include "VectorHW_17.h"

class Vector
{
private:

	double x; //Переменные класса
	double y;
	double z;

public:
	Vector() : x(7), y(7), z(8) //Конструктор по умолчанию
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) //Конструктор с аргументами
	{}

	void Show()
	{
		std::cout << x << ' ' << y << ' ' << z << '\n';
	}

	void Size()
	{
		std::cout << sqrt(x * x + y * y + z * z); //Нахождение вектора в трехмерном пространстве 
	}

};


int main()
{
	Vector V;
	V.Show();
	Vector V2(12, 10, 9); //Объекты класса
	V2.Show();

	V2.Size(); //Вызов void Size 

	return 0;

}
