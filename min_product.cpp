/*
	3 Important Rules to consider while solving:
	1] If there are even no. of -ve no.s and no zeros,
			result = product of all except largest valued -ve no.
	2] If there are odd no. of -ve no.s and no zeros,
			result = product of all
	3] If there are zeros and +ve no.s, no -ve,
			result = 0
*/

#include<bits/stdc++.h>

using namespace std;

int minProductSubset(int a[], int n)
{
	if (n==1)
		return a[0];
	int max_neg = INT_MIN;
	int min_pos = INT_MAX;
	int count_neg = 0, count_zero = 0;
	int prod = 1;
	for (int i=0; i<n; i++)
	{
		if (a[i]==0)
		{
			count_zero++;
			continue;
		}
		
		if (a[i]<0)
		{
			count_neg++;
			max_neg = max(max_neg, a[i]);		
		}
			
		if (a[i]>0)
		{
			min_pos = min(min_pos, a[i]);
		}
		
		prod = prod*a[i];
		
	}
	
	if (count_zero==n||(count_neg==0 && count_zero>0))
		return 0;
	
	if (count_neg==0)
		return min_pos;
		
	if(!(count_neg & 1) && count_neg!=0)
		prod = prod/max_neg;
		
	return prod;
}

int main()
{
	int a[] = {-1, -1, -2, 4, 3};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<minProductSubset(a, n);
	return 0;
}
