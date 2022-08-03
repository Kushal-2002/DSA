#include<bits/stdc++.h>
using namespace std;
//O(n) Moore's voting algorithm
int findMajority(int arr[],int n)
{
    int count=1,res=0;
    //Finding the candidate
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[res])
            count++;
        else   
            count--;
        if(count==0)
        {
            count=1;
            res=i;
        }
    }
    //Checking if the candidate is actually a majority or not
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
    }
    if(count<=n/2)
        res=-1;
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findMajority(arr,n)<<endl;
    return 0;
}
// //O(n2):Naive solution
// int findMajority(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int c=0;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//                 c++;
//         }
//         if(c>n/2)
//             return i;
//     }
//     return -1;
// }

