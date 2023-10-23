#include<bits/stdc++.h>
using namespace std;
int qq(vector<int> &a,int l,int r){
    int tmp  = a[r];
    int v = l-1;
    for(int i = l ; i < r; i ++){
        if(a[i] <= tmp){
            v ++;
            swap(a[v],a[i]);
        }
    }
    v ++;
    swap(a[v],a[r]);
    return v;
}
void qsort(vector<int> &a,int l,int r){
    if(l >= r) return;
    int p = qq(a,l,r);
    qsort(a,l,p-1);
    qsort(a,p+1,r);
}
int main(){
    int n;cin>>n;
    vector<int> a;
    int ok ;
    a.push_back(-1);
    for(int i = 0 ; i < n ; i ++){
        cin>>ok;
        a.push_back(ok);
    }
    qsort(a,0,n);
    for(auto &x : a) cout<<x<<" ";
    // int cnt = 0;
    // for(int i = 0 ; i < n ; i ++){
    //     if(a[i+1]  - a[i] > 1){
    //         cout<<a[i] + 1<<endl;
    //         cnt = 1;
    //         break;
    //     }
    // }
    // if(cnt == 0) cout<<a[a.size() -1];

}
