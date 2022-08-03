#include<bits/stdc++.h>
using namespace std;
int consOnes(int arr[],int n)
{
    int c=0,maxC=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            c=0;
        else
        {
            c++;
            maxC=max(maxC,c);
        }
    }
    return maxC;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans =consOnes(arr,n);
    cout<<ans;
    return 0;
}