#include <bits/stdc++.h>
using namespace std;
bool helper(int n, int i)
{
    if (i > n)
        return true;
    if (n % i == 0)
        return false;
    int pos = n - n / i;
    helper(pos, i + 1);
}
bool isLucky(int n)
{
    return helper(n, 2);
}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        // calling isLucky() function
        if (isLucky(n))
            cout<< "1\n"; // printing "1" if isLucky() returns true
        else
            cout << "0\n"; // printing "0" if isLucky() returns false
    }

}