#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    vector<int> height;
    int h;
    cin >> n;
    while (n--)
    {
        cin >> h;
        height.push_back(h);
    }
    sort(height.rbegin(), height.rend());
    int largest = height[0];
    for(auto x: height)
        if(x==largest)
            count++;
    cout << count;
    return 0;
}
