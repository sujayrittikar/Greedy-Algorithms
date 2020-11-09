package com.sujay.javaapp;

import java.util.PriorityQueue;

public class max_sum_kneg3 {

    public static int maxSum(int[] a, int k)
    {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int x: a)
                pq.add(x);

        while(k-- > 0)
        {
            int temp = pq.poll();
            temp*=-1;
            pq.add(temp);
        }
        int sum = 0;
        for (int x: pq)
            sum+=x;
        return sum;
    }


    public static void main(String[] args) {
	// write your code here
        int[] arr = {-2, 0, 5, -1, 2};
        int k = 4;
        System.out.println(maxSum(arr, k));
    }
}
