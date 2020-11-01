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
    cin >> s;
    int t=0;

    if (s.find("000000") != -1){

        t = 1;
    }
    else if (s.find("111111") != -1)
    {
        t = 1;
    }

    if( t == 0){
        cout << "Good luck!" << endl;
    }
    else if ( t == 1){
        cout << "Sorry, sorry!" << endl;
    }

    return 0;
}
