#include<iostream>
#include<string.h>
#include<ctype.h>
#include<climits>
using namespace std;
typedef struct nhanvien
{
    string key, name;
    int hs; int lcb, pc;
    int money = 0;
} nv;
int main()
{
    int n; cin >> n; 
    nv a[n];
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].key);
        cin >> a[i].hs >> a[i].lcb >> a[i].pc;
        a[i].money = a[i].lcb * a[i].hs + a[i].pc;
    }
    int check_max = -1, check_min = INT_MAX;
    int index_max, index_min;
    for(int i = 0; i < n; i++)
    {
        if(check_max <= a[i].money) 
        {
            check_max = a[i].money;
            index_max = i;
        }
        if(check_min >= a[i].money)
        {
            check_min = a[i].money;
            index_min = i;
        }
    }
    cout << "nhan vien co luong cao nhat: \n";
    cout << a[index_max].key << " " << a[index_max].name << " " << a[index_max].money << endl;
    cout << "nhan vien co luong thap nhat: \n";
    cout << a[index_min].key << " " << a[index_min].name << " " << a[index_min].money << endl;
}


