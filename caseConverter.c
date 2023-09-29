#include<stdio.h>

int main() {
  int c;
  c = getchar();
  while (c != EOF){
    if (c >='a' && c <= 'z') {
      putchar(c - 32);
    }
    if (c >= '0' && c < '5') {
      putchar(45);
    }
    if (c >= '6' && c < '9') {
      putchar(43);
    }
    if (!(c >='a' && c <= 'z') && !(c >= '0' && c < '5') && !(c >= '6' && c < '9')){
      putchar(c);
    }
    c = getchar();
  }
  return 0;
}
