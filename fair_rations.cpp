#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    
    
    int count=0;
    for(int i=0;i<n-1;i++){
        if(b[i]%2!=0){
            b[i]++;
            b[i+1]++;
            count+=2;
        }
    }
    if(b[n-1]%2==0){
        cout<<count;
    }
    else
    cout<<"NO";
    
    return 0;
}