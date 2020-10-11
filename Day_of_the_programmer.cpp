#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    int year, day, feb = 28;
    cin >> year;

    if (year >= 1700 && year <= 1917){
        if(year % 4 == 0){
            feb = 29;
        }
        day = 256 - (feb + 215);
    }
    else if( year == 1918){
        feb = 15;
        day = 256 - (feb + 215);
    }
    else if(year > 1918 ){
        if( year % 400 == 0){
            feb = 29;
        }
        else if( (year % 4 == 0) && (year % 100 != 0)){
            feb = 29;
        }
        day = 256 - (feb + 215);
    }

    cout << day << ".09." << year;
    
    return 0;
}
