

#include<stdio.h>
int main(){
  int k,n,w,i,y;
  scanf("%d %d %d",&k, &n, &w);
  int sum=0;

  for (i=1; i<=w; i++) {
    y=k*i;
    sum = sum+y;
  }
  if (sum<n) {
    printf("0\n");
  }
  else {
    sum = sum-n;
    printf("%d\n",sum);
  }
return 0;
}
