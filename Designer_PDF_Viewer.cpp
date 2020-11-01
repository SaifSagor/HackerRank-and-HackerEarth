#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> h;
    vector<int> ans;
    string s;
    int num , s_len, j , max_e, area;

    for(int i= 0 ; i < 26 ; i++){
        cin >> num;
        h.push_back(num);
    }

    cin >> s;
    s_len = s.length();

    for(char i : s){
        j = int(i) - 97;
        ans.push_back(h[j]);
    }
    
    max_e = *max_element(ans.begin() , ans.end());

    area = max_e * s_len;

    cout << area << endl;
    
    return 0;
}
