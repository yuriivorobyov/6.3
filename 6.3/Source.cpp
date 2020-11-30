#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, int size)
{
	cout << "Element" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int main()
{
	int size;
	cout << " Size"; cin >> size;
	int* a = new int[size];
	Create(a, size);
	Print(a, size);
	return 0;

}
