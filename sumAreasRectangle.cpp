/*
	Sum of Areas of Rectangles possible for an array.
	
	Given an array, compute the sum of all possible maximum area rectangles which can be formed from the array elements.
	
	Approach:
	1] Sort the elements in decreasing array.
	2] After sorting, start selecting the elements of array.
	3] Selection of two elements of array is possible if elements of array are equal (a[i]==a[i+1]) or length of smaller element a[i+1] is one less than a[i].
	4] Set the flag variable
	5] Calculate the breadth in the same way
	6] Sum the area of the rectangle
	7] After getting length and breadth both, again set the flag variable false so that we will now search for a new rectangle.

*/

#include<bits/stdc++.h>
using namespace std;

int MaxTotalRectangleArea(int a[], int n)
{
	sort(a, a+n, greater<int>());
	int sum = 0;
	bool flag = false;
	int len;
	
	for (int i=0; i<n; i++)
	{
		if ((a[i]==a[i+1]||a[i]-a[i+1]==1)&&(!flag))
		{
			flag = true;
			len = a[i+1];
			i++;
		}
		
		else if ((a[i]==a[i+1]||a[i]-a[i+1]==1)&&(flag))
		{
			sum = sum + a[i+1]*len;
			flag = false;
			i++;
		}
	}
	
	return sum;
}

int main()
{
	int a[] = {10, 10, 10, 10, 11, 10, 11, 10, 9, 9, 8, 8};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<MaxTotalRectangleArea(a, n);
	return 0;
}
