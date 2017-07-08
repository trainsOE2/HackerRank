#include <iostream>
using namespace std;


int main() {
    int n, i, j, compare, ele ;
    cin >> n;
    int arr[n];
    for ( i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    for ( i=0 ; i<n ; i++)
    {
        compare = arr[i];
        for ( j=0 ; j<n ; j++)
        {
            if ( i == j )
                continue;
            else
                if (compare == arr[j])
                {
                    ele = arr[j];
                    break;
                }
        }
    }

    cout << ele;

    return 0;
}
