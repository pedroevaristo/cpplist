#include<iostream>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using std::endl;

int main(){
float v[4], t;
int y,x,z;

    for(y=0;y<4;y++){
        std::cin>>v[y];
    }
    t=0;
    for(y=0;y<4;y++){
        for(x=y+1;x<4;x++){
            if(v[y] > v[x]){
                t = v[y];
                v[y] = v[x];
                v[x] = t;
            }
        }
    }
    std::cout<<t;

}