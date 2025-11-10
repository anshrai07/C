#include<stdio.h>
int main (){
    int n ;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int r;
    r=0;
    while(n>0){
        r= r+ (r / 10);
        r = r * 10;
        n = n / 10;  
    }
    r = r/10;
    printf("%d",n+r);
}