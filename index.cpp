#include <iostream>
using namespace std;

int main() {
  int a[10],swap,n=5,i,j;
  
  for( i=0;i<n;++i)
  { 
  cin>>a[i];
   }
   
   
  
  for (  i = 0; i < 6; ++i ) {
    for ( j = i; j < 6; ++j ){
      if( a[j] > a[i] ) {
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
