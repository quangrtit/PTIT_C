#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int tmp = min(n,m);
	int cnt = max(n,m) - tmp;
	cout<<tmp<<" "<<cnt/2<<endl;
}
