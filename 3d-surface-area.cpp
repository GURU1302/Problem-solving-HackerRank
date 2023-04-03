#include <bits/stdc++.h>

using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> box;
    for(int i=0;i<row+2;i++){
        
        vector<int> p;
        for(int j=0;j<col+2;j++){
            if(i==0 || i==row+1)
            p.push_back(0);
            else if(j==0 || j==col+1)
            p.push_back(0);
            else{
                int x;
                cin>>x;
                p.push_back(x);
            }
        }
        box.push_back(p);
    }
    
    int totsa=2*row*col;
    for(int i=1;i<row+1;i++){
        for(int j=1;j<col+1;j++){
            int ld=box[i][j]-box[i][j-1];
            int ud=box[i][j]-box[i-1][j];
            int rd=box[i][j]-box[i][j+1];
            int dd=box[i][j]-box[i+1][j];
            if(abs(ld)==ld)
                totsa+=ld;
            
            if(abs(rd)==rd)
                totsa+=rd;
            
            if(abs(ud)==ud)
                totsa+=ud;
            
            if(abs(dd)==dd)
                totsa+=dd;
            
        }
    }
    cout<<totsa;
    return 0;
}
