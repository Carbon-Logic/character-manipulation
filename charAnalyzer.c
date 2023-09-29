#include<stdio.h>

int isDigit(char);
int isLetter(char);
int isOperator(char);

int main(){
  int a; 
  char c;
  printf("Enter an integer and a character seperated by blank: ");
  scanf("%d %c", &a, &c);
  while (a != -10000){
  if (isDigit(c)){
    printf("Character '%c' represents a digit. Sum of %d and %d is %d\n\n", c, a, c - 48, a + c - 48);
  }
  if (isLetter(c)){
    printf("Character '%c' represent a letter\n\n", c);
  }
  if (isOperator(c)){
    printf("Character '%c' represents an operator\n\n", c);
  } 
  if (!isDigit(c) && !isLetter(c) && !isOperator(c))  {
    printf("Character '%c' represents others\n\n", c);
  }
    printf("Enter an integer and a character seperated by blank: ");
    scanf("%d %c", &a, &c);
  }
    return 0;
}

int isDigit(char c){
  if (c >= '0' && c <= '9'){
    return 1;
  } else {
    return 0;
  }
}

int isLetter(char c){
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    return 1;
  } else {
    return 0;
  }
}

int isOperator(char c){
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
    return 1;
  } else {
    return 0;
  }
}
