#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int i,n;
    int ar[1000];
    int sum = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++){

        scanf("%d", &ar[i]);
        fflush(stdin);
    }

    for( i=0 ; i<n ; i++)
    {
        sum = sum + ar[i];
    }

    printf("%d",sum);

    return 0;
}
