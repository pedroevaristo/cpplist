#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>

using std::endl; 

int main(){
int v[5];
int x, y, a, t;

    std::cout<<"Digite numeros que sejam multiplos de 2 e 3: \n";

    for(x = 0; x < 5; x++){
        std::cin>> v[x];
    }
    for(x = 0 ;x<5; x++){
    if(v[x] % 2 == 0){
        std::cout<<"\nEste numero "<< v[x]<<" e divisivel por 2.";
        if( v [x] % 3 == 0){
        std::cout<<"Este numero tbm eh divisivel por 3"<<endl;
    }
    }
    else if(v[x] % 3 == 0){
        std::cout<<"\nEste numero "<< v[x]<<" e divisivel por 3. ";
        if(v[x] % 2 == 0 ){
        std::cout<<"Este numero tbm eh divisivel por 2"<<endl;
    }
    }
    //colocar aqui n divisoes por 3 e 2
    
    else {
        std::cout<<"\nEste numero: "<< v[x]<<" nao e divisivel por 2 ou 3 \n";
    }
    }

}