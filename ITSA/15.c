#include<stdio.h>

int main(){
    //printf("%d, %d, %d\n", ',', '.', 'A');
    int chars[26]= {0};
    int count= 1;
    char c;
    while(scanf("%c", &c) != EOF){
        if(c == ' ')
            count++;
        else if(c >= 'a')
            chars[c-'a']++;
        else if(c >= 'A')
            chars[c-'A']++;
    }
    printf("%d\n", count);
    for(int i=0; i<26; i++){
        if(chars[i] > 0)
            printf("%c : %d\n", i+'a', chars[i]);
    }
    return 0;
}
