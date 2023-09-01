#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int count=0;
    printf("Enter first array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter second array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[i]){
                count++;
                break;
            }
        }
    }
    if(count==n)
    printf("Both are same");
    else
    printf("Both are Not same");
    return 0;
}
