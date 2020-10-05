#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int arr[10];

int main()
{

    int n, m = -1, ans;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i <= 5; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
