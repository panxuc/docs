# 第12次作业

## 必做题

### 第1道题

```cpp
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
```

### 第2道题

```cpp
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
```

## 选做题

```cpp
#include <iostream>
using namespace std;
class SNode
{
public:
	SNode(int value);
	~SNode(){};
	int m_value;
	SNode *m_next;
};
template <class Type>
class TList
{
public:
	TList();
	~TList();
	virtual bool Insert(Type value, int num = -1);
	bool Delete(Type value);
	bool Contain(Type value);
	void Print();

protected:
	SNode *m_head;
};
template <class Type>
class TSet : public TList<int>
{
public:
	bool Insert(int value, int num = -1);
};
SNode::SNode(int value)
{
	m_value = value;
	m_next = NULL;
}
template <class Type>
TList<Type>::TList()
{
	m_head = NULL;
}
template <class Type>
TList<Type>::~TList()
{
	SNode *p = m_head;
	for (; p != NULL;)
	{
		m_head = m_head->m_next;
		delete p;
		p = m_head;
	}
}
template <class Type>
bool TList<Type>::Insert(Type value, int num)
{
	SNode *p = new SNode(value);
	if (p == NULL)
	{
		return false;
	}
	if (num == -1)
	{
		p->m_next = m_head;
		m_head = p;
	}
	else
	{
		SNode *p1 = m_head;
		for (int i = 0; i < num - 1; i++)
		{
			p1 = p1->m_next;
		}
		p->m_next = p1->m_next;
		p1->m_next = p;
	}
	return true;
}
template <class Type>
bool TList<Type>::Delete(Type value)
{
	SNode *p1, *p2;
	if (m_head->m_value == value)
	{
		p1 = m_head->m_next;
		delete m_head;
		m_head = p1;
		return true;
	}
	else
	{
		for (p1 = m_head, p2 = m_head->m_next; p2 != NULL;)
		{
			if (p2->m_value == value)
			{
				p1->m_next = p2->m_next;
				delete p2;
				p2 = NULL;
				return true;
			}
			else
			{
				p1 = p1->m_next;
				p2 = p2->m_next;
			}
		}
	}
	return false;
}
template <class Type>
bool TList<Type>::Contain(Type value)
{
	for (SNode *p = m_head; p != NULL; p = p->m_next)
	{
		if (p->m_value == value)
		{
			return true;
		}
	}
	return false;
}
template <class Type>
void TList<Type>::Print()
{
	cout << "结点的值依次为：";
	for (SNode *p = m_head; p != NULL; p = p->m_next)
	{
		cout << " " << p->m_value << ";";
	}
	cout << endl;
}
template <class Type>
bool TSet<Type>::Insert(int value, int num)
{
	if (!(TList<int>::Contain(value)) && (TList<int>::Insert(value, num)))
	{
		return true;
	}
	return false;
}
int main()
{
	TList<int> sIntList;
	sIntList.Insert(12);
	sIntList.Insert(24);
	sIntList.Insert(48);
	sIntList.Insert(96);
	sIntList.Insert(24);
	sIntList.Print();

	sIntList.Delete(24);
	sIntList.Print();

	TSet<int> sIntSet;
	sIntSet.Insert(12);
	sIntSet.Insert(24);
	sIntSet.Insert(48);
	sIntSet.Insert(96);
	sIntSet.Insert(24);
	sIntSet.Print();

	sIntSet.Delete(24);
	sIntSet.Print();

	cin.get();

	return 0;
}
```

运行结果

```sh
结点的值依次为： 24; 96; 48; 24; 12;
结点的值依次为： 96; 48; 24; 12;
结点的值依次为： 96; 48; 24; 12;
结点的值依次为： 96; 48; 12;
```