#include<iostream>
#include<cmath>
#include<cstring>
#include<bits/stdc++.h>
using std::end;
int main(){
int m[4][4],x,y,t,a, k, k1;//k =  é o que vai receber o total

  k=0;
  std::cout<<"Matriz A\n";
  for(x=0;x<3;x++){
    for(y=0;y<3;y++){
      std::cin>>m[x][y];
      k = k + m[x][y];
    }
  }
  k1=0;
  std::cout<<"Matriz B\n";
  for(t=0;t<3;t++){
    for(a=0;a<3;a++){
      std::cin>>m[t][a];
      k1 = k1 + m[t][a];
    }
  }
    std::cout<<k<<"\n"<<k1;
    std::cout<<"\n"<<k+k1;

}
