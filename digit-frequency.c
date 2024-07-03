#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[9] = {0} ;
    char *s;
    s=(char *)malloc(1000*sizeof(char));
    scanf("%s",s);
    for(int i = 0; s[i]!='\0';i++){
        if(s[i]>='0' && s[i]<='9'){
            arr[s[i]-48]++;
        }
    }
    for(int i=0; i<=9;i++){
        printf("%d ",arr[i]);
    }
    free(s);
    return 0;
}

