#include<stdio.h>
int main(){
    int RAM ;
    printf("ENTER AGE OF RAM ");
    scanf("%d",&RAM);
    int SHYAM ;
    printf("ENTER THE AGE OF SHYAM");
    scanf("%d",&SHYAM);
    int AJAY ;
    printf("ENTER THE AGE OF AJAY");
    scanf("%d",&AJAY);
    if(RAM > SHYAM){
        if(RAM > AJAY)
        printf("RAM IS OLDER THAN BOTH");
        else
        printf("AJAY IS OLDER THAN BOTH");
    }
else{
    if(SHYAM>AJAY)
    printf("SHYAM IS OLDER THAN BOTH");
    else 
    printf("AJAY IS OLDER THAN BOTH");
}
return 0;


}