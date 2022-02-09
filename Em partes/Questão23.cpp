#include<iostream>
using namespace std;

int main(){
int x = 1, y, z;//auxiliares
int a, b;//base + expoente

cout<<"Digite numeros para base e expoente: \n";

    cin>> a;//numero que sera repetido 
    cin>> b;//numero de repetições

    for(z = 0; z < b; z++)
    {
        x = x * a;
        
    }
    cout<< x <<endl;





}