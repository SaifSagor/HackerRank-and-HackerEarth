#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{   
    vector<int> ar;
    int n,i,j,num, count=0;
    cin >> n;

    for(i=0 ; i < n ; i++){
        cin >> num;
        ar.push_back(num);
    }

    int len =  ar.size();

    for (i = 0; i < len - 1; i++){
        if( ar[i] != 0){
            for (j = i + 1; j < len; j++){
                if (ar[i] == ar[j]){
                    count++;
                    ar[j] = 0;
                    break;
                }
            }
        }
    }

    cout << count << endl;
    
    return 0;
}
