#include<iostream>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using std::endl;
int p();

int main(){
char s[20];
//int v[5];
int x,y,z,w,t,t1, l;
    std::cout<<"Nome da funcionaria:\n";
    gets(s);
    
    t1 = p();
   
//os valores serão implementados dentro automaticamente.
//soma os as quantidades de vezes + o valor total de cada serviço + os 50% de ganho sobre o salário.
//depois divide por 5

    t = 100 / 50 * t1;
    puts(s);
    std::cout<<"O valor total: "<<t;
    
}

int p(){
int x,z,y;
    std::cout<<"Quantas vezes voce com frequencia fez o servico:\n";
    //aqui vou pergunta com que frequencia vendeu tais serviços:
        std::cout<<"manicure para pes: \n";
        std::cin>>z;
         std::cout<<"manicure para maos: \n";
         std::cin>>x;
          std::cout<<"Servico podologia: \n";
          std::cin>>y; //só não é    
          return ((z*10)+(x*15)+(y*30));      
}
/*
z = 30 * t;
    a = z / 5;
    h = a * 50;
    std::cout<<"Informacoes"<<endl;
    std::cout<<"Valor do total em 30 dias: "<<z<<endl;
    std::cout<<"Valor total dividido entre 5 integrantes: "<<a<<endl;
    std::cout<<"Valor com 50% de ganho no faturamento: "<<h<<endl;
 */