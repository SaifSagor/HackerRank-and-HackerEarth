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
    int i, count = 0;

    getline(cin, s);

    for (i = 0; i < s.length(); i++){

        if (s[i] > '0' && s[i] <= '6'){

            if (s[i] != '6'){
                count++;
            }
        }
    }
    if( s[s.length() - 1] == '6'){
        count = -1;
    }
    cout << count << endl;

    return 0;
}
