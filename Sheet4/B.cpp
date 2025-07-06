//Course Title :Competitive programming Sessional
//Course Code :CCE-2310
//Mirza raquib
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i=0;i<s.size();i++)
{
    if(s[i]=='\\')
        break;
    else
        cout<<s[i];

}
}
