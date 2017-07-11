#include <iostream>
using namespace std;


int main() {
    long int n, m, a, count_n=0, count_m=0, side_n=0, side_m=0, no_of_fs;

    cin >> n >> m >> a;

    long int parliament, flagstone;
    parliament = n*m;
    flagstone = a*a;

    if(parliament%flagstone == 0)
    {
        no_of_fs = parliament/flagstone;
        cout << no_of_fs;
    }

    else
    {
        while( n%a != 0)
        {
            side_n += a;
            count_n++;

            if(side_n > n)
                break;
        }
        //cout << count_n << endl;
        m -= a;
        while( m%a != 0)
        {
            side_m += a;
            count_m++;

            if(side_m > m)
                break;
        }
        //cout << count_m << endl;
        no_of_fs = count_n + (count_m*count_n);
        cout << no_of_fs;
    }


    return 0;
}
