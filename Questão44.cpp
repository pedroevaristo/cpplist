#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>

using std::endl;
/* Desenvolva um algoritmo que receba um vetor de caracteres
de 10 posições e conte quantas vezes uma determinada letra
escolhida pelo usuário é apresentada. */
int main(){
    int y,a,t;
    char c[10];
    char x;

   std::cout<<"Digite uma palavra ate de 10 letras e digite: \n";
   std::cin>>c>>x;

   //std::cout<<c<<"\n"<<x;
    a = 0;
    for(y = 0;y < strlen(c); y++){
        if(c[y] == x){
            a++;
        }
    }
    std::cout<<a;

}