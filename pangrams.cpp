#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
bool arr[26]={false};
for(int i=0;i<s.length();i++){
    if(!isspace(s[i])){
        char ch=tolower(s[i]);
        int ascii=int(ch-'a');
        arr[ascii]=true;
    }
}

for(int i=0;i<26;i++){
    if(!arr[i])
    return "not pangram";
}
return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
