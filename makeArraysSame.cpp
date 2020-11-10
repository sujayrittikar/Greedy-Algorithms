/*
	Making elements of two arrays same with min. inc/dec.
	Given: 2 arrays of same size.
	Convert 1st array into another with minimum operations.
	In each operation, we can increment/decrement an element by one, no order considered.
	
	Approach:
	
	1] Sort both arrays.
	2] After sorting, run a loop in whch we compare the first and second array elements and calculate the required operation needed to make the first array equal to second.
*/

#include<bits/stdc++.h>
using namespace std;

int MinOperation(int a[], int b[], int n)
{
	sort(a, a+n);
	sort(b, b+n);
	
	int result = 0;
	
	for (int i=0; i<n; i++)
	{
		result = result + abs(a[i] - b[i]);
	}
	
	return result;
}

int main()
{
	int a[] = {3, 1, 1};
	int b[] = {1, 2, 2};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<MinOperation(a, b, n);
	return 0;
}
