#include<stdio.h>
int main (){
  int n ;
  printf("ENTER THE NUMBER :-");
  scanf("%d",&n);
  int count ;
count = 0 ;
while(n!=0){
    n = n / 10;
    count++;
}
printf("THE N0 DIGITS ARE %d",count);
return 0;
}