#include "Evaluador.h"
#include <iostream> // std::cin, std::cout
#include <vector> // std::list
#include <set> // std::list
#include <map> // std::list
using namespace std;
//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
    (*mi_mapa) [llave]= valor; //Se llama al apuntador, luego se asigna el valor en llave
}
//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave]; //Se le hace llamada a mi_mapa con la variable llave.
}
//Devolver el un mapa con los siguientes valores dados en la tabla
// LLave | Valor
//----------------------------
// 1 | "lunes"
// 2 | "martes"
// 3 | "miercoles"
// 4 | "jueves"
// 5 | "viernes"
// 6 | "sabado"
// 7 | "domingo"
map<string,int> obtenerSemana()
{
    map<string,int> semana; //Se le agrega al mapa los valores 1 por 1 y luego se devuelve semana
    semana["lunes"]=1;
    semana["martes"]=2;
    semana["miercoles"]=3;
    semana["jueves"]=4;
    semana["viernes"]=5;
    semana["sabado"]=6;
    semana["domingo"]=7;
    return semana;
}
//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; //Por medio de un embedded while dentro de otro while se recorren simultaneamente para la comparacion set1 y set2 que al ser igual al iguales, se inserta set3
    set<int> ::iterator i=mi_set1.begin();
    while(i!=mi_set1.end())
    {
        set<int> ::iterator j=mi_set2.begin();
        while(j!=mi_set2.end())
        {
            if(*i==*j)
            {
                mi_set3.insert(*i);
            }
            j++;
        }
        i++;
    }
    return mi_set3;
}
//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    set<int> ::iterator i=mi_set1.begin();
    while(i!=mi_set1.end()) //Reutilizando el metodo anterior de embedded whiles, se recorren los sets 1 y 2 para luego ser agregados al set3.
    {
        mi_set3.insert(*i);
        i++;
    }
    set<int> ::iterator j=mi_set2.begin();
    while(j!=mi_set2.end())
    {
        mi_set3.insert(*j);
        j++;
    }
    return mi_set3;
}
//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> ::iterator i=mi_sub_set.begin(); //reutlizando el metodo anterior de embedded whiles, adicionando la funcionalidad de un contador cada vez que los elementos del set sean iguales.
    //De ser el contador igual al set, nos dice que los valores del sub_Set estan dentro del set primario.
    int conteo=0;
    while(i!=mi_sub_set.end())
    {
        set<int>::iterator j=mi_set.begin();
        while(j!=mi_set.end())
        {
            if(*i==*j)
            {
                conteo++;
            }
            j++;
        }
        if(conteo==mi_sub_set.size())
        {
            return true;
        }
        i++;
    }
    return false;
}
int main ()
{
//Funcion evaluadora
    evaluar();
    return 1;
}
