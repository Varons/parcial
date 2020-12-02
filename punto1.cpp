#include <iostream>


using namespace std;
//Desarrolle programa que calcule el número mayor y menor de un arreglo
//bidimensional con tamaño nxn y genere como resultado el promedio de
//ambos valores.

int main()
{
    int n;
    cout<<"este programa le da el numero mayor, menor y promedio de un arreglo bidimensional, ingrese el tamano de la matriz"<<endl; 
    cout<<"este programa solo funciona para numeros menores a 100000 y mayores a -10000"<<endl;
    cin>>n;
    float promedio, matriz[n][n], maximo=-10000, minimo=100000; //definir las variables, los minimos y maximos son condiciones.
    

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {   
            cout<<"ingrese los valores, porfavor"<<endl;
            cin>>matriz[i][j];
            if(matriz[i][j]>maximo)//condición para saber cual es el máximo
            {
                maximo=matriz[i][j];

            }
            if(matriz[i][j]<minimo)//condición para saber cual es el mínimo
            {
                minimo=matriz[i][j];
            }
        }

    }
    promedio=(maximo+minimo)/2;//encontrar promedio de estos dos números. 
    cout<<"el valor maximo es: "<<maximo<<endl;
    cout<<"el valor minimo es: "<<minimo<<endl;
    cout<<"el promedio de estos dos numeros es: "<<promedio<<endl;


}