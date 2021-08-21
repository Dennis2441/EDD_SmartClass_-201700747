#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
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
void menumodificar();
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
 string creditoos;
 int edades;
 int contadorid=0;
 int dpibu;
 int carnetbu;

string carga;
int valorcarnet;
int valordpi;
string valornombre;
string valorcooreo;
string valorarrera;
string vallorpass;
string valorcredit;
int valoredad;
int contador=0;
bool flag=true;





class MyClass {        // The class
  public:              // Access specifier

struct cola{
	int id;
    int conexion;
    string tipo;
    string descripcion;
	struct cola* next;
    
} ;
struct cola* head;
struct cola* tail;


void colaerror(int id,string tipo,string description,int conexion ){
 cola* nuevo= new cola();

nuevo->id=id;
nuevo->tipo=tipo;
nuevo->descripcion=description;
nuevo->conexion=conexion;
if(head==NULL){
    head=nuevo;
    head->next=NULL;
    tail=nuevo;


}else
{
    tail->next=nuevo;
    nuevo->next=NULL;
    tail=nuevo;
}



}

bool buscarcola(int dato){

cola* actual= new cola();
     actual=head;
     bool encontrado=false;
     if (head!=NULL)
     {
         while(actual!=NULL && encontrado != true){
                if (actual->conexion==dato)
                {
                    encontrado=true;
                    return encontrado;

                }

                actual = actual->next;
                

         }

     }if(!encontrado){
			return false;
		}
     




}
void eliminardecola(int dato){
     cola* actual= new cola();
     actual=head;
     bool encontrado=false;
     cola* anterior= new cola();
     anterior=NULL;
     if(head !=NULL){

            while (actual->conexion=NULL &&  encontrado!=true)
            {
                if (actual->conexion=dato)
                {
                    if (actual==head)
                    {
                        head=head->next;
                    }else if (actual==tail)
                    {
                        anterior->next=NULL;
                        tail=anterior;
                    }else
                    {
                        anterior->next=actual->next;
                    }
                    encontrado=true;
                    
                    
                    
                }

                anterior=actual;
                actual=actual->next;
                
            }


            
     }else
     {
         cout<<"Cola Vacia No Hay errores"<<endl;
     }
     

     


}




//-----------------
};//aqui termina la clase
//------------------



MyClass cola1;
MyClass cola2;



struct node2
{   
    int id;
    int carnet;
    string Nombre;
    string Descripcion;
    string materia;
    string fecha;
    string hora;
    bool aceptada;
    string estado;
    
    struct node2* next;
    struct node2* prev;
};struct node2* head2;
struct node2* tail2;

void insertarea(int carnet, string nombree,string descripcionn,string materia,string fecha,string estado,bool acepta){
node2* nuevo=new node2();
contadorid=contador+1;
nuevo->id=contadorid;
nuevo->carnet=carnet;
nuevo->Nombre=nombree;
nuevo->Descripcion=descripcionn;
nuevo->materia=materia;
nuevo->fecha=fecha;
nuevo->estado=estado;
nuevo->aceptada=acepta;
if(head2==NULL){

head2=nuevo;
    nuevo->next=NULL;
    nuevo->prev=tail2;
    tail2=nuevo;

}else
{
    tail2->next=nuevo;
nuevo->next=NULL;
nuevo->prev=tail2;
tail2=nuevo;
}



}
bool vacita(){
    if (head2!=NULL)
    {
        cout<<"";
        return true;
    }else
    {
        cout<<"Lista Vacia Introducir datos"<<endl;
        return false;
    }
    
    


}
bool buscartarea(int carnet){
    node2* actual=new node2();
    actual=head2;
    bool flag=false;
    if (head2!=NULL)
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
void modificartare(int carnet, string nombree,string descripcionn,string materia,string fecha,string estado,bool acepta){
    node2* actual=new node2();
    actual=head2;
    bool encontrado=false;
    if(head2==NULL){

            while (actual!=NULL && encontrado!=true)
            {
                        if (actual->carnet==carnetbu)
                        {
                            actual->id=contadorid;
                            actual->carnet=carnet;
                            actual->Nombre=nombree;
                            actual->Descripcion=descripcionn;
                            actual->materia=materia;
                            actual->fecha=fecha;
                            actual->estado=estado;
                            actual->aceptada=acepta;
                        }

                        actual=actual->next;
                        
            }
            

    }


}



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
    bool aceptada;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* tail;

void insertar(int carnet,int dpi,string nombre, string carrera,string password, string credito,int edad,string correo, bool ver){
node* nuevo=new node();

nuevo->carnet=carnet;
    nuevo->dpi=dpi;
    nuevo->Nombre=nombre;
    nuevo->carrera=carrera;
    nuevo->correo=correo;
    nuevo->Password=password;
    nuevo->credito=credito;
    nuevo->edad=edad;
    nuevo->aceptada=ver;
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


    
}

    
}

void desplegar(int dpi){
node* actual=new node();
actual=head;
if (head!=NULL)
{
    while (actual!=NULL)
    {
        if(actual->dpi==dpi){
            valorcarnet=actual->carnet;
            valordpi=actual->dpi;
            valornombre=actual->Nombre;
            valorarrera=actual->carrera;
            valorcooreo=actual->correo;
            vallorpass=actual->Password;
            valoredad=actual->edad;
            

        }

        actual=actual->next;

    }

    
    
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

void modificar( int carnet,int dpi,string nombre, string carrera,string password, string credito,int edad,string correo, bool ver){
node* actual=new node();
actual=head;

bool encontrado=false;

if (head!=NULL)
{   

    while(actual!=NULL && encontrado!=true){


        if (actual->dpi==dpibu)
        {

            actual->carnet=carnet;
    actual->dpi=dpi;
    actual->Nombre=nombre;
    actual->carrera=carrera;
    actual->correo=correo;
    actual->Password=password;
    actual->credito=credito;
    actual->edad=edad;
    actual->aceptada=ver;
            
        }actual=actual->next;
        
    }


}



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


void cambiares(){
    string cambio;
cout<<"Presionar 1 si Quiere Cambiar El DPI: "+valordpi<<endl;
cout<<"Presionar 2 si Quiere Cambiar El carnet: "+valorcarnet<<endl;
cout<<"Presionar 3 si Quiere Cambiar La carrera: "+valorarrera<<endl;
cout<<"Presionar 4 si Quiere Cambiar El Nombre: "+valornombre<<endl;
cout<<"Presionar 5 si Quiere Cambiar El Password: "+vallorpass<<endl;
cout<<"Presionar 6 si Quiere Cambiar Creditos: "+valorcredit<<endl;
cout<<"Presionar 7 si Quiere Cambiar LA edad: "+valoredad<<endl;
cout<<"Presionar 8 si Quiere Cambiar EL correro: "+valorcooreo<<endl;
cout<<"Presionar 9 Guardar Datos Y regresar: "+valoredad<<endl;
cin>>n;
if(check_number(n)==true){
        stringstream ss;  
            ss << n;  
            ss >> num;
            if(num==1){

                    cout<<"Introducir Nuevo DPI:";
                    cin>>cambio;
                    if(cambio.size()==13){
                        ss<<cambio;
                    ss>>valordpi;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();
                    }else
                    {
                        cout<<"No tiene 13 numeros el DPI";
                        getch();
                        Clear();
                        cambiares();
                    }
                    
                    

            }else if (num==2)
            {   
                    cout<<"Introducir Nuevo Carnet:";
                    cin>>cambio;
                if(cambio.size()==9){


                    ss<<cambio;
                    ss>>valorcarnet;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();
                }else
                    {
                        cout<<"No tiene 9 numeros el Carnet";
                        getch();
                        Clear();
                        cambiares();
                    }
                
                    
            }
            else if (num==3)
            {
                cout<<"Introducir Nueva Carrera:";
                    cin>>cambio;
                    valorarrera=cambio;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();
            }else if (num==4)
            {
                cout<<"Introducir Nuevo Nombre:";
                    cin>>cambio;
                    valornombre=cambio;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();
            }
            else if (num==5)
            {
                cout<<"Introducir Nuevo Password:";
                    cin>>cambio;
                    vallorpass=cambio;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();
            }
            else if (num==6)
            {
                cout<<"Introducir Nuevo Creditos:";
                    cin>>cambio;
                    valorcredit=cambio;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();
            }else if (num==7)
            {
                cout<<"Introducir Nuevo Edad:";
                    cin>>cambio;
                    ss<<cambio;
                    ss>>valoredad;
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    cambiares();


            }else if (num==8)
            {
                cout<<"Introducir Nuevo Correo:";
                    cin>>cambio;
                    regex regexp("^(\\w|\\.|\\_|\\-)+[@](\\w|\\_|\\-|\\.)+[.]\\w{2,3}$");
                    smatch m; 
                                if (regex_search(cambio,m,regexp))
                                {
                                        valorcooreo=cambio;
                                        cout<<"Cambio Hecho"<<endl;
                                        getch();
                                        Clear();
                                        cambiares();

                                }else
                                {
                                    cout<<"Formato Incorrecto";
                                        getch();
                                        Clear();
                                        cambiares();
                                }
                                
                    


            }
            
            
            else if (num==9)
            {
                
                    cout<<"Cambios Hechos Y Aguardados"<<endl;
                    getch();
                    Clear();
                    submenu2();
            }
            

}else
{
    cout<<"Escoja Un numero Porfavor, Presione cualquier tecla para continuar";
    getch();
    Clear();
    cambiares();

}


}

void menumodificar(){
    
    string verdad;
    cout<<"Introducir DPI: ";
    cin>>n;
    if(n.size()==13){
            stringstream ss;  
            ss << n;  
            ss >> num;

            if(buscar(num)==true){
                    dpibu=num;
                    desplegar(num);
                    cambiares();


            }
            else{
                
                    cout<<"No Esta el DPI Indicado"<<endl;
                    getch();
                    submenu2();
                
            }

    }else
    {
        cout<<"Introducir numero de 13 digitos Presionar Enter para continuar"<<endl;
        
        getch();
        submenu2();
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
                                cin>>creditoos;
                                cout<<"Ingresar Edad"<<endl;
                                cin>>edades;
                                insertar(numc,numd,names,carreras,pass,creditoos,edades,correos,flag);
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
                                    getch();
                Clear();
                                    submenu2();
                                }
                                
                                
                            }else
                {
                    cout<<"dpi ya registrado"<<endl;
                getch();
                Clear();
                    submenu2();
                }
                            





                        }else
                {
                    cout<<"pendiente"<<endl;
                }
                        



                    }else
                {
                    cout<<"Carnet ya registrado"<<endl;
                    getch();
                Clear();
                submenu2();
                }
                
                    
                }else
                {
                    cout<<"pendiente"<<endl;
                }
                
                
            }else if (num==2)
            {    
                if(vaci()==true){

                        menumodificar();

                }else
                {
                    getch();
                    submenu2();
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
    {   string ruta;
    string line; 
        cout<<"Introducir Ruta de Archivo"<<endl;
        ifstream myfile;
        cin>>ruta;
        myfile.open(ruta);
        getline(myfile,line);
        while(getline(myfile,line)) {
            
            stringstream stream(line);
            string Carnet,DPI,Nombre,Carrera,Correo,Password,Creditos,Edad;

            getline(stream,Carnet,',');
            getline(stream,DPI,',');
            getline(stream,Nombre,',');
            getline(stream,Carrera,',');
            getline(stream,Password,',');
            getline(stream,Creditos,',');
            
            getline(stream,Edad,',');
            getline(stream,Correo,',');
                    cout<<"Carnet:"+Carnet<<endl;
                    cout<<"DPI"+DPI<<endl;
                    cout<<Correo<<endl;
                    getch();
             if (Carnet.size()==9)
                {     stringstream ss;  
                      ss << Carnet; 
                      ss >> numc; 
                         if (buscar2(numc)==false)
                    {   


                            if (DPI.size()==13)
                            {
                                stringstream ss;  
                            ss << DPI; 
                            ss >> numd; 

                            if (buscar(numd)==false)
                            {
                                    regex regexp("^(\\w|\\.|\\_|\\-)+[@](\\w|\\_|\\-|\\.)+[.]\\w{2,3}$");
                                smatch m; 
                                if (regex_search(Correo,m,regexp))
                                {       stringstream ss; 
                                        int age; 
                                     ss << Edad; 
                                            ss >> age; 

                                         insertar(numc,numd,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                                         

                                }else
                                {   
                                    cout<<"error de email";
                                    
                                }
                                


                            }else
                            {
                                cout<<"dpi ya ingresado: ";
                                cout<<DPI<<endl;
                            }
                            

                                

                            }else
                            {
                                 cout<<"Cola de error de numero de dpi"<<endl;
                            }
                            
                            

                    }   else{


                        cout<<"Carnet ya ingresado: ";
                                cout<<Carnet<<endl;
                    }
                
                  
                }else
                {
                    cout<<"Cola de error de numero de carnet"<<endl;
                }
                



        }

        myfile.close();
        cout<<"Aguardado"<<endl;
                                         getch();
                                         Clear();
                                         inicio();

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