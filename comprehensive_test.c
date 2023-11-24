#include <stdio.h>
int main(){
    int a;
    for(a=1; a<26; a++){
        if(a %3 ==0){
            printf("%d\n", a);
        }
    }

    while(a<51){
        if(a %3 ==0){
            printf("%d\n", a);
        }
        a++;
    }
}