#include<stdio.h>
int input_number(){
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n){
  int value=0;
  for(int i=1;i<n;i++)
    {
      if(n%i==0)
        value=value+1;
      else
        value=value;
}
  return value;
}
void output(int n,int is_prime){
  if(is_prime>1)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n);
}
int main(){
  int n,prime;
  n=input_number();
prime=is_prime(n);
  output(n,prime);
  return 0;
}
