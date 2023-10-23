#include <stdio.h> 
long long lcd(long long a, long long b) { long long p = a*b; while(b != 0) { long long tmp = a%b; a = b; b = tmp; } return p/a; } 
int main() { long long t, a, b; scanf("%lli", &t); while(t--) { scanf("%lli %lli", &a, &b); long long uc = a; for(long long i = a+1; i <= b; i++) { uc = lcd(uc, i); } printf("%lli \n", uc); } }

