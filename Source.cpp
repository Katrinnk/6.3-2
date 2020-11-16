#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Nep(int* a, const int size, int i, int k)
{
	if (!(a[i] % 2 == 0))
		k++;
	if (i<size-1)
		Nep(a, size, i + 1, k+1);
	return k;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = 5;
	int High = 90;
	Create(a, n, Low, High,0);
	Print(a, n,0);
	cout << "k=" << Nep(a, n, 0, 1) << endl;
	return 0;
}