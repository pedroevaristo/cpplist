#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int v[5];
    int x, y, a = 0, t;

    for (x = 0; x < 5; x++)
    {
        cin >> v[x];
        a = a + 1;
    }

    for (x = 0; x < 5; x++)
    {
        if (v[x] % 2 == 0){
            cout << "Os numeros pares:";
            cout<< v[x]<<"\n";
        }
    }
    for (x = 0; x < 5; x++){
       if(v[x] % 2 == 1){
            cout << "Os numeros impares:";
            cout<< v[x]<<"\n";
        }
    }
    cout<<"\n"<<"Quantid.:"<< a;
}