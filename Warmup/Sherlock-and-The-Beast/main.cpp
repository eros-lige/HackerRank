#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int i = 0, j = 0;
		int flag = 0;
		while (i * 5<=n){
			j = 0;
			while ((i * 5 + j * 3)<=n){
				if ((i * 5 + j * 3) == n){
					flag = 1;
					break;
				}
				j++;
			}
			if (flag == 1)break;
			i++;
		}
		if (flag == 0){
			cout << "-1" << endl;
			continue;
		}
		for (int ii = 0; ii<j*3; ii++){
			cout << "5";
		}
		for (int ii = 0; ii<i*5; ii++){
			cout << "3";
		}
		cout << endl;

	}
}
