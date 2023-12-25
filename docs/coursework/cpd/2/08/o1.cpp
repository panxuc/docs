#include <iostream>
using namespace std;
class Shape
{
public:
	Shape() {}
	~Shape() {}
	virtual float GetArea() = 0;
	virtual float GetPerim() = 0;
};
class Rectangle : public Shape
{
public:
	Rectangle(float aa = 4, float bb = 3)
	{
		a = aa;
		b = bb;
	}
	virtual float GetArea()
	{
		return a * b;
	}
	virtual float GetPerim()
	{
		return (a + b) * 2;
	}

private:
	float a, b;
};
class Circle : public Shape
{
public:
	Circle(float rr = 1)
	{
		r = rr;
	}
	virtual float GetArea()
	{
		return r * r * 3.141592653;
	}
	virtual float GetPerim()
	{
		return r * 3.141592653 * 2;
	}

private:
	float r;
};
int main()
{
	float a, b, r;
	cout << "Enter a, b, r:" << endl;
	cin >> a >> b >> r;
	Rectangle rect(a, b);
	Circle cir(r);
	cout << "Rectangle Area = " << rect.GetArea() << endl
		 << "Rectangle Perim = " << rect.GetPerim() << endl
		 << "Circle Area = " << cir.GetArea() << endl
		 << "Circle Perim = " << cir.GetPerim() << endl;
}