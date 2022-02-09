#include<iostream>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>

using std::endl;

int main(){
    int x,y,z,a,t[3];
    int v[3][3];
    
        for(x = 0;x<3;x++){
            for(y=0;y<3;y++){
                std::cin>>v[x][y];
            }
        }
        for(x = 0;x<3;x++){
            for(y=0;y<3;y++){
                std::cout<<"posicao: ["<<x <<"]["<< y<<"]:"<<endl;
                if(v[x] == v[y]){
                    std::cout<<"O numero na diagonal: "<<v[x][y]<<endl;
                }
            }
        }
}
                