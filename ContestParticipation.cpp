#include <bits/stdc++.h>
using namespace std;


int main() {
    int X, Y;
    cin >> X >> Y;
    if(X==Y)
        cout << "Did not participate";
    else if(X>Y)
        cout << "Did not perform well";
    else if(X<Y)
        cout << "Performed well";
    else
        return 0;
    return 0;
}
