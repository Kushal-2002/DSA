#include<bits/stdc++.h>
using namespace std;
int sqRoot(int x)
{
    int low=1,high=x,res=-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        int sqMid=mid*mid;
        if(sqMid==x)
            return mid;
        else if(sqMid>x)
            high=mid-1;
        else if(sqMid<x)
        {
            low=mid+1;
            res=mid;
        }
        
    }
    return res;
}
int main()
{
    int x;
    cin>>x;
    cout<<sqRoot(x)<<endl;
}
