#include<iostream>
using namespace std;

int main()
{
  int i, j, k;
  int n;
  cin >> n;
  int space = n/2;
  for(i=1; i<=n; i +=2)
  {
    for(k=space ; k>0 ; k--)
    {
      cout <<' ';
    }
    for(j=0; j<i; j++)
    {
      cout << "*";
    }
    cout << "\n";
    space--;
  }

  for(i=n-2 ; i>=1 ; i -= 2)
  {
    space++;
    for(k=0 ; k<=space ; k++)
    {
      cout <<' ';
    }
    for(j=0 ; j<i ; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
