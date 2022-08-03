#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}
int main()
{
    int arr[]={2,5,7,8,9};
    int ans=search(arr,5,8);
    cout<<ans<<endl;
    return 0;
}