#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
     int i,n;
    double p_c=0,m_c=0,z_c=0;
    double r1,r2,r3;
    scanf("%d",&n);
    int a[n];

    for(i=0 ; i<n ;i++){
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++){
            if( a[i] > 0 ){
               p_c++;}
            else if( a[i] ==0){
                    z_c++;}
            else if( a[i] < 0){
                    m_c++;}
    }
    
    r1 = p_c / n;
    r2 = m_c / n;
    r3 = z_c / n;

    printf("%.6lf\n",r1);
    printf("%.6lf\n",r2);
    printf("%.6lf",r3);
    
    return 0;
}
