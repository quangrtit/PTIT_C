#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int cnt = 0;
	while(n--){
		int a[3];
		int cx = 0;
		for(int i = 0 ; i < 3 ; i ++){
			cin>>a[i];
			if(a[i] > 0) cx ++;
		}
		if(cx >= 2) cnt ++;
	}
	cout<<cnt<<"\n";
}
