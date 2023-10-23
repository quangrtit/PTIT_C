#include<stdio.h> 
#include<math.h> 
#include<string.h>
#include<stdlib.h>
int main(){ 
  int n,k,m,res=0,l;scanf("%d%d%d",&n,&m,&k);
  int x,c[5001];
  memset(c,0,sizeof(c));
  if(k==0){
  printf("%d",n-m);
  return 0;
  }
  int h=k*2+1;
  for(int i=1; i<=m; i++){
  scanf("%d",&x);
  int g=((x+k)>n)?n:(x+k);
  for(int j=((x-k)<1)?1:(x-k);j<=g; j++)c[j]=1;
  }
  int s=0;
  for(int i=1; i<=n; i++){
  if(c[i]==0){
  s++;
  }
  else
  if(s>0){
  res+=(s%h==0)?(s/h):((s/h)+1);
				s=0;
  }
  }
  if(s>0) res+=(s%h==0)?(s/h):((s/h)+1);
  printf("%d",res);
}
