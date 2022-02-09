#include<iostream>
#include<math.h>
//#include<bits/stdc++.h>
using namespace std;


/*Escreva um algoritmo que calcule todos os números
divisíveis por 4 entre 1 e o número informado
pelo usuário 
*/
int main(){

    int y, x;

    cout<<"Digite seu numero: \n";
    cin>> x;

    for(int u = 1; u <= x; u++){
        
        if(u % 4 == 0){

            cout<<"\n"<< u;

        }
    }


}