
//Competitive programming Sessional
//Course Code :CCE-2310
//Mirza raquib
#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<n;i++){
    if(arr[i]<=10){
        cout<<"A["<<i<<"]"<<" "<<"="<<" "<<arr[i]<<endl;
}
}
}

