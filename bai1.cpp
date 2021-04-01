#include<bits/stdc++.h>   //xau nhi phân ke tiep
using namespace std;      //010101   010110
string s;
void next ()
{
    int i;
    for(i=s.length()-1;i>=0;i--) 
	{
        if (s[i]=='0') 
		{
            s[i]='1';
            break;
        }
    }
    for(int j=i+1;j<s.length();j++)
		s[j]='0';
}
int display() 
{
    for(int i=0;i<s.length();i++) 
        cout<<s[i];
}
int main() 
{
    int T;
    cin>>T;
    while(T--)
	{
        cin>>s;
        next();
        display();
        cout<<endl;
    }
}
