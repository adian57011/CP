#include<iostream>
using namespace std;


int main()
{
    int a,b,c;
    bool isSad = true;

    cin >> a >> b >> c;

    if(a > b)
    {
        if( b <= c)
        {
            isSad = false;

                if(isSad)
                {
                  cout << ":(";
                }

                else
                {
                  cout << ":)";
                }
        }

        else if (b >= c)
        {
            if(isSad)
            {
                cout << ":(";
            }
            else
            {
                cout << ":)";
            }
        }

    }

    else if(b > a)
    {
        if(b >= c)
        {
            if(isSad)
            {
                cout << ":(";
            }
        }

        else if ( b < c)
        {
            cout << ":)";
        }
    }




    return 0;
}
