#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
      int n,r,c;

   scanf("%d",&n);

   for(r=1 ; r<=n ; r++)
   {
       for(c=1 ; c<=n-r ; c++){
        printf(" ");
       }

       for(c=1 ; c<=r ; c++){
        printf("#");
       }
       printf("\n");
   }

    return 0;
}
