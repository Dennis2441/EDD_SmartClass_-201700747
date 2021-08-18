#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include<cstdio>
#include<cstdlib>
#include <regex>
#include <conio.h>

#include<string.h> 
using namespace std;


void inicio();
void submenu();
void submenu2();
void submenu3();
 string n="";
 int num=0;
 int numc=0;
 int numd=0;
 string names;
 string dpis;
 string carnets;;
 string carreras;
 string correos;
 string pass;
 string creditos;
 int edades;

struct node
{
    int carnet;
    int dpi;
    string Nombre;
    string carrera;
    string correo;
    string Password;
    string credito;
    int edad;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* tail;

void insertar(int carnet,int dpi,string nombre, string carrera,string correo,string password, string credito,int edad){
node* nuevo=new node();

nuevo->carnet=carnet;
    nuevo->dpi=dpi;
    nuevo->Nombre=nombre;
    nuevo->carrera=carrera;
    nuevo->correo=correo;
    nuevo->Password=password;
    nuevo->credito=credito;
    nuevo->edad=edad;
if(head==NULL){
    
    
    head=nuevo;
    nuevo->next=NULL;
    nuevo->prev=tail;
    tail=nuevo;


}else{
tail->next=nuevo;
nuevo->next=NULL;
nuevo->prev=tail;
tail=nuevo;


}

}

bool vaci(){
    if (head!=NULL)
    {
        cout<<"";
        return true;
    }else
    {
        cout<<"Lista Vacia Introducir datos"<<endl;
        return false;
    }
    
    


}
bool buscar(int dpi){
node* actual=new node();
actual=head;
bool flag=false;
if (head!=NULL)
{
    while (actual!=NULL && flag!=true)
    {
        if(actual->dpi==dpi){
            flag=true;
            return flag;

        }

        actual=actual->next;

    }

    if(!flag){


        
        return flag;
    }
    
}else{


    cout<<"Lista Vacia Introducir Estudiantes"<<endl;
}

    
}

bool buscar2(int carnet){
node* actual=new node();
actual=head;
bool flag=false;
if (head!=NULL)
{
    while (actual!=NULL && flag!=true)
    {
        if(actual->carnet==carnet){
            flag=true;
            return flag;

        }

        actual=actual->next;

    }

    if(!flag){


        
        return flag;
    }
    
}else{


    
}

    
}

void modificar( string carnet,string dpi,string nombre, string carrera,string correo,string password, string credito,int edad){



}

bool check_number(string str){
    for (int i = 0 ; i < str.length() ; i++)
    {
        if (isdigit(str[i]) == false){
         return false;

        }
    }
    
   return true;
   }



void Clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
    system("clear");
#endif
}

void submenu(){

cout << "Escoja una opcion:" << endl;
        cout << "1.- Usuario" << endl;
        cout << "2.- Tareas" << endl;
        cout << "3.- salir" << endl;

        cout<<"Escoger: ";
        cin>>n;

        if(check_number(n)==true){
            stringstream ss;  
            ss << n;  
            ss >> num;
            if(num==1){
                Clear();
                cout<<"Menu Usuario"<<endl;
                submenu2();
            }else if (num==2)
            {    Clear();  
                cout<<"Menu Tarea"<<endl;
                submenu3();
            }else if (num==3)
            { Clear();
                inicio();
            }
            
            

        }
}

void submenu2(){

cout << "Escoja una opcion:" << endl;
        cout << "1.- Ingresar" << endl;
        cout << "2.- Modificar" << endl;
        cout << "3.- Eliminar" << endl;
        cout << "4.- Salir" << endl;
        cout<<"Escoger: ";
        cin>>n;

        if(check_number(n)==true){
            stringstream ss;  
            ss << n;  
            ss >> num;
            if(num==1){
                
                cout<<"Ingresar Carnet"<<endl;
                cin>>carnets;
                if (carnets.size()==9)
                {     stringstream ss;  
                      ss << carnets; 
                      ss >> numc; 
                    if (buscar2(numc)==false)
                    {   
                        
                        cout<<"Ingresar dpi"<<endl;
                        cin>>dpis;
                        if (dpis.size()==13)
                        {  stringstream ss;  
                            ss << dpis; 
                            ss >> numd; 
                            if (buscar(numd)==false)
                            {
                                cout<<"Ingresar Nombre Completo"<<endl;
                                cin>>names;
                                cout<<"Ingresar carrera"<<endl;
                                cin>>carreras;
                                cout<<"Ingresar Correo"<<endl;
                                cin>>correos;
                                regex regexp("^(\\w|\\.|\\_|\\-)+[@](\\w|\\_|\\-|\\.)+[.]\\w{2,3}$");
                                smatch m; 
                                if (regex_search(correos,m,regexp))
                                {
                                     
                                        cout<<"Ingresar Password"<<endl;
                                cin>>pass;
                                cout<<"Ingresar Creditos"<<endl;
                                cin>>creditos;
                                cout<<"Ingresar Edad"<<endl;
                                cin>>edades;
                                insertar(numc,numd,names,carreras,correos,pass,creditos,edades);
                                Clear();
                                cout<<"----------------------"<<endl;
                                cout<<"Aguardado Presione Enter para Continuar"<<endl;
                                cout<<"----------------------"<<endl;

                                getch();
                                Clear();
                                submenu2();


                                }else
                                {
                                    cout<<"Correo Incorrecto Se le mandara de regreso a la pagina anterior"<<endl;
                                    submenu2();
                                }
                                
                                
                            }else
                {
                    cout<<"dpi ya registrado"<<endl;
                }
                            





                        }else
                {
                    cout<<"pendiente"<<endl;
                }
                        



                    }else
                {
                    cout<<"Carnet ya registrado"<<endl;
                }
                
                    
                }else
                {
                    cout<<"pendiente"<<endl;
                }
                
                
            }else if (num==2)
            {
                if(vaci()==true){

                        cout<<"Modificar"<<endl;

                }else
                {
                    
                }
                

            }else if (num==3)
            {
                cout<<"Elminiar"<<endl;
            }
            
            
            else if (num==4)
            { Clear();
                submenu();
            }
            
            

        }
}
void submenu3(){

cout << "Escoja una opcion:" << endl;
        cout << "1.- Ingresar" << endl;
        cout << "2.- Modificar" << endl;
        cout << "3.- Eliminar" << endl;
        cout << "4.- Salir" << endl;
        cout<<"Escoger: ";
        cin>>n;

        if(check_number(n)==true){
            stringstream ss;  
            ss << n;  
            ss >> num;
            if(num==1){

                cout<<"Ingresar"<<endl;
            }else if (num==2)
            {
                cout<<"Modificar"<<endl;
            }else if (num==3)
            {
                cout<<"Elminiar"<<endl;
            }
            
            
            else if (num==4)
            { Clear();
                submenu();
            }
            
            

        }
}
void inicio(){


cout << "Escoja una opcion:" << endl;
        cout << "1.- Carga de datos" << endl;
        cout << "2.- Carga de Tareas" << endl;
        cout << "3.- Ingreso Manual" << endl;
        cout << "4.- Reportes" << endl;
    
        cout<<"Escoger: ";


cin>>n; /*Esto porque scanf devuelve valor 0 cuando el valor ingresado no es del formato solicitado*/

if (check_number(n)==true)
{    
stringstream ss;  
  ss << n;  
  ss >> num;

    if (num==1)
    {
        cout<<"ok"<<endl;
    }else if (num==2)
    {
        /* code */
        cout<<"ok"<<endl;
    }else if (num==3)
    {   Clear();
        submenu();
    }
    else if (num==4)
    {
        /* code */
        cout<<"ok"<<endl;
    }
    else
    {
        Clear();
        cout<<"--------------------------------- "<<endl;
    cout<<"Numero no existente Se mostrara el listado una vez mas"<<endl;
    cout<<"--------------------------------- "<<endl;
    
      cin.ignore();
        cout<<" "<<endl;
        
    inicio();
    }
    
    
    
}
else{
    Clear();
     cout<<"--------------------------------- "<<endl;
    cout<<"No es numero Se mostrara el listado una vez mas "<<endl;
    cout<<"--------------------------------- "<<endl;
    
      cin.ignore();
        cout<<" "<<endl;
        
    inicio();
    
    
    
    
}

}


int main()
{

inicio();





     
     
        


}