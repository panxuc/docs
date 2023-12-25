#include <iostream>
using namespace std;
class TT
{
public:
	TT(int n = 1, int d = 1);
	void Print();
	friend TT Div(TT &r1, TT &r2);

private:
	int N, D;
};
TT Div(TT &r1, TT &r2)
{
	return TT(r1.N / r2.D + r1.D / r2.N, r1.D / r2.D);
}
TT::TT(int n, int d)
{
	N = n;
	D = d;
}
void TT::Print()
{
	cout << "N = " << N << "D = " << D << endl;
}
int main()
{
	TT a(1, 2), b(3, 4), c;
	c = Div(a, b);
	c.Print();
}