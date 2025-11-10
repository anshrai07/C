 #include<stdio.h>
 int main(){
   int i , a , n;
   a = 100;
   printf("ENTER THE VALUE OF A =");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      printf("%d\n",a);
      a = a - 3;
   }
   return 0;
 }