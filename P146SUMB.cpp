#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int ii = 0;
	for(int i = 0 ; i < 2*n +1;i ++){
		for(int j = 0 ; j < n - ii ; j ++){
			cout<<"  ";
		}
		for(int j = 0 ; j <= ii ; j ++){
			cout<<j<<" ";
		}
		for(int j = ii-1 ;j >= 0; j -- ){
			cout<<j<<" ";
		}
		for(int j = 0 ; j < n - ii ; j ++){
			cout<<"  ";
		}
		if(i < n){
			ii ++;
		}
		else{
			ii --;
		}
		cout<<"\n";
	}
}
