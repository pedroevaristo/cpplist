#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<string.h>

using std::endl;
int main(){
  int x, y, t, a;
   int v[5];

  for(x = 0; x < 5; x++){
    std::cin>> v[x];
    }

    for(x = 4; x >= 0; x--){
      for(y = x - 1; y >= 0; y--){
        if(v[x] < v[y]){

        a = v[x];
        v[x] = v[y];
        v[y] = a;

      }
    }
  }
  for(x = 4; x >= 0; x--){

    std::cout<<"\n"<<v[x]<<endl;//Como vou comparar?
    
  }

  for(x = 0; x <= 4; x++){
    t = 0;
    if(v[x] > t){
      t = v[x];
    }
  }

  std::cout<<"\n O maior numero da lista e: "<<t;
// AQui pegue um "t" para comprar qual era o maior entre os da lista, e atribuindo com 0
}
