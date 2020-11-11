/*
	Minimize the sum of product of two arrays with permutation allowed.
	
	Given 2 arrays A and B, of equal size n, the task is to find the minimum value of A[0]*B[0] + A[1]*B[1] + .... + A[n-1]*B[n-1].
	Shuffling of elements of arrays A and B is allowed.
	
	Approach:
	1] Sort both the arrays A and B.
	2] Traverse the array and for each element multiply A[i] and B[n-i-1] and add to the total.
*/


#include<bits/stdc++.h>
using namespace std;

int minValue(int A[], int B[], int n)
{
	sort(A, A+n);
	sort(B, B+n);
	
	int result = 0;
	for (int i=0; i<n; i++)
	{
		result += (A[i]*B[n-i-1]);
	}
	
	return result;
}

int main()
{
	int A[] = {3, 1, 1};
	int B[] = {6, 5, 4};
	int n = sizeof(A)/sizeof(A[0]);
	cout<<minValue(A, B, n)<<endl;
	return 0;
}
