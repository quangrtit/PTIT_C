#include<bits/stdc++.h>
using namespace std;
int n,m,cn,a[10005],l,r;
int main(){
	cin>>cn>>n>>m;
	int check = cn - n+1;
	int cx = 0;
	while(check--){
		if(check <= m + 1){
			cx ++;
		}
	}
	cout<<cx-1;
}
