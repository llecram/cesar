#ifndef CESAR_H
#define CESAR_H
#include<iostream>
#include<string>
using namespace std;
class cesar
{
    public:
        string alfabeto="abcdefghijklmnopqrstuvwxyz";
        cesar(int);
        string cifrar(string);
        string descifrar(string);
        int modulo(int,int);
    private:
        int clave;
};

#endif // CESAR_H
