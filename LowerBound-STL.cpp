#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    vector<int>::iterator low, it;
    for( int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    int q;
    int ele;
    cin >> q;
    for(int j=1; j<=q; j++)
    {
        cin >> ele;
        low = lower_bound(v.begin(), v.end(), ele);
        it = find(v.begin(), v.end(), ele);
        if(it != v.end())
            cout << "Yes " << low - v.begin() << endl;
        else
            cout << "No " << low - v.begin() << endl;
            
    }
    return 0;
}

//Testcases 11, 13, 14, 15 timeout.
