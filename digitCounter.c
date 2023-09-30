#include<stdio.h>

int main(){
  int c;
  int arr[11] = { [0 ... 10] = 0 };

  c = getchar();
  while (c != EOF){
    if ('0' <= c && c <= '9'){
      arr[c-48]++;
      c = getchar();
    } else {
      arr[10]++;
      c = getchar();
    }
  }
  for (int i = 0; i <= 9; i++){
    printf("%d: %d\n", i, arr[i]);
  }
  printf("X: %d\n", arr[10]);
  return 0;
}
