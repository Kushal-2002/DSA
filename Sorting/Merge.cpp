#include<bits/stdc++.h>
using namespace std;
void mergeHelper(int a[],int b[],int m,int n,int c[])
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            
            j++;
            k++;
        }
    }
    while(i<m)
    {
        // cout<<a[i]<<" ";
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
    {
        // cout<<b[j]<<" ";
        c[k]=b[j];
        k++;
        j++;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int c[m+n];
    mergeHelper(a,b,m,n,c);
    for(int i=0;i<m+n;i++)
        cout<<c[i]<<" ";
} 