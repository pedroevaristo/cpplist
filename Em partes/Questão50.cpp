#include<iostream>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>

using std::endl;

int main(){
    int v[3][3];
    int x,y,a,t;

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            std::cin>>v[x][y];
        }
    }

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            if(v[x]==v[y]){//Com != mostra somente os numeros que foram retirados da matriz.
            std::cout<<v[x][y]<<endl;
            }
        }
    }
}
