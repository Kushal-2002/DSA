// Input: 
// n = 5 
// A[] = {1,3,5,2,2} 
// Output: 3 
// Explanation: For second test case equilibrium point is at position 3  as elements before it (1+3) =  elements after it (2+2). 
#include<bits/stdc++.h>
using namespace std;
int equilibriumPoint(int arr[],int n)
{
    int sum=0,left_sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];//Right sum of index i
        if(sum==left_sum)
            return i+1;//One based index
        left_sum+=arr[i];
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<equilibriumPoint(arr,n)<<endl;
    return 0;
}


