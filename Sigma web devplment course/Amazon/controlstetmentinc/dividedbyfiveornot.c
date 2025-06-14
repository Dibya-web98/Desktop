#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    if(n%5==0){
        printf("divisible by 5");
    }
else{
    printf("not divisibleby 5");
}
return 0;

}