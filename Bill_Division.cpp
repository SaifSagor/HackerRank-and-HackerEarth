#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{   
    vector<int> vect;
    int n,k,i,sum, a_c , b_c_a, num , diff;

    cin >> n >> k;

    for(i = 0 ; i < n ; i ++){
        cin >> num;
        vect.push_back(num);
    }

    cin >> b_c_a;

    sum =accumulate(vect.begin() , vect.end() , 0);

    a_c = int((sum - vect[k])/2.0);

    diff = b_c_a - a_c;

    if (diff == 0)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << diff << endl;
    }

    return 0;
}
