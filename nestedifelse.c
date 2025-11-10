#include<stdio.h>
int main (){
    int a,b,c;
    printf("ENTER THE VALUE OF A :");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B : ");
    scanf("%d",&b);
    printf("ENTER THE VALUE OF C :");
    scanf("%d",&c);
    if(a>b){
        if (a>b)
        printf("THE GREATEST NUMBER IS A");
    else 
        printf("THE GREATEST NUMBER IS C");
    }    
         else{
            if (b>c)
                printf("THE GREATEST NUMBER IS B");
                else
                printf("HE GREATEST NUMBER IS c");
        }

    return 0;
}


