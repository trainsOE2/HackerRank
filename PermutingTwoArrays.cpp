#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, i, j;
    cin >> q;
    while(q--)
    {
        int n, k;
        cin >> n >> k;
        int A[n], B[n];
        for( i=0 ; i<n ; i++)
        {
            cin >> A[i];
        }
        for( i=0 ; i<n ; i++)
        {
            cin >> B[i];
        }
        sort(A,A+n);
        sort(B,B+n);
        for( i=0,j=n-1 ; i<n,j>=0 ; i++,j--)
        {
            if((A[i]+B[j]) < k)
            {
                cout << "NO\n";
                break;
            }
        }
        if( i==n )
            cout << "YES\n";
    }
    return 0;
}
