#include<stdio.h>
#include<string.h>

int main(){
    int repeat;
    scanf("%d", &repeat);
    getchar();

    int n1, n2, i1, i2;
    char sign;
    for(int i=0; i<repeat; i++){
        sign= getchar();
        scanf("%d %d %d %d", &n1, &i1, &n2, &i2);
        getchar();
        if(sign == '*'){
            printf("%d %d\n", n1*n2-i1*i2, n1*i2+n2*i1);
        }else if(sign == '+'){
            printf("%d %d\n", n1+n2, i1+i2);
        }else{
            printf("%d %d\n", n1-n2, i1-i2);
        }
    }

    return 0;
}
