#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{   
    string s;
    int i, count = 1, max = 1;

    getline(cin , s);

    for(i=1; i < s.length() ; i++){
        if(s[i] != s[i-1]){
            count++;
        }
        else{
            if(count > max){
                max = count;
                count = 1;
            }    
        }  
    }

    if (count > max){
        max = count;
    }
    cout << max << endl;
    
    return 0;
}
