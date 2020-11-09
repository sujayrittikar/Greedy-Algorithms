/*
	Partition into two subarrays of lengths k and (N-k) such that the difference of sums is maximum.
*/ 

#include<bits/stdc++.h>

using namespace std;

int maxDifference(int arr[], int N, int k)
{
	int M, S=0, S1=0, max_difference=0;
	
	for (int i=0; i<N; i++)
		S += arr[i];
	
	sort(arr, arr+N, greater<int>());
	M = max(k, N-k);
	for (int i=0; i<M; i++)
		S1+= arr[i];
	
	max_difference = S1 - (S-S1);
	return max_difference;
}

int main()
{
	int arr[] = {8, 4, 5, 2, 10};
	int N = sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	cout<<maxDifference(arr, N, k)<<endl;
	return 0;
}
