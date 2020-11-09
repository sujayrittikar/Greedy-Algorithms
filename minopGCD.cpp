/*
	Minimum operations to make GCD of array a multiple of k.
	
	Given an array and k, we need to find the minimum operations needed to make GCD of the array equal or multiple of k.
	An operation means: Increment or Decrement an array element by 1.
	
*/

#include<bits/stdc++.h>

using namespace std;

int MinOperation(int a[], int n, int k)
{
	int result = 0;
	
	for (int i=0; i<n; ++i)
	{
		if (a[i]!=1 && a[i]>k)
			result = result + min(a[i]%k, k-a[i]%k);
		else 
			result = result + k - a[i];
	}
	return result;
}

int main()
{
	int arr[] = {4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 5;
	cout<<MinOperation(arr, n, k);
	return 0;
}
