#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t, n, i, j, k;
    cin >> t;
    while(t--)
    {
        int l_sum = 0, r_sum=0, sum=0;
        cin >> n;
        int arr[n];
        int flag = 0;
        for(i=0 ; i<n ; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        r_sum = sum;
        for(i=0 ; i<n ; i++)
        {
           r_sum = r_sum - arr[i];
           if(l_sum == r_sum)
           {
               cout << "YES\n";
               break;
           }
           l_sum = sum - r_sum;
        }
        if(i==n)
            cout << "NO\n";
    }
    return 0;
}
