#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20],brr[20]="0123456789";
    scanf("%s",str);
    int count,n=strlen(str);
    for(int i=0;i<10;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(str[j]==brr[i]){
                count+=1;
            }
        }
        printf("%d ",count);
    }
    return 0;
}
