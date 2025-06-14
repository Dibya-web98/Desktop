#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number of row:");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");
    }

   return 0; 
}