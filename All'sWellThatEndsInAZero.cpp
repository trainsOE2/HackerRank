#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, i, num, count=0;
    cin >> n;
    for(i=2 ; i<=n ; i++)
    {
        num = n%i;
        if(num == 0)
            count++;
    }
    cout << count;
    
    return 0;
}
