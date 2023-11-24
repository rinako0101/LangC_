#include <stdio.h>
int main(){
    int a;
    printf("a=");
    scanf("%d", &a);
    if(a==1){
        printf("牛丼温玉乗せ\n");
    }
    else if(a==2){
        printf("豚丼\n");
    }
    else{
        printf("昼飯抜き\n");
    }

}