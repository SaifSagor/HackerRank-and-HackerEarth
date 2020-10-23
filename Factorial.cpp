#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int fact(int n){
    if( n == 1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }   
}

int main()
{
    int N, ans;
    cin >> N;
    ans = fact(N);
    cout << ans << endl;

    return 0;
}
