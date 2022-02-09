#include<iostream>
#include<math.h>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, x, k, l;

    cout<<"digite um numero; \n";
    cin>> i;

    cout<<" os divisores";

    for(l = i; l > 0; l--){
        if(i % l == 0){
            cout<< l <<"\n";
        }
    }
    k = 0;
    cout<<"Os 3 ultimos divisores";

    for(l = i; l > 0; l--){
        if(i % l ==0){
            cout<< "\n" << l;
        }
        k++;
    }
        if(k == 3){//se k rodou o programa três vezes para
            return 0;
        }
}
