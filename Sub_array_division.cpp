#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> ::iterator it;
    int d,m, n, i, num, count=0, sum;
    cin >> n;

    for(i= 0; i<n ; i++){
        cin >> num;
        v.push_back(num);
    }

    cin >> d >> m;

    for(it = v.begin() ; it != v.end() ; it++){
        sum = accumulate(it , it + m , 0);
        if(sum == d){
            count = count + 1;
        }
    }

    cout << count << endl;

    return 0;
}
