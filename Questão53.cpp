#include<iostream>
#include<cmath>
#include<cstring>
#include<bits/stdc++.h>
using std::endl;
int main(){
int m[3][3], x,y,a,t;

  for(x=0;x<3;x++){//coloque linha maior para colocar
    for(y=0;y<2;y++){//aqui o menor o numeor para fica correpodente ao a matriz ao desenhada/projetada.
      std::cin>>m[x][y];
    }
  }
  for(x=2;x>=0;x--){
    for(y=2-1;y>=0;y--){
      if(m[x] == m[y]){
        std::cout<<m[x][y]<<endl;
      }
    }
  }
}
