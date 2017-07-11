//Incomplete
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int n, i, k, q, len, val;
   string s = "0", t, str;

   cin >> q;
   int index[q];


   for ( i=0 ; i<q ; i++ )
      {
         len = s.length();
         for (k=0 ; k<len ; k++)
         {
             if (s[k]=='0')
                 t[k] = '1';
             else
                 t[k] = '0';
             s += t[k];

         }
       }
       
    cout << s <<"\n";


   for ( i=0 ; i<q ; i++)
   {
        cin >> index[i];
   }

   for ( i=0 ; i<q ; i++)
  {
      val = index[i];
      cout << "\n" << s[val] ;
  }
   return 0;
}
