#include <iostream>
using namespace std;

int main() {
	string s,s1;
	int t;
	cin>>t;
	while(t--)
    {
        cin>>s;
        cin>>s1;
        int c=0;
        for(int i=0;i<s.length();i++)
            if(s[i]!=s1[i])
                c++;
        if(c%2==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
	return 0;
}