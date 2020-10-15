#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n, p , i, p_count, t_turn_f, t_turn_b, t;

    cin >> n;
    cin >> p;
    
    t = round(n/2);
    t_turn_f = (p/2);
    t_turn_b = t - t_turn_f;

    p_count = min(t_turn_f, t_turn_b);

    cout << p_count << endl;
    
    return 0;
}
