#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int a[26]={0};
    for(int i=0;i<s.size(); i++){
        a[s[i] - 'a']++;
    }  
    for(int i=0; i<26; i++){
        if(a[i] == 1) {
            cout << char(i+'a') << " ";
        }
    }
}