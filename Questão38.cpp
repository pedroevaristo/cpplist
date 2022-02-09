#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
float v[5];
float t =0, h, k, l;
int x, a, y;//aqui não pode colcoar o float para o array

    cout<<"Digite as alturas do atletas: \n";

    for(x = 0; x < 5; x++){
        cin>> v[x];

        t = t + v[x];
    }
    k = t/5;

    cout<<"Atleta com altura maior que a media: \n";

    for(x = 0; x < 5; x++){
        if(v[x] > k){

        cout<<"\n"<<v[x];

        }
    }

}