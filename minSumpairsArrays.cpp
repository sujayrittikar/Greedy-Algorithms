/*
	Minimum sum of absolute difference of pairs of two arrays.
	Given 2 arrays a[] and b[] of equal length n, pair each element of array a to an element is array b, such that the sum of absolute differences of all the pairs is minimum.
*/

#include<bits/stdc++.h>
using namespace std;

long long int findMinSum(int a[], int b[], int n)
{
	sort(a, a+n);
	sort(b, b+n);
	
	long long int sum = 0;
	for (int i=0; i<n; i++)
		sum = sum + abs(a[i]-b[i]);
	return sum;
}

int main()
{
	int a[] = {4, 1, 8, 7};
	int b[] = {2, 3, 6, 5};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<findMinSum(a, b, n);
	return 0;
}
