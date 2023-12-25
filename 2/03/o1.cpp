#include <iostream>
using namespace std;

class Salesman
{
public:
	Salesman(int _saleNo, int _saleNum, float _salePri);
	static float getSum();
	static float getAvePri();

private:
	int saleNo;
	int saleNum;
	float salePri;
	static int sumNum;
	static float sumPri;
	static float avePri;
};

int Salesman::sumNum = 0;
float Salesman::sumPri = 0;
float Salesman::avePri = 0;

Salesman::Salesman(int _saleNo, int _saleNum, float _salePri)
{
	saleNo = _saleNo;
	saleNum = _saleNum;
	salePri = _salePri;
	sumNum += saleNum;
	sumPri += salePri * saleNum;
	avePri = sumPri / sumNum;
}

float Salesman::getSum()
{
	return sumPri;
}

float Salesman::getAvePri()
{
	return avePri;
}

int main()
{
	Salesman s1(101, 5, 23.5), s2(102, 12, 24.5), s3(103, 100, 21.5);
	cout << "当日此商品总销售款为" << s3.getSum() << "元。" << endl
		 << "每件商品平均售价为" << s3.getAvePri() << "元。" << endl;
	return 0;
}