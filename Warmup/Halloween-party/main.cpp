#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long m = ceil(n / 2);
		long long result = m*(n - m);
		cout << result << endl;
	}
}