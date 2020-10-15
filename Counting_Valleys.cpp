#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n, cvalley = 0, steps = 0;
    cin >> n;
    char s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for(int i=0 ; i< n ; i++){
        if(s[i] == 'D'){
            steps--;
        }
        else
        {
            steps++;
            if(steps == 0){
                cvalley++;
            }
        }
    }
    cout << cvalley << endl;
    
    return 0;
}
