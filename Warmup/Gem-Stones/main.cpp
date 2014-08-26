#include<iostream>
#include<string.h>
using namespace std;


int pre[26];
int main(){
    int n;
    cin>>n;
    char temp[101];
    cin>>temp;
    for(int i=0;i<strlen(temp);i++){
        pre[temp[i]-'a']=1;
    }
    n--;
    while(n--){
        char temp[101];
        cin>>temp;
        int bitmap[26];
        for(int i=0;i<26;i++){
            bitmap[i]=0;
        }
        for(int i=0;i<strlen(temp);i++){
            int index=temp[i]-'a';
            bitmap[index]=1;
        }
        for(int i=0;i<26;i++){
            if(pre[i]==1&&bitmap[i]==1){
                pre[i]=1;
            }
            else
                pre[i]=0;
        }
    }
    int count=0;
    for(int i=0;i<26;i++) count+=pre[i];
    cout<<count<<endl;
}