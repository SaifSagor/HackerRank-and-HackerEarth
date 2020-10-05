#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    vector<int> vect;
    int i, j, n, k, num, count = 0;

    cin >> n >> k;

    for(i = 0 ; i < n ; i++){
        cin >> num;
        vect.push_back(num);
    }

    for(i = 0 ; i < vect.size() ; i++){
        for( j = i + 1; j < vect.size(); j++){
            if( (vect[i] + vect[j]) % k == 0){
                count ++;
            }   
        }    
    }
    cout << count << endl;
    return 0;
}
