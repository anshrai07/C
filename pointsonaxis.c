#include<stdio.h>
int main(){
    int x , y ;
    printf("ENTER THE COORDINATES = ");
    scanf("%d %d",&x,&y);
    if(y==0 && x==0){
        printf("LIES ON ORIGIN");
    }
else if(y==0){
    printf("LIES ON X-AXIS");
}
else if(x==0){
    printf("LIES ON Y-AXIS");
}
else{
    printf("DOES NOT LIE ON X ,Y OR ORIGIN");
}
return 0;

}