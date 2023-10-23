#include<bits/stdc++.h>
using namespace std;
bool cvb(pair<string,int> a, pair<string,int> b){
	return a.second < b.second ; 
}
int main(){
	int n ; cin >> n;
	string s ;
	int a , b , c ;
	vector<pair<string,int>> vx;
	while(n -- ){
		cin >> s;
		cin >> a >> b >> c;
		int tmp = c * 365 + b * 30 + a;
		vx.push_back({s,tmp});
	}
	sort(vx.begin() , vx.end(),cvb);
	cout << vx[vx.size() - 1].first << "\n" << vx[0].first <<endl;
}
