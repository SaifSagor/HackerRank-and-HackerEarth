#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){

    string s;
    int k;
    cin >> s >> k;

    for (int i = 0; i < k; i++)
    {
        if( s[i] == '9'){
            k++;
        }
        else{
            s[i] = '9';
        }
    }

    cout << s;
    
    return 0;
}
