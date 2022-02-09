#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>

using std::endl;

int main(){
int y,t,a;
char c[10];
char x;
//como separar as letras por meio char? 
    std::cout<<"Digite uma palavra: \n";
    std::cin>>c;

    
    //std::cout<<c[2];eu consigo aponta a posição ao colocar
        for(y = 0; y < strlen(c); y++){
    std::cout<<"O numero dessa letra (" <<c[y]<< ") esta na posicao: ["<<y<<"]"<<endl;
        }

}