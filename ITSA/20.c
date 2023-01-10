#include<stdio.h>
#include<string.h>

int main(){
    int repeat;
    scanf("%d", &repeat);
    getchar();

    char str1[31], str2[31], res[32];
    int len1, len2, len;
    for(int i=0; i<repeat; i++){
        scanf("%s%s", str1, str2);
        len1= strlen(str1);
        len2= strlen(str2);
        if(len1 > len2)
            len= len1+1;
        else
            len= len2+1;

        memset(res, '0', sizeof(res));
        res[len]= '\0';
        int inc;
        for(int d=1; d<=len; d++){
            inc= res[len-d]-'0';
            if(d <= len1)
                inc+= str1[len1-d]-'0';
            if(d <= len2)
                inc+= str2[len2-d]-'0';
            if(inc > 9){
                inc-= 10;
                res[len-d-1]++;
            }
            res[len-d]= inc+'0';
        }
        if(res[0] == '0')
            printf("%s\n", res+1);
        else
            printf("%s\n", res);
    }

    return 0;
}
