#include <iostream>
using namespace std;
int width[100000];
int main() {
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>width[i];
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        int min=width[a];
        for(int i=a+1;i<=b;i++){
            if(width[i]<min){
                min=width[i];
            }
        }
        cout<<min<<endl;
    }
}
