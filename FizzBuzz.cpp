/*
                    		FizzBuzz

Consider the following problem:

Write a short program that prints each number from 1 to 100 on a new line. 

For each multiple of 3, print "Fizz" instead of the number. 

For each multiple of 5, print "Buzz" instead of the number. 

For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead 
of the number.

Write a solution (or reduce an existing one) so it has as few characters as
 possible.

Scoring
Your score is: (200 - Number of characters in your source code) / 100
*/


#include<bits/stdc++.h>
using namespace std;

int main(){

	int i;

    for(i=1;i<=100;i++)
    {
        if(i%3!=0 && i%5!=0){
        	cout << i << endl;
        }
        else if(i%3 == 0 && i%5!=0){
        	cout << "Fizz\n";
        }
        else if(i%5 == 0 && i%3!=0){
        	cout << "Buzz\n";
        }
        else if(i%5 == 0 && i%3==0){
        	cout << "FizzBuzz\n";
        }
    }

    return 0;
}
