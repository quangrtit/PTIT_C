#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
struct time{
	int k,l,m;
	int sum_time;
};
int main(){
	cin>>n;
	struct time ok[n];
	for(int i = 0 ; i < n ; i ++){
		cin>>ok[i].k>>ok[i].l>>ok[i].m;
		ok[i].sum_time = ok[i].k * 3600 + ok[i].l * 60 + ok[i].m * 1;
	}
	for(int i = 0 ; i < n - 1 ; i ++){
		for(int j = i  + 1 ; j < n ; j ++){
			if(ok[i].sum_time > ok[j].sum_time){
				swap(ok[i].sum_time,ok[j].sum_time);
				swap(ok[i].k,ok[j].k);
				swap(ok[i].l,ok[j].l);
				swap(ok[i].m,ok[j].m);
			}
		}
	}
	for(int i = 0 ; i < n ; i ++){
		cout<<ok[i].k<<" "<<ok[i].l<<" "<<ok[i].m<<endl;
	}
}
