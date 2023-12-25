#include <iostream>
#include <cassert>
using namespace std;

class Matrix
{
	double *data;
	int row;
	int col;

public:
	Matrix();
	Matrix(int r, int c);
	Matrix(double *pData, int r, int c);
	Matrix(Matrix &mat);
	~Matrix();
	double &operator[](int n);
	double &operator()(int r, int c);
	Matrix RMulti(Matrix &rmat);
	void show();
};

Matrix::Matrix()
{
	data = NULL;
	row = 0;
	col = 0;
}
Matrix::Matrix(int r, int c)
{
	data = new double[r * c];
	row = r;
	col = c;
}
Matrix::Matrix(double *pData, int r, int c)
{
	data = new double[r * c];
	for (int i = 0; i < r * c; i++)
	{
		data[i] = pData[i];
	}
	row = r;
	col = c;
}
Matrix::Matrix(Matrix &mat)
{
	row = mat.row;
	col = mat.col;
	data = new double[mat.row * mat.col];
	for (int i = 0; i < row * col; i++)
	{
		data[i] = mat.data[i];
	}
}
Matrix::~Matrix()
{
	delete[] data;
}
double &Matrix::operator[](int n)
{
	assert(n >= 0 && n < row * col);
	return data[n];
}
double &Matrix::operator()(int r, int c)
{
	assert(r >= 0 && r < row && c >= 0 && c < col);
	return data[col * r + c];
}
Matrix Matrix::RMulti(Matrix &rmat)
{
	double temp = 0.0;
	if (col == rmat.row && row == rmat.col)
	{
		Matrix ret(row, row);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < row; j++)
			{
				temp = 0.0;
				for (int k = 0; k < col; k++)
				{
					temp += (*this)(i, k) * rmat(k, j);
				}
				ret(i, j) = temp;
			}
		}
		return ret;
	}
	else
		return Matrix();
}
void Matrix::show()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << (*this)(i, j) << ' ';
		}
		cout << endl;
	}
}
int main()
{
	double _a[6] = {1, 2, 3, 4, 5, 6};
	double _b[6] = {1, 4, 2, 5, 3, 6};
	Matrix a(_a, 2, 3);
	Matrix b(_b, 3, 2);
	Matrix ret(a.RMulti(b));
	ret.show();
	return 0;
}