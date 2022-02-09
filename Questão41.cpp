#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
//--metodo de ordenação--
void p1(int v[5], int x);

using std::endl;

int main(){
    int x, y, t, a;
    int v[5];

    for(x = 0; x < 5;x++){/*objetivo é pegar as informações e repassar na fnução e depois retornar ao main.*/
        std::cin>>v[x];
    }
    p1(v,5);

    for(x = 0; x< 5;x++){
        std::cout<<v[x]<<endl;
    }
}

void p1(int v[5], int x){
    int a, t, y, J;
    for(x = 0; x < 5; x++){
        for(y = x+1; y < 5;y++){
            if(v[x] > v[y]){
            a = v[x];
            v[x] = v[y];
            v[y] = a;
            }
        }
    }


}
/*for(b = 0; b < 10; b++){
    for(z = b + 1; z < 10; z++){
        if(x[b] > x[z]){
            a = x[b];
            x[b] = x[z];
            x[z] = a;
        }
    }
}*/
