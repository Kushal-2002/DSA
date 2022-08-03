#include<bits/stdc++.h>
using namespace std;
int countSubsets(int arr[],int n,int sum)
{
    if(n==0)
        return (sum==0);
    return countSubsets(arr,n-1,sum)+countSubsets(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int arr[]={6,7,9,8};
    cout<<countSubsets(arr,4,15)<<endl;
    return 0;
}