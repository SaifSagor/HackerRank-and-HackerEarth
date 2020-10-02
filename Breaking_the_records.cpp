#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    vector<int> vec;
    int mac = 0, mic = 0, min, max, n, i, num;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    min = vec[0];
    max = vec[0];

    for (i = 1; i < vec.size(); i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
            mac = mac + 1;
        }
        else if (vec[i] < min)
        {
            min = vec[i];
            mic = mic + 1;
        }       
    }

    cout << mac << " " << mic;
}
