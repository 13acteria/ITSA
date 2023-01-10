#include<stdio.h>
#include<string.h>

int main(){
    char str[513], sub[129];
    scanf("%s%s", sub, str);
    
    int strLen= strlen(str), subLen= strlen(sub);
    int cnt= strLen-subLen+1;
    int res= 0;
    int same;
    for(int i=0; i<cnt; i++){
        same= 1;
        for(int j=0; j<subLen; j++){
            if(sub[j] != str[i+j]){
                same= 0;
                break;
            }
        }
        if(same)
            res++;
    }

    printf("%d\n", res);

    return 0;
}