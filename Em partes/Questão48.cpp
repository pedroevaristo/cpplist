#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>

using std::endl;

int main(){
    char c[10],a;
    int x,y,t,e;

    std::cout<<"Digite uma palavra:";
    std::cin>>c;

    //std::cout<<c;

    std::cout<<"Vai digitando letras que tem e nao ha na palavra escrita acima: \n";
    t = 0;//acertos 
    e = 0;//erros
    
        for(x = 0; x < strlen(c);x++){
            
            std::cin>>a;

            if(a == c[x]){
                t++;
                std::cout<<"acerto\n";
            } 
            else if(a != c[x]){
                e++;
                std::cout<<"erro\n";
            }
            
        }
    std::cout<<"Quantidade de acertos e erros, respectivamente: "<<t<<"/"<<e;
}//if(a[x] != c[x])
//da para entender que ele vai analisando um por um a letra acima. Corrigir depois.
//algum problema ao digitar as letras, tem umas que estão na palvra, mas dão erro, mesmo assim.
