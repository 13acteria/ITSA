#include<stdio.h>

int main(){
    int num, n3;
    while(scanf("%d", &num) != EOF){
        n3= num/3;
        printf("%d\n", (n3+1)*n3/2*3);
    }

    return 0;
}
