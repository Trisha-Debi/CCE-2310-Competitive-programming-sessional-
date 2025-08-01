//Course title:Competitive programming sessional
//Course code:CCE-2310
//Course teacher:Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--)
        {

            cout<<s[i]-'0'<<" ";
        }
        cout<<endl;
}
}

