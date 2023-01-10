#include<stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d%d", &n2, &n3);
    if(n2 > n3){
        n1= n2;
        n2= n3;
    }else
        n1= n3;
    
    while(n2 != 0){
        n3= n1%n2;
        n1= n2;
        n2= n3;
    }
    printf("%d\n", n1);

    return 0;
}
