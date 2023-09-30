#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int isPrime(int);

int main () {
  int evenCount = 0;
  int primeCount = 0;
  int arr[SIZE];
  int even[SIZE];
  int prime[SIZE];
  srand(time(0));

  for(int i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // a random number that's in the range of [0,40] inclusive
    arr[i] = ran;
    even[i] = 0;
    prime[i] = 0;
    if (ran % 2 == 0) {
      even[i] = ran;
      evenCount++;
    }
    if (isPrime(ran)){
      prime[i] = ran;
      primeCount++;
    }
  }

  // display the array
  printf("array [ ");
  for(int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  } 
  printf("]\n");
  // create two arrays of the same size of arr, one to hold even numbers and one for prime numbers; 
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // you may add other variables as needed
  
  // output the even numbers
  printf("%d even numbers: ", evenCount);
  for (int i = 0; i < SIZE; i++){
    if (even[i] != 0){
      printf("%d ", even[i]);
    }
  }
  // output the prime numbers
  printf("\n%d prime numbers: ", primeCount);
  for (int i = 0; i < SIZE; i++){
    if (prime[i] != 0){
      printf("%d ", prime[i]);
    }
  }
  printf("\n");

  return 0;
}

int isPrime(int n){
  if (n <= 1){
    return 0;
  } 
  for (int i = 2; i * i <= n; i++){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}
