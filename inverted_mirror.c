#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("enter the number of row of the triangle\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("  ");
        }
        for(k=n;k>i;k--){
            printf("* ");
        }
        printf("\n");
    }
}