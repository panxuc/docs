#include <iostream>
using namespace std;
template <class T>
void sort(T a[], int len)
{
	int i, j;
	T temp;
	for (i = 0; i < len - 1; i++)
		for (j = i + 1; j < len; j++)
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
