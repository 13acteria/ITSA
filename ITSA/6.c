#include<stdio.h>

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        if(num <= 2)
            printf("Winter\n");
        else if(num <= 5)
            printf("Spring\n");
        else if(num <= 8)
            printf("Summer\n");
        else if(num <= 11)
            printf("Autumn\n");
        else if(num <= 12)
            printf("Winter\n");
    }

    return 0;
}
