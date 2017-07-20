#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i,count=0, j;
    cin >> n;
    int arr[n];
    for (i=0 ; i<n ; i++)
        cin >> arr[i];
    i=0;
    for (i=0 ; i<n ; i++)
    {
        if(arr[i] == 0) 
        {            
            arr[i]=1;
            for( j=i+1; j<=n ; j++)
            {
                if(arr[j] == 0)
                    arr[j] = 1;
                else
                    arr[j] = 0;
            }
            count++;
        }
       
    }
    cout << count;
    
    
    return 0;
}
