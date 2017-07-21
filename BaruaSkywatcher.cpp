#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
    int n, x, y, pos_cnt=0, total;
    double fraction;
    cin >> n;
    total = n;
    while (n--){
        cin >> x >> y;
        if ((x>0)&&(y>0))
            pos_cnt++;
    }
    fraction = (double) pos_cnt/total;
    cout << fixed << setprecision(6) << fraction;
    return 0;
}
