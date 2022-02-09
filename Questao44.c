#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
 int y, a ,t;
 char c[10];
 char x;
    printf("Digite um palavra ate no maximo 10 letrase letar quer seja e mostadav varias vezes: \n");
    
    scanf("%s\n %c", &c, &x);    

    a = 0;
    for(y = 0; y < strlen(c); y++){
        if(c[y] == x){
            a++;
        }
    }
    printf("%i", a);
}