#include "cesar.h"
int main()
{
    string b;
    int clave;
    cout<<"ingrese el mensaje: "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"ingrese la clave: "<<endl;
    cin>>clave;
    cout<<endl;
   cesar cifrar(clave);
   string resultado=cifrar.cifrar(b);
   cesar descifrar(clave);
   string result=descifrar.descifrar(resultado);
   cout<<resultado<<endl;
   cout<<result;
}
