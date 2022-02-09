#include<iostream>
#include<cmath>
#include<cstring>
using std::endl;

int main(){
int m[3][3], x,y,z,a, t,t1;

    for(z=0;z<3;z++){
        for(y=0;y<3;y++){
            std::cin>>m[z][y];
        }
    }
    std::cout<<"Diagonal primaria:\n";
    t = 1;
    for(z=0;z<3;z++){
      for(y=0;y<3;y++){
            if(m[z] == m[y]){// Se a posição da linha for igual da coluna mostre e calcúla.
                std::cout<<"["<<m[z][y]<<"]"<<endl;
                    t = t * m[z][y];

            }
        }
    }
    t1 = 1;
    std::cout<<"Diagonal secundaria:\n";
    for(z=0;z<3;z++){//dessa forma colocando diferente "!=" facilita para achar o que quer.
      for(y=0;y<3;y++){
            if(m[z] != m[y]){// Se a posição da linha for igual da coluna mostre e calcúla.
                std::cout<<"["<<m[z][y]<<"]"<<endl;
                    t1 = t1 * m[z][y];

            }
        }
    }
   a = t - t1;
   std::cout<<"\n\n"<<a;
}