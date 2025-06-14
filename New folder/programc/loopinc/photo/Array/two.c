#include<stdio.h>
int main(){
    int  marks[10]={10,30,40,50,55,36,15,20,60,70};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d",i);
        }

    }
    return 0;
}