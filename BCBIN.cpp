#include<bits/stdc++.h>
using namespace std;
int x,y,z,a[50005];
void gan(){
	for(int i = 0 ; i  < 10005 ; i ++){
		a[i] = 0;
	}
}
bool check(int a[],int x,int y){
	for(int i = x ; i < y ; i ++){
		if(a[i] == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int p;cin>>p;
	gan();
	while(p --){
		cin>>x>>y>>z;
		if(z == 1){
			for(int i = x ; i < y;i ++){
				a[i] = i;
			}
		}
		else if(z == 2){
			if(check(a,x,y) == true){
				cout<<1<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
	}
}
