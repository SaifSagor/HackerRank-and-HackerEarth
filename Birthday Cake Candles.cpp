#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int i,n,max,count=0;
    scanf("%d",&n);
    int h[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&h[i]);
    }
    max = h[0];
    for(i=1 ; i<n ; i++){
        if(h[i] > max){
            max = h[i];
        }
    }

    for(i=0 ; i<n ; i++){
        if(h[i] == max){
            count++;
        }
    }

    printf("%d",count);
    
    return 0;
}
