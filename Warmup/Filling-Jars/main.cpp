#include<iostream>
using namespace std;
int main(){
    int n,m;
    long long result=0;
    cin>>n>>m;
    while(m--){
        int a,b,k;
        cin>>a>>b>>k;
        result+=(long long)(b-a+1)*k;
    }
    cout<<result/n<<endl;
}