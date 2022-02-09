#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using std::endl;

void a(int x);
void b(int x);

/*struct info{
    int x, y, ax, t;
    int v[5];
}l;*/


void a(int x){

int ax;
    std::cout<<"Entrou na funcao decremento!\n";
    std::cout<<x<<endl;

    for(ax = x; ax > 0; ax--){
        std::cout<<ax<<endl;
    }
}

void b(int x){
int ax;
    std::cout<<"Entrou na funcao incremento!\n";
    std::cout<<x<<endl;

    for(ax = 0; ax <= x; ax++){
        std::cout<<ax<<endl;
    }
}

int main(){
    //info l;

    int x, y, ax, t;

    std::cout<<"Digite quantos numeros tenha na lista, abaixo:"<<endl;
    std:: cin>> x;
    std::cout<<"Vai decremento(1), incremento(2):"<<endl;
    std::cin>> t;

    if(t == 1){
        a(x);
        std::cout<<"\n ainda nao entrou na funcao este numero: "<<x;
        //std::cout<<"1";
    }
    else if(t == 2){
        b(x);
        std::cout<<"\n ainda nao entrou na funcao este numero: "<<x;

        //std::cout<<"2";
    }


}
//procurar de alguma forma de colocar a informação entre paranteses.
//Como faço para colcoar as info. da struct com "l" dentro da função?