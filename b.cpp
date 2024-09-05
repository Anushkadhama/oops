#include <iostream>
using namespace std;
int main() 
{
    string s;
    char c;
    getline(cin,s);
    cin>>c;
    int j=0;
    for(int i=0; i<s.length();i++) {
        if(s[i]!=c) s[j++] = s[i];
    }
    s.resize(j);
    cout<<s<<endl;
    return 0;
}