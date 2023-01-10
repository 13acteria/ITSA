#include<stdio.h>

int main(){
    int coin;
    int a, b, c;
    scanf("%d,%d,%d,%d", &coin, &a, &b, &c);

    coin-= a*15+b*20+c*30;
    if(coin < 0){
        puts("0");
        return 0;
    }
    c= coin/50;
    coin%= 50;
    b= coin/5;
    a= coin%5;

    printf("%d,%d,%d\n", a, b, c);

    return 0;
}
