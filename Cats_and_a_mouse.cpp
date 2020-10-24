#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    int i, xA,xB,xC, t, dfc, dsc;
    vector<int> q;
    vector<int> ans;

    cin >> t;

    for(i=0 ; i < t ; i++){
        cin >> xA >> xB >> xC;
        q.clear();
        q.push_back(xA);
        q.push_back(xB);
        q.push_back(xC);

        dfc = abs(q[2] - q[0]);
        dsc = abs(q[2] - q[1]);

        if(dfc < dsc){
            ans.push_back(0);
        }
        else if(dsc < dfc){
            ans.push_back(1);
        }
        else if(dfc == dsc){
            ans.push_back(2);
        }
    }

    for (i = 0; i < ans.size(); i++){
        if( ans[i] == 0){
            cout << "Cat A" << endl;
        }
        else if( ans[i] == 1){
            cout << "Cat B" << endl;
        }
        else if( ans[i] == 2){
            cout << "Mouse C" << endl;
        }
    }
    
    return 0;
}
