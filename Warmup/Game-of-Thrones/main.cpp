#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    int bitmap[26];
    for(int i=0;i<26;i++){
        bitmap[i]=0;
    }
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    for(int i=0;i<s.length();i++){
        bitmap[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(bitmap[i]&1==1){
            count++;
        }
        if(count>=2){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
