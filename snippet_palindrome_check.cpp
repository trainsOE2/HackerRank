#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count=0, x, item, i, j, similar=0;
    cin >> x;
    vector <int> pal;
    while (x != 0)
    {
      item = x%10;
      pal.push_back(item);
      x = x/10;
      count++;
    }
    for( i=0, j=count-1; i<count, j>=0 ; i++, j-- )
      {
        if(pal[i] == pal[j])
          continue;
        break;
      }

    if(i==count)
      cout << "Palindrome";
    else cout<<"Not palindrome";
    return 0;
}
