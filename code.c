#include<stdio.h>
int main(void){
    
    int n;
    scanf("%d", &n);
    
    int a,b,c;
    while(n--){
        scanf("%d%d%d", &a,&b,&c);
        if(a>b && a>c){
            if(b>c){
                printf("%d \n", b);
            }
                else {
                    printf("%d \n ", c);
                }
            }
        
        else if(b>a && b>c){
            if(a>c){
                printf("%d \n", a);
            }
            else {
                printf("%d \n ", c);
                }
            }

        else if(c>a && c>b){
            if(a>b){
                printf("%d \n", a);
        }
            else {
                printf("%d \n", b);
                }
            }
    }
        return 0;
}
   
