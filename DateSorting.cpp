#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i, j, n, temp;

    cin >> n;
    int day[n], month[n], year[n];
    for( i=0 ; i<n ; i++)
    {
        cin >> day[i] >> month[i] >> year[i];
    }

    for ( i=0 ; i<n ; i++)
    {
        for ( j=i+1 ; j<n ; j++)
        {
            if (year[j] < year[i])
            {
                temp = year[i] ;
                year[i] = year[j];
                year[j] = temp;

                temp = month[i] ;
                month[i] = month[j];
                month[j] = temp;

                temp = day[i] ;
                day[i] = day[j];
                day[j] = temp;
            }


        }
    }

    for ( i=0 ; i<n ; i++)
    {
        for ( j=i+1 ; j<n ; j++)
        {
            if( year[j] == year[i])
            {
                if ( month[j] < month[i] )
                {    temp = month[i] ;
                    month[i] = month[j];
                    month[j] = temp;

                    temp = day[i] ;
                    day[i] = day[j];
                    day[j] = temp;
                }
            }
        }
    }

     for ( i=0 ; i<n ; i++)
    {
        for ( j=i+1 ; j<n ; j++)
        {
            if((year[j] == year[i]) && (month[j] == month[i]))
            {
                if ( day[j] < day[i] )
                {
                    temp = day[i] ;
                    day[i] = day[j];
                    day[j] = temp;
                }
            }
        }
    }
    for( i=0 ; i<n ; i++)
    {
        cout << day[i] << " " << month[i] << " " << year[i] << endl;
    }
    return 0;
}
