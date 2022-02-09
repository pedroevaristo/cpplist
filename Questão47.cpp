#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>

using std::endl;

int main(){
char c[10],a;
int x,y;

    std::cout<<"Digite uma palavra ate 10 letras: ";
    std::cin>>c;

    for(y = strlen(c); y >= 0;y--){
        std::cout<<c[y]<<endl;
    }

}