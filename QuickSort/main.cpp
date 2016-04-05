#include <iostream>
#include "QuickSort.h"

using std::cout;
using std::endl;

int main()
{
	int a[] = { 8, 7, 6, 5, 4, 3, 2, 1 };

	quick_sort(a, sizeof(a)/sizeof(int));

	for (int i = 0; i < sizeof(a)/sizeof(int); ++i)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}
