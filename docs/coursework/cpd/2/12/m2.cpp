#include <iostream>
using namespace std;
template <class T>
class TList
{
public:
	int search(T x);

private:
	T *a;
};
template <class T>
int TList<T>::search(T x)
{
	int i;
	for (i = 0; a[i] != x; i++)
		;
	return i;
}