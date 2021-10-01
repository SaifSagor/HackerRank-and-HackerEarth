#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int s,t,a,b,m,n,i,c1,c2,c3,count1=0 , count2=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int d1[m];
    int d2[n];
    for(i=0 ; i<m ; i++){
        scanf("%d",&d1[i]);
    }
     for(i=0 ; i<n ; i++){
        scanf("%d",&d2[i]);
    }
    c1 = s - a;
    c2 = b - t;
    c3 = t - s;

    for(i=0 ; i<m ; i++){
        if(d1[i] > 0){
            if(d1[i] >= c1 && d1[i]<=(c1 + c3)){
                count1++;
            }
        }
    }
      for(i=0 ; i<n ; i++){
        if(d2[i] < 0){
            if(abs(d2[i]) >= c2 && abs(d2[i]) <= (c2 + c3)){
                count2++;
            }
        }
    }

    printf("%d\n",count1);
    printf("%d",count2);

}
