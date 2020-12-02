#include <iostream>

using namespace std;

void medianaPar(float *pM, int n);
void medianaImpar(float *pN, int n);
//esas dos eran las funciones para la mediana par e impar
int main()
{
    int n;
    cout<<"este programa calcula la mediana en estadistica"<<endl;
    cout<<"ingrese cuantos datos va a utilizar"<<endl;
    cin>>n; //los numeros de valores a utilizar
    float par[n], impar[n];
    if(n%2==0)
    {
        medianaPar(&par[n], n);//llamado de la par con su condición para que se ejecute
    }
    else
    {
        medianaImpar(&impar[n], n);//llamado de la impar con su condición para que se ejecute
    }
    

}

void medianaPar(float *pM, int n)
{   
    float M, mediana;
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<"por favor, ingrese los valores"<<endl;
        cin>>pM[i];
    }
    for(int i=0 ; i<=n-2 ; i++)
    {
        for (int j=0 ; j<=n-2 ; j++)
        {
            if(pM[j]>pM[j+1])//organizar de forma ascendente los datos
            {
                int ascendente;
                ascendente=pM[j];
                pM[j]=pM[j+1];
                pM[j+1]=ascendente;
            }        
           
        }
    }
    cout<<"los valores en orden ascendente: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<pM[i]<<endl;

    }
    mediana=(pM[(n-1)/2]+pM[((n-1)/2)+1])/2;//formula para dar la mediana par
    cout<<"la mediana estadistica es: "<<mediana;

}
void medianaImpar(float *pN, int n)
{
    float M, mediana;
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<"por favor, ingrese los valores"<<endl;
        cin>>pN[i];
    }
    for(int i=0 ; i<=n-2 ; i++)
    {
        for (int j=0 ; j<=n-2 ; j++)
        {
            if(pN[j]>pN[j+1])
            {
                int ascendente;
                ascendente=pN[j];
                pN[j]=pN[j+1];
                pN[j+1]=ascendente;
            }        
           
        }
    }
    cout<<"los valores en orden ascendente: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<pN[i]<<endl;

    }
    mediana=pN[(n/2)];//formula para dar la mediana impar
    cout<<"la mediana estadistica es: "<<mediana;


}