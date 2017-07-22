#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    double logg = 0;
    for (int i = 1; i <= n; i++)
        logg += log10(i);
    cout << (int)(floor(logg) + 1);
    return 0;
}
