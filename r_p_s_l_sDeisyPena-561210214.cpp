#include <cstdlib>
#include <iostream>
#include "stdio.h"
#include "conio.h"
#include <Math.h>
#include<stdlib.h> //libreria que permite manejar numeros aleatorios
using namespace std;

int main(int argc, char *argv[])
{
inicio:
    int opc; //opc guarda la opcion que escojio el usuario    
    int compu; //compu guarda la opcion q escogio el pc
//Las siguiente lineas permiten al pc jugar         
    
    compu=1+rand()%(6-1);//Esta funcion permite escojer un numero aleatorio para el pc.
            
//Inicio Menu    

    cout<<"Bienvenido al juego PIEDRA , PAPEL, TIJERA, LAGARTO Y SPOCK!!"<<endl<<"(((((Creado por Deisy Pena cod: 561210214)))))"<<endl<<" Jugamos!!?"<<endl<<endl;
    cout<<"Reglas: Las tijeras cortan el papel."<<endl;
    cout<<"el papel cubre a la piedra."<<endl;
    cout<<"la piedra aplasta al lagarto."<<endl;
    cout<<"el lagarto envenena a Spock."<<endl;
    cout<<"Spock destroza las tijeras."<<endl;
    cout<<"las tijeras decapitan al lagarto."<<endl;
    cout<<"el lagarto se come el papel."<<endl;
    cout<<"el papel refuta a Spock."<<endl;
    cout<<"Spock vaporiza la piedra."<<endl;
    cout<<"y, como es habituaL,  la piedra aplasta las tijeras."<<endl<<endl;
    cout<<"LISTO?!?"<<endl<<endl;
    cout<<"-----ESCOJE TU OPCION!!: "<<endl<<endl;
    cout<<"1- Papel"<<endl<<"2- Piedra"<<endl<<"3- Tijera"<<endl<<"4- Lagarto"<<endl<<"5- Spock"<<endl<<endl;
    cin>>opc;
    if(opc >0 & opc<6) // si se escoje del numero 1 al 5 se hara lo siguiente:
    {
           switch(opc)
                {
                   case 1: //el usuario escogio papel
                        cout<<"Escojiste PAPEL"<<endl;
                        switch(compu)
                            {
                               case 1: 
                                    cout<<"Yo: PAPEL!!"<<endl;
                                    cout<<"Empatamos '_' "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               
                               case 2: 
                                    cout<<"Yo: PIEDRA!!"<<endl;
                                    cout<<"Empatamos '_' "<<endl;
                                    system("PAUSE");
                                   system("cls");
                                   goto inicio;
                               break;
                               case 3:
                                    cout<<"Yo: TIJERAS!!"<<endl;
                                    cout<<"ha ha gane!! "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 4:
                                    cout<<"Yo: LAGARTO!!"<<endl; 
                                    cout<<"ha haa gane!!"<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 5:
                                    cout<<"Yo: mmmm..  SPOCK!!"<<endl;
                                    cout<<"Ganaste T_T "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;     
                            }
				case 2: //el usuario escogio piedra
				     cout<<"Escojiste PIEDRA"<<endl;
				     switch(compu)
                         {
				               case 1: 
                                    cout<<"Yo: PIEDRA!!"<<endl;
                                    cout<<"Empatamos '_' "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               
                               case 2: 
                                    cout<<"Yo: PAPEL!!"<<endl;
                                    cout<<"ha ha gane!"<<endl;
                                    system("PAUSE");
                                   system("cls");
                                   goto inicio;
                               break;
                               case 3:
                                    cout<<"Yo: TIJERAS!!"<<endl;
                                    cout<<"Ganaste T_T "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 4:
                                    cout<<"Yo: LAGARTO!!"<<endl; 
                                    cout<<"Ganaste T_T!!"<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 5:
                                    cout<<"Yo: mmmm..  SPOCK!!"<<endl;
                                    cout<<"ha ha gane!! \\// "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                        }  
                        
              case 3: //el usuario escogio tijeras
				     cout<<"Escojiste TIJERAS!"<<endl;
				     switch(compu)
                         {
				               case 1: 
                                    cout<<"Yo: PIEDRA!!"<<endl;
                                    cout<<"ha ha gane! "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               
                               case 2: 
                                    cout<<"Yo: PAPEL!!"<<endl;
                                    cout<<"arghghg  PERDI!"<<endl;
                                    system("PAUSE");
                                   system("cls");
                                   goto inicio;
                               break;
                               case 3:
                                    cout<<"Yo: TIJERAS!!"<<endl;
                                    cout<<"Empatamos '_' "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 4:
                                    cout<<"Yo: LAGARTO!!"<<endl; 
                                    cout<<"Perdi!! decapitaste a mi lagarto!"<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 5:
                                    cout<<"Yo: mmmm..  SPOCK!!"<<endl;
                                    cout<<"ha ha gane!! \\//  Destroze tus tijeras!"<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break; 
                         }
        	case 4: //el usuario escogio Lagarto
                   cout<<"Escojiste, LAGARTO! (je je)"<<endl;
				   switch(compu)
                         {
				               case 1: 
                                    cout<<"Yo: PIEDRA!!"<<endl;
                                    cout<<"ha ha gane! te aplaste, LAGARTO! "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               
                               case 2: 
                                    cout<<"Yo: PAPEL!!"<<endl;
                                    cout<<"Ganaste T_T .. Te comiste mi papel.."<<endl;
                                    system("PAUSE");
                                   system("cls");
                                   goto inicio;
                               break;
                               case 3:
                                    cout<<"Yo: TIJERAS!!"<<endl;
                                    cout<<"ha ha gane! Te Decapite! "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 4:
                                    cout<<"Yo: LAGARTO!!"<<endl; 
                                    cout<<"Empatamos '_'!!"<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 5:
                                    cout<<"Yo: mmmm..  SPOCK!!"<<endl;
                                    cout<<"ha ha PERDISTE!! \\// Envenenado! "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                          }
              case 5: //el usuario escogio spock
                    cout<<"Escojiste elcapitan SPOCK!"<<endl;
                    switch(compu)
                            {
                               case 1: 
                                    cout<<"Yo: PAPEL!!"<<endl;
                                    cout<<"Ha! mi papel refuto a tu SPOCK! "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               
                               case 2: 
                                    cout<<"Yo: PIEDRA!!"<<endl;
                                    cout<<"Perdiii  T_T  "<<endl;
                                    system("PAUSE");
                                   system("cls");
                                   goto inicio;
                               break;
                               case 3:
                                    cout<<"Yo: TIJERAS!!"<<endl;
                                    cout<<"Noo me las destrozastee!!!  Ganaste.. "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 4:
                                    cout<<"Yo: LAGARTO!!"<<endl; 
                                    cout<<"ha haa gane!! Spock ha sido DECAPITADO!"<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;
                               case 5:
                                    cout<<"Yo: mmmm..  SPOCK!!"<<endl;
                                    cout<<"Empatamos '_' "<<endl;
                                    system("PAUSE");
                                    system("cls");
                                    goto inicio;
                               break;   
                        }
                 
       }
    
                 
    }else // se escojio un numero que no era del 1 al 5 entonces:
         {
           cout<<"Lo lamento "<<opc<<" no es una opcion valida, Recuerda escojer del 1 AL 5 ONLY!! "<<endl;  
           system("PAUSE");
           system("cls");
           goto inicio;
         } 

    
// La siguiente linea pregunta al usuario oprimir una tecla para jugar otraves.
   
    system("PAUSE");
    goto inicio;
}
