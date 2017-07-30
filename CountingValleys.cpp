#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, nstep=0;
    char step;
    vector<char> hike;
    vector<char> str;
    int mountain=0, valley=0;
    
    cin >> n;
    while(n--)
    {
        cin >> step;
        hike.push_back(step);
    }

    for(auto x: hike)
    {   
        if(x=='D')
            nstep -= 1;
        else if(x=='U')
            nstep += 1;
        str.push_back(x);
        if((nstep == 0)&&(str[0] == 'D'))
        {   valley++;
            str.clear();
        }
        else if((nstep == 0)&&(str[0] == 'U'))
        {
            str.clear();
        }
    }
    cout << valley;
    return 0;
}
