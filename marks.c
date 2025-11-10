#include <stdio.h>
int main (){
    int n ;
    printf ("ENTER YOUR MARKS = ");
    scanf("%d",&n);
    if(n >= 90 && n >= 100){
        printf("EXCELLENT");
    }
    else if(n > 80){
        printf("VERY GOOD");
    }
    else if(n > 70){
        printf("GOOD");
    }   
     else if(n > 60){

        printf("AVERAGE");
    }
    else{
        printf("FAIL");
    }
    return 0;
}