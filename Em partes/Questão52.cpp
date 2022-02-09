#include<iostream>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using std::endl;
int main(){
    int m[3][3], x, y, a, t;

    for(x=0;x<3;x++){
      for(y=0;y<3;y++){
        std::cin>> m[x][y];
      }
    }
    a=0;
    t = 0;
    for(x=0;x<3;x++){
      for(y=0;y<3;y++){
        a++;
        std::cout<<m[x][y];
        t = t + m[x][y];
        if(a == 3){
          std::cout<<"\n a soma total dos 3 numeros: "<<t;
          exit(0);
        }
      }
    }

}
