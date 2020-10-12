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
    int i, count = 1, ans = 0;

    getline(cin , s);

    for(i=0; i < s.length()-1 ; i++){
        if(s[i] != s[i+1]){
            count++;
        }
        if (s[i] == s[i + 1])
        {
            ans = max(ans, count);
            count = 1;
        }
    }

    cout << max(count, ans) << endl;
    
    return 0;
}
