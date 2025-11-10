#include<stdio.h>
int main(){
    int n , a =4 , i;
    printf("ENTER THE NUMBER = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n", a);
        a = a+3;
    }
return 0 ;
}