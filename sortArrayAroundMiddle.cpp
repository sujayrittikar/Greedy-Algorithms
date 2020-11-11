/*
	Sorting array with reverse around middle.
	
	1. We have to select a subarray from the given array such that the middle element(or elements (in case of even
number of elements)) of subarray is also the middle element(or elements (in case of even number of elements)) of
the given array.
	
	2. Then we have to reverse the selected subarray and place this reversed subarray in the array.
We can do the above operation as many times as we want. The task is to find if we can sort array with the given operation. 
	
	
	Approach:
	1] Make a copy of the array and sort the copied array.
	2] Compare each element of the sorted array with equivalent element of original array and its mirror image when pivot around center.
	Sorting takes: O(n*logn) and 2n comparisons
*/

#include<bits/stdc++.h>
using namespace std;

bool ifPossible(int arr[], int n)
{
	int cp[n];
	
	copy(arr, arr+n, cp);
	sort(cp, cp+n);
	
	for (int i = 0; i<n; i++)
	{
		if(!(arr[i]==cp[i]) && !(arr[n-i-1]==cp[i]))
			return false;
	}
	return true;
}

int main()
{
	int a[] = {1, 6, 3, 4, 5, 2, 7};
	int n = sizeof(a)/sizeof(a[0]);
	if (ifPossible(a, n))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
