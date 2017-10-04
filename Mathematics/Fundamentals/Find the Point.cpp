
#include <iostream>
using namespace std;


int main() {
    int n;
    int px, py;
    int qx, qy;
    int rx, ry;
    cin >> n;
    while(n--)
    {
        cin >> px >> py >> qx >> qy;
        rx = qx + (qx - px);
        ry = qy + (qy - py);
        cout << rx << ' ' << ry << endl;
    }
    return 0;
}
