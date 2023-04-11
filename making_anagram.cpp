#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {

int c1[27]={0};
int c2[27]={0};
int n1=s1.length();
int n2=s2.length();

for(int i=0;i<n1;i++){
    char ch=s1[i];
    int a=(int)(ch-'a');
    c1[a]++;
}
for(int i=0;i<n2;i++){
    char ch=s2[i];
    int a=(int)(ch-'a');
    c2[a]++;
}
int ans=0;
for(int i=0;i<27;i++){
    if(c1[i]!=c2[i]){
        ans+=abs(c1[i]-c2[i]);
    }
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
