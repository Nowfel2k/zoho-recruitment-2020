/* Muhammed Navfal, Chennai - navfal@pm.me */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, j, k, a = 1, b = 1;

    for (i = 0; i <= n; ++i)
    {
        for (j = n; j > i; --j)
            cout << "  ";

        for (k = 1; k <= a; ++k)
            cout << abs(k - b) << " ";
        cout << endl;

        a += 2;
        ++b;
    }

    return 0;
}
