#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
  
    long int a[5];
    int n;
    long int sum=0;
    long int s[5];
    long int min , max;

    for(n=0 ; n<5 ; n++)
    {
        scanf("%ld",&a[n]);
    }
    for(n=0 ; n<5 ; n++){
        sum = sum + a[n];
    }

    for(n=0 ; n<5 ; n++){
        s[n] = sum - a[n];
    }

    min = s[0];
    for(n=1 ; n<5 ; n++){
        if(s[n] < min){
            min = s[n];
        }
    }
    max = s[0];
    for(n=1 ; n<5 ; n++){
        if(s[n] > max){
            max = s[n];
        }
    }

     printf("%ld %ld", min, max);

    return 0;
}
