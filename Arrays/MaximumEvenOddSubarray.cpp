#include<bits/stdc++.h>
using namespace std;
//O(n) efficient solution
int maxEvenOdd(int arr[],int n)
{
    int res=1,prevSum=0;
    int c=1;
        for(int j=0;j<n-1;j++)
        {
            if((arr[j]%2==0 && arr[j+1]%2!=0) || ((arr[j+1]%2)==0 && (arr[j]%2)!=0))
            {
                c++;
                res=max(res,c);
            }
            else
                c=1;
        }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxEvenOdd(arr,n)<<endl;
    return 0;
}

