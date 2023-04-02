#include <bits/stdc++.h>

using namespace std;


int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string b;
    cin>>b;
bool flag1=false,flag2=true;
for(int i=0;i<n;i++){
    if(b[i]=='_'){
        flag1=true;
    }
}
if(flag1){
    sort(b.begin(),b.end());
    
    if(n!=1) {
       for(int i=0;i<n;i++){
           if(b[i]!='_'){
               if(b[i]!=b[i+1] && b[i]!=b[i-1])
        flag2=false;
           }
        
    } 
    if(n==1 && b[0]!='_'){
        flag2=false;
    } 
    }
}
else{
    for(int i=0;i<n;i++){
        if(b[i]!=b[i+1] && b[i]!=b[i-1])
        flag2=false;
    }
}
if(flag2){
    cout<<"YES";
}
else{
    cout<<"NO";
}
cout<<endl;
}
return 0;
}

