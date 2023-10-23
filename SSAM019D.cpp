#include<bits/stdc++.h>
using namespace std;
bool check1(long long n){
	while(n > 0){
		if(1 <= n % 10 &&  n % 10 <= 8){
			return false;
		}
		n = n / 10;
	}
	return true;
}
int main(){
	int t ; cin >> t;
	while(t--){
		long long n ; cin >> n;
		int ii = 1 ;
		long long tmp;
		while(1){
			tmp = n * ii ;
			if(check1(tmp) == true){
				cout << tmp << endl;
				break;
			}
			ii ++;
		}
	}
}
