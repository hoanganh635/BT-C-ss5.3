#include <stdio.h>

int main(){
  int a,sum=0;
  printf("moi ban nhap 1 so nguyen duong: ");
  scanf("%d", &a);
  for(int i = 1; i <= a; i++){
    sum = sum + i;
  }
  printf("%d", sum);
  return 0;
}