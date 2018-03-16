#include<stdafx.h>
#include<stdio.h>

int main()
{
    int n=5,i,j;
    int *num= new int[n];
    int count = 0;
    int a[6] = {1,1,1,2,2,3}; 
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                count = count+1;
                num[i] = count;
            }
            else{
                count = 0;
            }
        }
    }
}
