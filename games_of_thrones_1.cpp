#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    vector<long long> stat(26,0);
    string str;
    getline(cin,str);
    for(int i=0; i<str.size(); i++){
        stat[str[i]-'a']++;
    }
    int odd=0;
    for(int i=0; i<stat.size(); i++){
        if(stat[i] % 2 == 1)
            odd++;
        if(odd > 1){ 
            cout<<"NO";
            break;
        }
    }
    if(!(odd >1 ))
        cout<<"YES";
    return 0;
}
