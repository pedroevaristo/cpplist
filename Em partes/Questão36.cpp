#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
int v[5];
int n, x, m, a = 0;

    for(x =0 ;x < 2; x++){
        cin>> v[x];
        if(v[x] < 0)
        {
            a = a + 1;
            m = v[x];
            
        }
    }

    for(x = 0;x < 2; x++){
       if(v[x] > 0){
        double n = sqrt(v[x]);
        cout<< n <<endl;
       }
    }
    //cout << a<<"\n";
    for(int h = 0; h < a; h++){
        cout<< m << "\n";
    }
}