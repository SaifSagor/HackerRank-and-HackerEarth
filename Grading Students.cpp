#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
     int n,i;
    scanf("%d",&n);
    int grades[n];

    for(i=0 ; i<n ; i++){
        scanf("%d",&grades[i]);
    }

    for(i=0 ; i<n ; i++){
        if(grades[i] < 38){
            grades[i] = grades[i];
        }
    }
    for(i=0 ; i<n ; i++){
        if(grades[i] >= 38 && grades[i]%5 !=0 && grades[i]%5 > 2){
            grades[i] = grades[i] + (5 - grades[i]%5 );
        }
    }
    for(i=0 ; i<n ; i++){
        if( grades[i] >= 38 && grades[i]%5 == 0 ){
            grades[i] = grades[i];
        }
    }

     for(i=0 ; i<n ; i++){
        printf("%d\n",grades[i]);
    }

    return 0;
}

