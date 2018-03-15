#include<iostream>
using namespace std;
int main()
   { int a[100]={1,1,2,2,3};
   int n=5;
   int * num = new int[n];
   int count=0;
    for(int i=0;i<=n;i++)
  {
    
   for(int j=0;j<=n;j++)
   
    {	if(a[i]==a[j])
      {  
         count=count+1;
         num[i]=count;
         cout<<"the once appear number is:"<<count;
       }
    }
  }

   
  
     return 0;
     }
