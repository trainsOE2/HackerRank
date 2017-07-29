#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    vector<int> final_grade;
    while(t--)
    {
        int x=0;
        int score;
        cin >> score;
        if(score >= 38)
        {
            while((score+x)%5 != 0 )
                x++;
            if(x<3)
                score += x;
        }
        
        final_grade.push_back(score);
    }
    for (auto x : final_grade)
        cout << x << '\n';
    return 0;
}
