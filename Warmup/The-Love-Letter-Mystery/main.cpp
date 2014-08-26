#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
char data[10003];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>data;
        int size=strlen(data);
        int low=0;
        int high=size-1;
        int stepCount=0;
        while(low<high){
            stepCount+=abs(data[low]-data[high]);
            low++;high--;
        }
        cout<<stepCount<<endl;
    }
}