#include <iostream>
using namespace std;

int main() {
  int a[10],index[10],swap,n=5,i,j;
  
  for( i=0;i<n;++i)
  { 
  cin>>a[i];
  cin>>index[i];
   for(j=i;j<n;j++)
   { if(index[i]==a[i])
     { 
       swap = a[i];
        a[i] = a[j];
       a[j] = swap;
      }
    }
}

  for ( int i = 0; i < 6; ++i )
    cout << a[i] << " ";
  return 0;
}
