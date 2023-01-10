#include<stdio.h>

int main(){
    int h1, m1, h2, m2;
    scanf("%d %d\n%d %d", &h1, &m1, &h2, &m2);
    int time= 60*(h2-h1)+m2-m1;
    int base= time/30;
    int money= 0;
    if(base > 8){
        money+= 60*(base-8);
        base= 8;
    }
    if(base > 4){
        money+= 40*(base-4);
        base= 4;
    }
    money+= 30*base;
    printf("%d\n", money);

    return 0;
}
