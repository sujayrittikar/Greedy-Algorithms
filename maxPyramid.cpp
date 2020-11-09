/*
	Find maximum height pyramid from the given array of objects.
	Given n  objects, with each object has width wi, we need to arrange them in a pyramidal way such that:
	1] Total width of ith is less than (i+1)th
	2] Total number of objects in the ith is less than (i+1)th.
	
	Approach:
	1] Place the object with lowest width at the top.
	2] Next object at the level right below.
	
	Sort the given array and try to form pyramid from top to bottom. Find smallest eleent of array, place it on top.
*/

#include<bits/stdc++.h>

using namespace std;

int maxLevel(int boxes[], int n)
{
	sort(boxes, boxes+n);
	int ans = 1;
	
	int prev_width = boxes[0];
	int prev_count = 1;
	int curr_count = 0;
	int curr_width = 0;
	
	for (int i=1; i<n; i++)
	{
		curr_width += boxes[i];
		curr_count += 1;
		if (curr_width>prev_width && curr_count>prev_count)
		{
			prev_width = curr_width;
			prev_count = curr_count;
			
			curr_count = 0;
			curr_width = 0;
			
			ans++;
		}
		
	}
	
	return ans;
}

int main()
{
	int boxes[] = {40, 10, 20, 30, 50, 70, 90};
	int n = sizeof(boxes)/sizeof(boxes[0]);
	cout<<maxLevel(boxes, n)<<endl;
	return 0;
}
