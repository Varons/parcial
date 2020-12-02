#include <iostream>
#include <string>

using namespace std;

//Desarrolle una estructura estudiante, que contenga nombre, edad,
//documento de identidad y semestre académico.
struct Universidad //creación de la estructura, con todos los datos para mandar al main
{
    string nombre;
    int edad;
    int CC;
    int semestre;
};
int main()
{
    int saber;
    cout<<"este programa le da la informacion de un estudiante de la UTP, si quiere saberla oprima 1"<<endl;//simplemente llené las variables y todo :D
    cin>>saber;
    Universidad persona;
    persona.nombre = "Juan David Marin Varon";
    persona.edad = 18;
    persona.CC = 1005160031;
    persona.semestre = 4;
    cout<<"estudiante: "<<persona.nombre<<endl;
    cout<<"edad: "<<persona.edad<<endl;
    cout<<"identificacion: "<<persona.CC<<endl;
    cout<<"semestre que esta cursando: "<<persona.semestre<<endl;
}

