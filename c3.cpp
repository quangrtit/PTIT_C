#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i = 0; i< n; i ++){
			cin>>a[i];
		}
		priority_queue<int> pq;
		long long  cnt = 0;
		for(int i = 0;i<n;i++){
			if(a[i] > 0){
				pq.push(a[i]);
			}
			else{
				if(!pq.empty()){
					cnt += pq.top();
					pq.pop();
				}
			}
		}
		cout<<cnt<<endl;
	}
}
