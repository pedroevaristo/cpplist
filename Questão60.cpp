#include<iostream>
#include<cmath>
#include<cstring>
using std::endl;
//aqui terá que inverter as linhas para tornar em colunas. Faça primeiro com 2 linhas com 3 colunas.
int main(){
int m[3][3], x,y,z, l,t;
    for(x=0;x<2;x++){// linha
        for(y=0;y<3;y++){// coluna
            std::cin>>m[x][y];
        }
    }

    for(y=0;y<2;y++){
        std::cout<<m[y]<<endl;
    }
}