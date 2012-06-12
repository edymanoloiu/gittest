#include<stdio.h>
int main() {
  int n, cP=0,cI=0,pv[101],iv[101];
  scanf("%d",&n);
  for(int i=1;i<=n;i++) {
    int temp;
    scanf("%d",&temp);
    if(temp%2==0) {
      cP++;
      pv[cP]=temp;
    } else {
      cI++;
      iv[cI]=temp;
    }
  }
  printf("Numere pare: ");
  for(int i=1;i<=cP;i++) {
    printf("%d ",pv[i]);
  }
  printf("\nNumere impare: ");
  for(int i=1;i<=cI;i++) {
    printf("%d ",iv[i]);
  }
  printf("\n");
  return 0;
}
