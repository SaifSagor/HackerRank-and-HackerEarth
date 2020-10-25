#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    vector<int> ar;
    vector<int> res;
    int f[100] = {0};

    int i, n, index, result, elem;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> elem;
        ar.push_back(elem);
    }

    for (i = 0; i < n; i++)
    {
        index = ar[i];
        f[index]++;
    }

    for( i = 1; i < 100 ;  i++){
        res.push_back(f[i] + f[i - 1]);
        result = *max_element(res.begin(), res.end());
    }

    cout << result << endl;

    return 0;
}
