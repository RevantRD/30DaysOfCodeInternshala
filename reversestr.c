#include <stdio.h>
#include <string.h>
int main()
{

    char ch[50];
    scanf("%s",ch);
    char t;
    int n=strlen(ch);
    for(int i=0;i<n/2;i++){
        t=ch[i];
        ch[i]=ch[n-i-1];
        ch[n-i-1]=t;
        
    }
    printf("%s",ch);
    return 0;
}
