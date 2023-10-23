#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >> t;
	while(t -- ){
		int n ; cin >> n;
		set<int> s;
		for(int i = 1 ; i <= sqrt(n); i ++){
			if(n % i == 0){
				if(i % 2 == 0){
					s.insert(i);
				}
				if((n / i) % 2 == 0){
					s.insert(n/i);
				}
			}
		}
		cout << s.size() << endl;
	}
}
