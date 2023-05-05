#include <bits/stdc++.h>

using namespace std;


int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int arr[s.length()-1];

for(int i=0;i<s.length()-1;i++){
    char ch=s[i];
    char ch2=s[i+1];
    
   int a=int(ch-'a');
   int b=int(ch2-'a');
   arr[i]=abs(b-a);
}
bool flag=true;
int start=0;
int end=s.length()-2;
while(start<end){
    if(arr[start]!=arr[end]){
        flag=false;
        break;
    }
    start++;
    end--;
}
if(flag)
cout<<"Funny"<<endl;
else
cout<<"Not Funny"<<endl;
}

return 0;
}

