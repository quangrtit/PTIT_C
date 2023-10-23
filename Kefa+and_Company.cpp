#include<bits/stdc++.h>
using namespace std;
struct frienf{
	int a,b;
};
bool cmp(const frienf &m,const frienf &n){
	return m.a < n.a;
}
int main(){
	int n,d;
	cin>>n>>d;
	frienf ok[n];
	for(int i = 0 ; i< n ;  i ++){
		cin>>ok[i].a>>ok[i].b;
	}
	sort(ok,ok+n,cmp);
	int check_max = -1;
	for(int i = 0; i < n -1; i ++){
		long long tmp = ok[i].b;
		for(int j = i +1; j < n ; j ++){
			if(ok[j].a - ok[i].a < d){
				tmp += ok[j].b;
			}
			else{
				break;
			}
		}
		if(check_max < tmp){
			check_max = tmp;
		}
	}
	check_max = max(check_max,ok[n-1].b);
	cout<<check_max<<endl;
//	for(int i = 0 ; i < n ; i ++){
//		cout<<ok[i].a<<" "<<ok[i].b<<endl;
//	}
}
