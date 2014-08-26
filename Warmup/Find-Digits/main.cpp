#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long temp=n;
        int res=0;
        while(temp!=0){
            if((temp%10)!=0&&n%(temp%10)==0){
                res++;
            }
            temp=temp/10;
        }
        cout<<res<<endl;
    }
}