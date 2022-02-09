#include<iostream>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using std::endl;
int main(){
    int m[3][3], x, y, a;

    for(x=0;x<3;x++){
      for(y=0;y<3;y++){
        std::cin>> m[x][y];
      }
    }
    a=0;
    for(x=0;x<3;x++){
      for(y=0;y<3;y++){
        a++;
        std::cout<<m[x][y];
        if(a == 3){
          exit(0);
        }
      }
    }




    /*for(x=0;x<3;x++){
      for(y=0;y<3;y++){
        std::cout<< m[x][y];
      }
    }*/
}
