#include<iostream>
#include<cmath>
#include<cstring>
#include<bits/stdc++.h>
using std::endl;

int main(){
int m[3][4], x,y,a,t;

  for(x=0;x<3;x++){
    for(y=0;y<4;y++){
      std::cin>>m[x][y];
    }
  }
  std::cout<<"Normal: \n";
  for(x=0;x<3;x++){
    for(y=0;y<4;y++){
      std::cout<<m[x][y];
    }
  }
  std::cout<<"\nMatriz com triplo do valor: \n";
  for(x=0;x<3;x++){
    for(y=0;y<4;y++){
      std::cout<<m[x][y]+3<<endl;
    }
  }
}
