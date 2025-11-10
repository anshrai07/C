#include<stdio.h>
int main (){
    float a , n;
    printf("ENTER A NUMBER =");
    scanf("%f",&n);
    a =100;
    for(int i=1;i<=n;i=i++){
        printf("%f\n",a);
        a = a / 2 ;
    }
    return 0;
}