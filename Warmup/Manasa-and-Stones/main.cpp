#include<iostream>
#include<set>
#include<algorithm>
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        set<int> res;
        int n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            res.insert(i*b+(n-i-1)*a);
        }
        FOREACH(it,res){
            cout<<*it<<" ";
        }
        cout<<endl;
        
    }
}