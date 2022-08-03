// You are given a number n. You need to find the digital root of n. DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
#include<bits/stdc++.h>
using namespace std;
int digitalRoot(int n)
{
    int sum=0;
    if(n<10)
        return n;
    sum=n%10+digitalRoot(n/10);
    return digitalRoot(sum);
}

int main()
{
    cout<<digitalRoot(99)<<endl;
    return 0;
}