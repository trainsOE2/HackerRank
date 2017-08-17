#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> type;
  map<int, int> birds;

  int n, i, item;
  cin >> n;
  for( i=0; i<n; i++)
  {
    cin >> item;
    type.push_back(item);
  }
  for( i=0; i<n; i++)
  {
    birds.insert(pair<int, int> (type[i], count(type.begin(), type.end(), type[i])));
  }

  for(pair<int, int> bird : birds)
    cout << bird.first << ' ' << bird.second <<endl;

  map<int, int>::iterator it;
  it = birds.begin();
  cout << it->first << ' ' << it->second;
  int largest = it->second;
  int smallest = it->first;


  for(it = birds.begin(); it != birds.end(); ++it)
  {
    if( it->second > largest)
    {
      largest = it->second;
      smallest = it->first;
    }
    if( it->second == largest)
    {
      if(it->first < smallest)
        smallest = it->first;
    }
  }

  cout << '\n' << smallest;
  return 0;

}
