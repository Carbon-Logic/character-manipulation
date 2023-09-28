#include <stdio.h> // define EOF

int main(){
  int charInput, cC, lC, sC;
  cC = lC = sC = 0;
 
  charInput = getchar();
  while(charInput != EOF)  /* no end-of-file yet */
  { 
    cC++;  // spaces and '\n' also counted
    if (charInput == '\n'){
      lC++;
      cC--;
    }
    if (charInput == ' '){
      sC++;
    }
    charInput = getchar(); /* read next */
  }
  printf("# of chars: %d (# of blanks: %d)\n# of lines: %d\n", cC, sC, lC);
  return 0;
}

