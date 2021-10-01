/*
					Printing Pattern Using Loops

Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   

Input Format
The input will contain a single integer n.

Constraints
1 <= n <= 1000

Sample Input 0
2

Sample Output 0

2 2 2
2 1 2
2 2 2

Sample Input 1
5

Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

Sample Input 2
7

Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 

*/

// CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	int size = 2*n - 1;
	int start = 0;
	int end = size -1;
	int arr[size][size];

	while(n != 0){

		for(int i = start; i <= end ; i++){
			for(int j = start; j<= end ; j++){

				if((i == start)|| (i == end)|| (j == start)|| (j == end)){
					arr[i][j] = n;
				}
			}
		}

		start++;
		end--;
		n--;
	}

	for(int i = 0 ; i <= size-1; i++){
		for(int j = 0 ; j<= size-1 ; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
