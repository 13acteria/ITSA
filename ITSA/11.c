#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n;
    while(scanf("%d", &m) != EOF){
        scanf("%d", &n);
        int**nums= (int**)malloc(m*sizeof(int*));
        for(int i=0; i<m; i++){
            nums[i]= malloc(n*sizeof(int));
        }

        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++){
                scanf("%d", &nums[r][c]);
            }
        }

        for(int c=0; c<n; c++){
            for(int r=0; r<m; r++){
                if(r != 0)
                    putchar(' ');
                printf("%d", nums[r][c]);
            }
            puts("");
        }
        
        free(nums);
    }

    return 0;
}
