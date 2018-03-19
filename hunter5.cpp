#include<iostream>
using namespace std;
bool partiion (int a[], int n)
{
    int sum = 0;
    int i, j;
    for (i = 0; i < n; i++)
      sum += a[i];
    if (sum%2 != 0)  
       return false;
   bool part[sum/2+1][n+1];
     for (i = 0; i <= n; i++)
      part[0][i] = true;
    for (i = 1; i <= sum/2; i++)
      part[i][0] = false;     
  for (i = 1; i <= sum/2; i++)  
     {
       for (j = 1; j <= n; j++)  
       {
         part[i][j] = part[i][j-1];
         if (i >= a[j-1])
           part[i][j] = part[i][j] || part[i - a[j-1]][j-1];
       }        
     }    
      for (i = 0; i <= sum/2; i++)  
     {
       for (j = 0; j <= n; j++)  
          printf ("%4d", part[i][j]);
       printf("\n");
     } 
      
     return part[sum/2][n];
}     
int main()
{
  int a[] = {2,1,1};
  int n = sizeof(a)/sizeof(a[0]);
  if (partiion(a, n) == true)
     printf("yes");
  else
     printf("no");
  getchar();
  return 0;
}
