#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cf(int cholocate,int wrappers,int m){
    if(cholocate+wrappers<m) return 0;
    
    return (cholocate+wrappers)/m+cf((cholocate+wrappers)/m,(cholocate+wrappers)%m,m);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        answer=n/c+cf(n/c,0,m);
        cout<<answer<<endl;
    }
    return 0;
}
