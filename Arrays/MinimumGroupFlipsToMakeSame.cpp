#include<bits/stdc++.h>
using namespace std;
void flips(int arr[],int n)
{
    int first=arr[0];//store the first set element
    int second=!arr[0];//store the second set element
    //Our job is to flip the second set element
    int c=0;
    for(int i=0;i<n;i++)
    {

        if(arr[i]==second && c==0)
        {
            cout<<"From "<<i<<" ";
            c++;
        }
        if(arr[i]==first && c==1)
        {
            cout<<"To "<<i-1<<endl;
            c--;
        }
    }
    if(arr[n-1]!=arr[0])// to handle 0 0 1 1 0 0 1 1 0 1
        cout<<"To "<<n-1<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    flips(arr,n);
    return 0;
}


