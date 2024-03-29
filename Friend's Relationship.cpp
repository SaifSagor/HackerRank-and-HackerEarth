/*
                                                      Friend's Relationship
 
Problem
Jack is your friend and Sophia is his girlfriend. But due to some unknown reason ( unknown for us, they know it) Sophia started hating to Jack. Now, Jack is in big trouble but he has a solution, He knows that if he will gift T patterns of a particular type ( For pattern observation see the sample test cases) then Sophia will start loving again to Jack. But Jack is depressed now and need your help to gift her that type patterns of '*' and '#' of N lines. So, it's your responsibility to save your friend's relationship.

Constraints :

1 ≤  T ≤ 100

1 ≤  N ≤ 30

Input :

First Line contains T i.e. number of test case.
Each of the next T lines contain an integer N.

Output:

For each test case print the pattern of N lines then after a blank line.

Sample Input
3
9
2
5

Sample Output

*################*
**##############**
***############***
****##########****
*****########*****
******######******
*******####*******
********##********
******************

*##*
****

*########*
**######**
***####***
****##****
**********

*/


//CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){

		int n;
		cin >> n;

		for(int i=1; i<=n; i++){
			for(int j=1; j<=n*2; j++){

				if(j >= i+1 && j <= n*2 -i){
					cout << "#";
				}
				else{
					cout << "*";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;

}
