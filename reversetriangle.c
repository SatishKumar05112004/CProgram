#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter the number of row of the triangle\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
}