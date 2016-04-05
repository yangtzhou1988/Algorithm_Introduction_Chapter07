#ifndef _QUICK_SORT_H_
#define _QUICK_SORT_H_

template <typename T>
void exchange(T &a, T &b)
{
	if (&a != &b){
		T t = a;
		a = b;
		b = t;
	}
}

template <typename T>
int partition(T d[], int p, int r)
{
	int i = p;
	for (int j = p; j <= r-1; ++j)
		if (d[j] <= d[r]) exchange(d[i++], d[j]);

	exchange(d[i], d[r]);
	return i;
}

template <typename T>
void quick_sort(T d[], int p, int r)
{
	if (p < r) {
		int q = partition(d, p, r);
		quick_sort(d, p, q-1);
		quick_sort(d, q+1, r);
	}
}

template <typename T>
void quick_sort(T d[], int n)
{
	if (n <= 0 || d == NULL)
		return;

	quick_sort(d, 0, n-1);
}

#endif // _QUICK_SORT_H_
