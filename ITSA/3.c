#include<stdio.h>

int main(){
    int a, b;
    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        if(a*a+b*b > 40000)
            printf("outside\n");
        else
            printf("inside\n");
    }

    return 0;
}
