#include<bits/stdc++.h>
using namespace std;
int tv(int a[],int l,int r){
	int tmp = a[r];
	int vtri = l-1;
	for(int i = l ; i < r ; i ++){
		if(a[i] <= tmp){
			vtri++;
			swap(a[i],a[vtri]);
		}
	}
	vtri++;
	swap(a[vtri],a[r]);
	return vtri;
}
void qsort(int a[],int l,int r){
	if(l >= r) return;
	int p = tv(a,l,r);
	qsort(a,l,p-1);
	qsort(a,p+1,r);
}
void merge(int a[],int l,int r,int m){
	vector<int> v(a+l,a+m+1);
	vector<int> vv(a + m + 1,a+r+1);
	int ii = 0 ; int jj = 0;
	while(ii < v.size() && jj < vv.size()){
		if(v[ii] <= vv[jj]){
			a[l] = v[ii];
			++l;++ii;
		}
		else if(v[ii] > vv[jj]){
			a[l] = vv[jj];
			++l;++jj;
		}
	}
	if(ii < v.size()){
		for(int i = ii ; i < v.size() ; i ++){
			a[l] = v[i];
			++l;
		}
	}
	else if(jj < vv.size()){
		for(int i = jj ; i < vv.size() ; i ++){
			a[l] = vv[i];
			++l;
		}
	}
}
void mergesort(int a[],int l,int r){
	if(l >= r) return ;
	int m = (l + r) /2;
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,r,m);
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i  ++ ){
		cin>>a[i];
		
	}
	mergesort(a,0,n-1);
	for(int i = 0 ;i < n ; i ++){
		cout<<a[i]<<" ";
	}
}
