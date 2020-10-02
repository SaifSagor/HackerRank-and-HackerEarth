#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

vector<string> ans;

void lexo (string str){
    int i, j;
    char temp;
    for(i=0 ; i< str.length() - 1 ; i++){
        for(j= i+1 ; j< str.length() ; j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    ans.push_back(str);
}

int main()
{
    vector<string> vect;
    int  n;
    string wd;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> wd;
        vect.push_back(wd);
    }

    for (int i = 0; i < vect.size(); i++){
        string temp = "";
        int len = vect[i].length();

        for (int j = len - 1; j >= 0; j--)
        {
            temp = temp + string(1, vect[i][j]);
        }

        if (vect[i] == temp)
        {
            ans.push_back("-1");
        }
        else
        {
            lexo(vect[i]);
        }
        
    }
    
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    
    return 0;

}
