#include<stdio.h>
#include<string.h>

int main(){
    char s[30];
    int len, same;
    while(scanf("%s", s) != EOF){
        same= 1;
        len= strlen(s);
        for(int i=0; i<len/2; i++){
            if(s[i] != s[len-1-i]){
                same= 0;
                break;
            }
        }
        if(same)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
