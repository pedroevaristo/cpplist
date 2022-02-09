#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
//IMPORTANTE ISSO AQUI É GERADOR DE NUMEORS PRIMOS!
using namespace std;

int main(){
int x, y, u, a = 2, h, l;//numeor primo somente é divisivel por 1 e por ele mesmo

cout<<"Digite um numero que vai ser o limite maximo: \n";
    cin>> x;

    for(int e = 0; e <= x; e++){//0 e 1 -> 0 e 2-> 0 e 3 e assim por diante
//Se o aparece o mesmo numero que for mesmo abaixo 2(e), 1(h) vai 
//ser salvo no y++ e em seguida 2(e é que roda um de cada vez), 2(h) é que fica rodando de forma rapida de 1 à 10.
      y = 0;
     for(h = 1; h <= e; h++){
        if(e % h == 0){
            y++;
        }
     }
     if(y == 2){
       //a+=h;
       //cout<< a <<endl;
     }
    }

}
