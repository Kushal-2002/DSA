#include<bits/stdc++.h>
using namespace std;
bool isPalin(string &str,int start,int end)
{
    if(start>=end)
        return true;
    return str[start]==str[end] && isPalin(str,start+1,end-1);
}
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    bool ans=isPalin(str,0,n-1);
    cout<<ans;
    return 0;
}