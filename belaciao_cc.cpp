#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll D, d, p, q, count=0, x, y;
        cin >> D >> d >> p >> q;

        x = D / d;

        if(x%2==0)
        {
            count += d * ((x / 2) * (2 * p + (x - 1) * q));
        }
        else
        {
            count += d * (x * (p + ((x - 1) / 2) * q));
        }

        count += (D % d) * (p + (x) * q);

        cout << count << "\n";
    }
    return 0;
}