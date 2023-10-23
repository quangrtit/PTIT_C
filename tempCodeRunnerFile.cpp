#include<bits/stdc++.h>
using namespace std;

int a[1000];
int n; 
int a_demo[1000];
void backtrack(int j)
{
    for(int i = 1; i <= n; i++)
    {
        a_demo[j] = a[i];
        if(j == n)
        {
            for(int ii = 1; ii <= n; ii++)
            {
                cout << a_demo[ii] << " ";
            }
            cout << endl;
        }
        else
        {
            backtrack(j + 1);
        }
    }
}
int main()
{
	cin >> n; 
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    backtrack(1);
}