#include<stdio.h>
#include<math.h>

int main()
{
     int n,i,j;
    scanf("%d",&n);
    int mat[n][n];
    int s1=0 , s2=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++){
            if(i == j)
            {
                s1 = s1 + mat[i][j];
            }
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=i ; j<=i ; j++){

            s2 = s2 + mat[i][n-i-1];
        }
    }

    printf("%d",abs((s1-s2)));
}
