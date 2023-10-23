#include<bits/stdc++.h>
using namespace std;
int a[1005];
bool b[50];
int n;
void inkq(){
	for(int i = 1 ; i <= n ; i ++){
		cout<<a[i];
	}
	cout<<" ";
}
void hoanvi(int j){
	for(int i = 1 ; i <= n ;i ++){
		if(b[i]){
			a[j] = i;
			if(j == n){
				inkq();
			}
			else{
				b[i] = false;
				hoanvi(j + 1);
				b[i] = true;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	for(int i = 0 ; i <= 30 ; i ++){
		b[i] = true;
	}
	while(t--){
		cin>>n;
		hoanvi(1);
		cout<<endl;	}
}
