#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
     int sum=a+b;//sumamos las variables a y b
     return sum;
}

//Devuelve la resta de a (dado) y b (dado)

int restar(int a, int b)

{
    int res=a-b;//restamos las variables a y b
    return res;
}

//Devuelve la multiplicacion de a (dado) y b (dado)

int multiplicar(int a, int b)

{
    int mul=a*b;//multiplicamos las variables a y b
    return mul;
}

//Devuelve la division de a (dado) y b (dado)

int dividir(int a, int b)

{
    int div=a/b;//dividimos las variables a y b
    return div;
}

//Devuelve el numero mayor entre a (dado) y b (dado)

int getMayor(int a, int b)

{
    if(a>b)
    {
    return a;//devuelvo el mayor
    }else
    {
    return b;//de lo contrarrio devuelve otro
    }
}

//Devuelve el numero mayor entre a (dado) y b (dado)

int getMenor(int a, int b)

{
    if(a<b)
    {
    return a;//devuelvo el menor
    }else
    {
    return b;//de lo contrarrio devuelve otro
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)

int getMayor(int a, int b, int c)

{
    if(a>b&&a>c)//comparamos nuestras variables
    {//si a es mayor que b y c retornamos a
    return a;
    }
    if(b>a&&b>c)
    {//si b es mayor que a y c retornamos b
    return b;
    }else//de lo contrario retornamos c
    {
    return c;
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)

void setValor(int arreglo[], int valor, int posicion)

{
    arreglo[posicion]=valor;//agregamos un valor a dicha posicion
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)

int getValor(int arreglo[], int posicion)

{
    return arreglo[posicion];//retornamos el valor del arreglo dado en dicha posicion
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos

int getMayor(int arreglo[], int tamano)

{
    int mayor=0;//aqui declaramos "mayor" como variable
    for(int i=0;i<tamano;i++)//usamos "for" para pdoer movernos en el archivo
    {
    if(arreglo[i]>mayor)//usamos "if" para comparar los valores que nos dan
    {
    mayor=arreglo[i];
    }
    }
    return mayor;//devolvemos "mayor"
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos

int getMenor(int arreglo[], int tamano)

{
    int menor=999;//declaramos "menor" como variable
    for(int i=0;i<tamano;i++)
    {//"for" para pdoer movernos en el archivo
    if(arreglo[i]<menor)//"if" para comparar los valores que nos dan
    {
    menor=arreglo[i];
    }
    }
    return menor;//devolvemos menor
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos

int getPromedio(int arreglo[], int tamano)

{
    int suma=0;//declaramos "suma" como variable
    int prom=0;//declaramos"prom" como variable
    for (int i=0;i<tamano;i++)//usamos "for" para movernos en el archivo
    {
    suma+=arreglo[i];//sumamos los numeros del arreglo
    }
    return prom=suma/tamano;//devuelve el promedio de la suma
    }

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
