/**================================
Sindi Ibrahim Hidayattulloh
0616103028
IF class B
universitas widyatama
=================================**/

#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int n, first = 0, second = 1, next, s,total;
 
   cout<<"silahkan masukan angka" <<endl;
   cin>>n;
 
   cout<<"angka pertama fibonacchi : " << n <<endl;
 
   for ( s = 0 ; s < n ; s++ )
   {
      if ( s <= 1 )
         next = s;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout<<next<<endl;
      total = total + next;
   }
    cout << "Total : " << total << endl;
   return 0;
}
