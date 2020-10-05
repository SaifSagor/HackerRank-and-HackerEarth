#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;
 
int main(){
    vector<int> vect;
    int t, a, b, num;
 
    cin >> t;
 
    while (t--){
        cin >> a >> b;
 
        if(a > b){
            num = a / float(b);
            vect.push_back(num);
        }
        else{
            num = b / float(a);
            vect.push_back(num);
        }
    }
 
    for(auto it = vect.begin() ; it != vect.end() ; it++){
        cout << *it << endl;
    }
    
    return 0;
}
 
