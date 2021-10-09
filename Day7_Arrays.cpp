/*
                                              Day 7: Arrays

Task
Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

Example

A = {1, 2,3,4}
Print 4 3 2 1. Each integer is separated by one space.

Input Format

The first line contains an integer, N(the size of our array).
The second line contains N space-separated integers that describe array A's elements.

Constraints

1 <= N <= 1000
1 <= A[i] <= 10000, where A[i] is the ith integer in the array.

Output Format

Print the elements of array A in reverse order as a single line of space-separated numbers.

Sample Input
4
1 4 3 2

Sample Output
2 3 4 1

*/


//CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,i,j;
	cin >> n;
	int arr[n];

	for(i=0; i<n; i++){
		cin >> arr[i];
	}

	int len = sizeof(arr)/ sizeof(arr[0]);
	/*
	Total size of all elements in array in bytes/ size of one element in bytes
	*/

	for(j=len-1; j>=0; j--){
		cout << arr[j] << " ";
	}

	return 0;
}
