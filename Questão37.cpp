#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>

using namespace std;
//use algumas vezes funções, struct, e outras formas aprendidas na ling. C
int main(){
int v[5];
int x, a = 0, y = 0;

    for(x = 0; x < 5; x++){
        cin>> v[x];
    }

    for(x = 0; x < 5; x++){
        
        if(v[x] % 2 == 1){
            a = a + v[x];
            y++;
        }
    }
    
    cout<< a <<"\n";
    cout<<"Quantid. impares:" << y;

}

