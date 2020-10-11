#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int t, l, r, s, i, mn, mx;

    cin >> t;

    while (t--)
    {
        cin >> l >> r >> s;

        mn = ceil(l / double(s));

        mx = r / double(s);

        if (mn <= mx)
        {
            cout << mn << " " << mx << endl;
        }
        else
        {
            cout << "-1 -1" << endl;
        }
    }
    
    return 0;
}
