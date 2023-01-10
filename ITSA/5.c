#include<stdio.h>

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        if(num < 0){
            num-= -128;
            printf("1");
        }else
            printf("0");

        int base= 64;
        for(int i=0; i<7; i++){
            if(num & base)
                printf("1");
            else
                printf("0");
            base/= 2;
        }
        puts("");
    }

    return 0;
}
