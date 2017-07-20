#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i;
    cin >> n;
    int pos[n], hol[n], diff[n];
    for ( i=0 ; i<n ; i++)
        cin >> pos[i];
    for ( i=0 ; i<n ; i++)
        cin >> hol[i];
    sort(pos,pos+n);
    sort(hol,hol+n);
    int max = 0;
    for( i=0 ; i<n ; i++)
    {
        diff[i] = abs(pos[i] - hol[i]);
        if(max < diff[i])
            max = diff[i];
    }
    cout << max;
    return 0;
}
