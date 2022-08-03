#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
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
    intersection(a,b,m,n);
    return 0;
} 