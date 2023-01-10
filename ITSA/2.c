#include<stdio.h>

int main(){
    int num;
    double base;
    while(scanf("%d", &num) != EOF){
        base= 1.6;
        printf("%.1lf\n", base*num);
    }

    return 0;
}
