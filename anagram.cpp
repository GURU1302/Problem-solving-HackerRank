#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'anagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int anagram(string s) {

int n=s.length();
if(n%2!=0)
return -1;

string s1=s.substr(0,n/2);
string s2=s.substr(n/2,n/2);


int count=0;
bool flag;
bool vis[n/2]={false};
for(int i=0;i<s1.length();i++){
    flag=false;
    for(int j=0;j<s2.length();j++){
        if(s1[i]==s2[j] && !vis[j]){
            vis[j]=true;
            flag=true;
            break;
        }
    }
    if(!flag)
    count++;
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
