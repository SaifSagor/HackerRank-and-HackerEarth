/*
                                                  Palindromic String
                                                  
Problem
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 1 <= |S| <= 100

Note
String S consists of lowercase English Alphabets only.

Sample Input
aba
Sample Output
YES

*/


//CODE


#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	string reverse_str;

	cin >> str;

	for(int i = str.size() - 1; i >= 0 ; i--){
		reverse_str.push_back(str[i]);
	}

	if(str == reverse_str){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}
