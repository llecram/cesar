#include "cesar.h"
cesar::cesar(int b){
    clave=b;
}
string cesar::cifrar(string a){
   string rslt;
    for(int i=0;i<a.size();i++){
        int aux=alfabeto.find(a[i])+clave;
        if(aux>alfabeto.size()){
            //aux-=alfabeto.size();
            aux=modulo(aux,alfabeto.size());
        }
        rslt+=alfabeto[aux];
    }
    return rslt;
}
string cesar::descifrar(string a){
    string rslt;
    for(int i=0;i<a.size();i++){
        int aux=alfabeto.find(a[i])-clave;
        if(aux<0){
            //aux+=alfabeto.size();
            aux=modulo(aux,alfabeto.size());
        }
        rslt+=alfabeto[aux];
    }
    return rslt;
}
int cesar::modulo(int a,int b){
    if(a==0){
        return 0;
    }
    int tmp=a/b;
    int r=a-(tmp*b);
    if(r<0){
        r+=b;
    }
    return r;
}
