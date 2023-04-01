#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int width[n];
    for(int i=0;i<n;i++){
        cin>>width[i];
    }
    vector<vector<int>> cases;
    for(int i=0;i<t;i++){
        vector<int> p;
        for(int j=0;j<2;j++){
            int x;
            cin>>x;
            p.push_back(x);
        }
        cases.push_back(p);
    }
    
    vector<int> ans;
    
    for(auto i: cases){
        int start=i[0];
        int end=i[1];
        int mi=INT_MAX;
        for(int j=start;j<=end;j++){
            mi=min(mi,width[j]);
        }
        ans.push_back(mi);
    }
    
    for(auto i: ans){
        cout<<i<<endl;
    }
    
    return 0;
}