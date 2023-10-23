#include<bits/stdc++.h>
using namespace std;
int n,a[10005];
// un = un-1 + n;
int main(){
	cin>>n;
	a[0] = 0;
	int ii = 1;
	long long tmp = 0;
	while(true){
		a[ii] = a[ii-1] + ii;
		tmp += a[ii];
		if(tmp > n){
			break;
		}
		ii ++;
	}
	cout<<ii-1<<endl;1
}
