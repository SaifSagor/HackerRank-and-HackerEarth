#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int a[3];
    int b[3];
    int i , j=0 , k=0;

    for(i=0 ; i<3 ; i++){
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<3 ; i++){
        scanf("%d",&b[i]);
    }

    for(i=0 ; i<3 ; i++)
    {
        if(a[i] > b[i]){
            j = j + 1;
        }
        else if(b[i] > a[i])
        {
             k = k + 1;
        }
        else if( a[i] == b[i]){
            k = k + 0;
            j = j + 0;
        }
    }

    printf("%d %d",j,k);

}
