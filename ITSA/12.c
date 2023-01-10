#include<stdio.h>

int f(n){
    if(n <= 1)
        return n+1;
    return f(n-1)+f(n/2);
}

int main(){
    int n;
    scanf("%d", &n);
    n= f(n);
    printf("%d\n", n);

    return 0;
}
