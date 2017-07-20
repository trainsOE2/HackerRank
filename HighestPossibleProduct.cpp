#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i,k;
    vector<int> arrvector;
    long long int prod=1;
    cin >> n;
    int arr[n];
    for ( i=0 ; i<n ; i++)
    {
        cin >> arr[n];
        arrvector.push_back(arr[n]);
    }
    sort(arrvector.begin(), arrvector.end());
    for( k=n-1 ; k >= n-3 ; k--)
        prod *= arrvector[k];
    cout << prod;

    return 0;
}
