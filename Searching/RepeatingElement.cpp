#include<bits/stdc++.h>
using namespace std;
//{0,2,1,3,5,4,6,2}
//O/P:2

//O(n) time and O(n) space
// int findRepeat(int arr[],int n)
// {
//     bool visited[n]={false};
//     for(int i=0;i<n;i++)
//     {
//         if(visited[arr[i]])
//             return arr[i];
//         visited[arr[i]]=true;
//     }
    
// }
// Optimised solution O(n)-Time and O(1)-space
int findRepeating(int arr[],int n)
{
    int slow=arr[0]+1,fast=arr[0]+1;
    do{
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    }while(slow!=fast);
    slow=arr[0]+1;
    while(slow!=fast)
    {
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }
    return fast-1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Repeating element:"<<findRepeating(arr,n);
    return 0;
}