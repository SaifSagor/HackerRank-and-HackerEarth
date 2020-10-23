#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int b, n_k, n_u, i, j, sum;
    vector<int> k;
    vector<int> u;
    vector<int> ans;

    cin >> b >> n_k >> n_u;

    for (i = 0; i < n_k; i++){
        int temp;
        cin >> temp;
        k.push_back(temp);
    }
    for (i = 0; i < n_u; i++){
        int temp;
        cin >> temp;
        u.push_back(temp);
    }

    for(i=0 ; i< k.size() ; i++){
        for ( j = 0; j < u.size(); j++){
            sum = k[i] + u[j];
            if(sum <= b){
                ans.push_back(sum);
            }
        }    
    }

    if(ans.empty()){
        cout << "-1" << endl;
    }
    else{
        sort(ans.begin() , ans.end() , greater<int>());
        cout << ans[0] << endl;
    }
    
    return 0;
}
