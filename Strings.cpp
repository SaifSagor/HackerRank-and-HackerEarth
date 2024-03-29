/*
                                                                Strings
                                                                
                                        
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

Declaration:

string a = "abc";
Size:

int len = a.size();
Concatenate two strings:

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing ith element:

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
P.S.: We will use cin/cout to read/write a string.

Input Format

You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped.

Sample Input

abcd
ef

Sample Output

4 2
abcdef
ebcd af

Explanation

 a = "abcd"
 b = "ef"
 |a| = 4
 |b| = 2
 a + b = "abcdef"
 a' = "ebcd"
 b' = "af"
 
*/

//CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str1;
	string str2;

	cin >> str1 >> str2;

	string con = str1 + str2;

	char temp_char = str1[0];
	str1[0] = str2[0];
	str2[0] = temp_char;

	cout << str1.size() << " " << str2.size() << endl;
	cout << con << endl;
	cout << str1 << " " << str2;

	return 0;
}
