#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int x, y = 0;//receber ate onde vai o loop
int a;// constitui no loop
  
  cout << "Digite um numero que seja o limite do loop\n";
  cin>> x;

  for(a = 0; a <= x; a++){
    if(a % 2 == 0){//numero par
    y = y + a;
    }

  }
  cout<<" \n Valor total dos numeros pares: "<< y <<endl;




}

