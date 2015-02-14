#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    cout<<"Ejercicio asignarValor:\t\t\t";
    map<string,int>m;
    asignarValor(&m,"A",1);
    asignarValor(&m,"B",2);
    asignarValor(&m,"C",3);

    //set<int>s2;

    if( m["A"]==1 && m["B"]==2 && m["C"]==3)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    set<int>sa;
    set<int>sb;
    sa.insert(2);
    sa.insert(4);
    sa.insert(5);
    sa.insert(6);
    sa.insert(8);

    sb.insert(1);
    sb.insert(2);
    sb.insert(3);
    sb.insert(4);
    sb.insert(5);
    sb.insert(6);

    cout<<"Ejercicio obtenerValor:\t\t\t";

    map<int,char> m2;
    m2[10] = 'x';
    m2[20] = 'y';
    m2[30] = 'z';

    map<int,char> m3;
    m3[10] = 'a';

    if(obtenerValor(m2,10) == 'x'
    && obtenerValor(m2,20) == 'y'
    && obtenerValor(m2,30) == 'z'
    && obtenerValor(m3,10) == 'a')
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio obtenerSemana:\t\t";

    if(obtenerSemana()["lunes"]==1
    && obtenerSemana()["martes"]==2
    && obtenerSemana()["miercoles"]==3
    && obtenerSemana()["jueves"]==4
    && obtenerSemana()["viernes"]==5
    && obtenerSemana()["sabado"]==6
    && obtenerSemana()["domingo"]==7)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getInserseccion:\t\t";

    set<int> sc = getInserseccion(sa,sb);
    if(sc.find(1)==sc.end() &&
        sc.find(2)!=sc.end() &&
        sc.find(3)==sc.end() &&
        sc.find(4)!=sc.end() &&
        sc.find(5)!=sc.end() &&
        sc.find(6)!=sc.end() &&
        sc.find(7)==sc.end() &&
        sc.find(8)==sc.end() &&
        sc.find(9)==sc.end() &&
        sc.find(10)==sc.end() &&
        sc.find(0)==sc.end())
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }



    cout<<"Ejercicio getUnion:\t\t\t";

    set<int> sd = getUnion(sa,sb);

    if(sd.find(1)!=sd.end() &&
        sd.find(2)!=sd.end() &&
        sd.find(3)!=sd.end() &&
        sd.find(4)!=sd.end() &&
        sd.find(5)!=sd.end() &&
        sd.find(6)!=sd.end() &&
        sd.find(7)==sd.end() &&
        sd.find(8)!=sd.end() &&
        sd.find(9)==sd.end() &&
        sd.find(10)==sd.end() &&
        sd.find(0)==sd.end()
        )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio esSubConjunto:\t\t";

    set<int> se;
    set<int> sf;

    se.insert(2);
    se.insert(4);
    se.insert(8);

    if(esSubConjunto(sa,se))
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }



//
    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
