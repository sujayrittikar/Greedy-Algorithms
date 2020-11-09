/*
	Find Minimum sum by choosing minimum of pairs from array.
	
	Given an array A[] of n-elements, we need to select 2 adjacent elements and delete the larger of them and store smaller of them to another array, say B[].
	We need to perform this operation till array A[] contains only single element.
	Construct B[] in such a way that total sum of its element is minimum. Print the total sum of array B[].
	
	Simple thinking:
	
	def minSum(a):
		b = []
		i = 0
		while(len(a)>1):
			m = min(a[i], a[i+1])
			b.append(m)
			a.remove(max(a[i], a[i+1]))
		return sum(list(set(b)))
		
	Easy Trick: smallest*(n-1)
*/

#include<bits/stdc++.h>
using namespace std;

int minSum(int A[], int n)
{
	int min_val = *min_element(A, A+n);
	return (min_val*(n-1));
}

int main()
{
	int A[] = {3, 6, 2, 8, 7, 5};
	int n = sizeof(A)/sizeof(A[0]);
	cout<<minSum(A, n);
	return 0;
}
