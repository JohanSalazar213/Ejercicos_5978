#include <iostream>
using namespace std;
main()
{
    int elementos[6]={4,5,1,2,3,6}, i, j, aux, comp = 0;
    for (i=0;i<6-1;i++){
        for(j = i+1;j<5;j++){
            if(elementos[i]>elementos[j]){
                aux = elementos[i];
                elementos[i]=elementos[j];
                elementos[j]=aux;
            }
        }

    }
    for(i = 0;i < 6;i++){
        cout<<"Elementos";
    }
}