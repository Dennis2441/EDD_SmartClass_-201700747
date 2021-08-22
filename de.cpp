#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include<cstdio>
#include<cstdlib>
#include <regex>
#include <conio.h>
#include <cstdlib>
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
 string dpibu;
 string carnetbu;
 int idd=0;
string carga;
string valorcarnet;
string valordpi;
string valornombre;
string valorcooreo;
string valorarrera;
string vallorpass;
string valorcredit;
int valoredad;
int contador=0;
bool flag=true;
bool valorfal;





class MyClass {        // The class
  public:              // Access specifier

struct cola{
	int id;
    string conexion;
    string tipo;
    string descripcion;
	struct cola* next;
    
} ;
struct cola* head;
struct cola* tail;


void colaerror(string tipo,string description,string conexion ){
 cola* nuevo= new cola();
idd=idd+1;
nuevo->id=idd;
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

bool buscarcola(string dato){

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

void eliminardecola(string dato){
     cola* actual= new cola();
     actual=head;
     bool encontrado=false;
     cola* anterior= new cola();
     anterior=NULL;
     if(head !=NULL){

            while (actual!=NULL &&  encontrado!=true)
            {
                if (actual->conexion==dato)
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
    string dia;
    string hora;
    string mes;
    string carnet;
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

void insertarea(string dia,string mes,string  hora,string carnet, string nombree,string descripcionn,string materia,string fecha,string estado,bool acepta){
node2* nuevo=new node2();
contadorid=contador+1;
nuevo->dia=dia;
nuevo->hora=hora;
nuevo->mes=mes;
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
bool buscartarea(string carnet){
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
void modificartare(string carnet, string nombree,string descripcionn,string materia,string fecha,string estado,bool acepta){
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
    string carnet;
    string dpi;
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

void insertar(string carnet,string dpi,string nombre, string carrera,string password, string credito,int edad,string correo, bool ver){
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
bool buscar(string dpi){
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

void desplegar(string dpi){
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
            valorfal=actual->aceptada;
            

        }

        actual=actual->next;

    }

    
    
}


}

bool buscar2(string carnet){
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

void modificar( string carnet,string dpi,string nombre, string carrera,string password, string credito,int edad,string correo, bool ver){
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
bool ban=true;
stringstream sa;


string cva=sa.str();
sa << valoredad;
string eva=sa.str();
 regex regexp("^(\\w|\\.|\\_|\\-)+[@](\\w|\\_|\\-|\\.)+[.]\\w{2,3}$");
 smatch m;
cout<<"----------------------------------------------------------"<<endl;
if(valorfal==true){

    ban=true;
}else
{
    if (valordpi.size()==13)
{
    /* code */
}else
{
    ban=false;
}

if (valorcarnet.size()==9)
{
    /* code */
}else
{
    ban=false;
}

if (regex_search(valorcooreo,m,regexp))
                                {


}else
{
    ban=false;
}
}










cout<<"Presionar 1 si Quiere Cambiar El DPI: "+valordpi<<endl;
cout<<"Presionar 2 si Quiere Cambiar El carnet: "+valorcarnet<<endl;
cout<<"Presionar 3 si Quiere Cambiar La carrera: "+valorarrera<<endl;
cout<<"Presionar 4 si Quiere Cambiar El Nombre: "+valornombre<<endl;
cout<<"Presionar 5 si Quiere Cambiar El Password: "+vallorpass<<endl;
cout<<"Presionar 6 si Quiere Cambiar Creditos: "+valorcredit<<endl;
cout<<"Presionar 7 si Quiere Cambiar LA edad: "+eva<<endl;
cout<<"Presionar 8 si Quiere Cambiar EL correro: "+valorcooreo<<endl;
cout<<"Presionar 9 Guardar Datos Y regresar: "<<endl;
cin>>n;
if(check_number(n)==true){
        stringstream ss;  
            ss << n;  
            ss >> num;
            if(num==1){

                    cout<<"Introducir Nuevo DPI:";
                    cin>>cambio;
                    if(cambio.size()==13){
                        
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    ban=true;
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


                    
                    cout<<"Cambio Hecho"<<endl;
                    getch();
                    Clear();
                    ban=true;
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
                    
                                if (regex_search(cambio,m,regexp))
                                {
                                        valorcooreo=cambio;
                                        cout<<"Cambio Hecho"<<endl;
                                        getch();
                                        Clear();
                                        ban=true;
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
                insertar(valorcarnet,valordpi,valornombre,valorarrera,vallorpass,valorcredit,valoredad,valorcooreo,ban);
                
                    if(valorfal==true){
                        Clear();
                        

                    }else
                    {
                        if(ban==false){
                            cout<<"Revisar algun Datos ya que alguno esta malo"<<endl;
                        }
                        else
                        {
                            if(cola2.buscarcola(dpibu)==true){

                                cola2.eliminardecola(dpibu);
                            }
                            
                        }
                        
                    }
                    
                    cout<<"Cambios Hechos Y Aguardados"<<endl;
                    getch();
                    Clear();
                    submenu2();
            }
            
            
            
                    
            
            

}

else
{
    cout<<"Escoja Un numero Porfavor, Presione cualquier tecla para continuar";
    getch();
    Clear();
    cambiares();

}


}

void modfi(){
cout<<"Introducir carnet: ";
    cin>>n;
    carnetbu=n;
    if(n.size()==9){
            if(buscartarea(n)==true){


            }else{
cout<<"Carnet no existe"<<endl;
        submenu3();


            }

    }else
    {   
        cout<<"Carnet no correcto"<<endl;
        submenu3();
    }
    

}

void menumodificar(){
    
    string verdad;
    
    cout<<"Introducir DPI: ";
    cin>>n;
    dpibu=n;
    if(n.size()==13){
            stringstream ss;  
            ss << n;  
            ss >> num;

            if(buscar(n)==true){
                    dpibu=n;
                    desplegar(dpibu);
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
                {     
                    if (buscar2(carnets)==false)
                    {   
                        
                        cout<<"Ingresar dpi"<<endl;
                        cin>>dpis;
                        if (dpis.size()==13)
                        {  
                             
                            if (buscar(dpis)==false)
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
                                insertar(carnets,dpis,names,carreras,pass,creditoos,edades,correos,flag);
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
                cout<<"Introducir DPI"<<endl;
                cin>>n;
                if(buscar(n)==true){

                    
                }
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
                string mes,dia,hora,carnet,nom,descrip,mat,fecha,estado;
                cout<<"Ingresar"<<endl;
                cout<<"Introducir Mes: ";
                cin>>mes;
                cout<<"Introducir dia: ";
                cin>>dia;
                cout<<"Introducir hora: ";
                cin>>hora;
                cout<<"Introducir Carnet: ";
                cin>>carnet;
                if(carnet.size()==9){

                    if(buscar2(carnet)==true){
                        cout<<"Introducir nombre: ";
                cin>>nom;
                cout<<"Introducir descripcion: ";
                cin>>descrip;
                cout<<"Introducir materia: ";
                cin>>mat;
                cout<<"Introducir fecha YY/MM/DD : ";
                cin>>fecha;
                cout<<"Introducir estado: ";
                cin>>estado;

                insertarea(dia,mes,hora,carnet,nom,descrip,mat,fecha,estado,true);
                cout<<"Guardado"<<endl;
                Clear();
                submenu3();

                    }else
                {
                    cout<<"Carnet no existe"<<endl;
                    submenu3();
                }
                }else
                {
                    cout<<"Carnet no tiene 9 digitos"<<endl;
                    submenu3();
                }
                

            }else if (num==2)
            {
                cout<<"Modificar"<<endl;
                modfi();
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
{    regex regexp("^(\\w|\\.|\\_|\\-)+[@](\\w|\\_|\\-|\\.)+[.]\\w{2,3}$");
 smatch m;
    int age;
    string nos;
    int numero;
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
            bool dp,ca,co,verca;
            dp=false;
            ca=false;
            co=false;
            verca=false;
            string Carnet,DPI,Nombre,Carrera,Correo,Password,Creditos,Edad;

            getline(stream,Carnet,',');
            getline(stream,DPI,',');
            getline(stream,Nombre,',');
            getline(stream,Carrera,',');
            getline(stream,Password,',');
            getline(stream,Creditos,',');
            
            getline(stream,Edad,',');
            getline(stream,Correo,',');
                    cout<<"Carnet: "+Carnet<<endl;
                    cout<<"DPI: "+DPI<<endl;
                    cout<<Correo<<endl;
                    
         int numero=   atoi( DPI.c_str() );
          stringstream sa;  
                      sa << Carnet; 
                      sa >> numc;

         
            

    
            stringstream se; 
            se<<Edad;
         se >> age;
            
            


             if (DPI.size()==13)
             {
                
             }else{
                 flag=false;
                 dp=true;
             }

             if (Carnet.size()==9)
             {
                
             }else{
                 flag=false;
                 ca=true;
             }if (regex_search(Correo,m,regexp))
                                {


                }else
                {
                    flag=false;
                    co=true;
                }
        
            if(buscar(DPI)==false){
                
                    if(buscar2(DPI)==true){
                        verca=true;


                    }

                    if(verca==true){
                        if(dp==true  && co==true){

                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante","Carnet Ya existe, Correo no tiene formato correcto y DPI no tiene 13 numeros",DPI);
                            cola2.colaerror("Estudiante","Carnet Ya existe, Correo no tiene formato correcto y DPI no tiene 13 numeros",DPI);
                        }else if (dp==true)
                        {
                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante","Carnet Ya existe  y DPI no tiene 13 numeros",DPI);
                            cola2.colaerror("Estudiante","Carnet Ya existe  y DPI no tiene 13 numeros",DPI);
                        }else if (co==true)
                        {
                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante","Carnet Ya existe Y Correo no tiene formato correcto ",DPI);
                            cola2.colaerror("Estudiante","Carnet Ya existe Y Correo no tiene formato correcto ",DPI);
                        }else
                        {
                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante","Carnet Ya existe",DPI);
                            cola2.colaerror("Estudiante","Carnet Ya existe",DPI);
                        }
                        
                    }
                    else
                    {
                        if(dp==true  && co==true){

                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante"," Correo no tiene formato correcto y DPI no tiene 13 numeros",DPI);
                            cola2.colaerror("Estudiante"," Correo no tiene formato correcto y DPI no tiene 13 numeros",DPI);
                        }else if (dp==true)
                        {
                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante"," DPI no tiene 13 numeros",DPI);
                            cola2.colaerror("Estudiante"," DPI no tiene 13 numeros",DPI);
                        }else if (co==true)
                        {
                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                            cola1.colaerror("Estudiante","Correo no tiene formato correcto ",DPI);
                            cola2.colaerror("Estudiante","Correo no tiene formato correcto ",DPI);
                        }else
                        {
                            insertar(Carnet,DPI,Nombre,Carrera,Password,Creditos,age,Correo,flag);
                        }
                        
                    }
                    

                    
                    

            }   else{



            }
        
        
                   
                            

                                                                 
                                         
                                         
                                         }myfile.close();
        cout<<"Aguardado"<<endl;
        getch();
        Clear();
        inicio();

    }else if (num==2)
    {
        string ruta;
    string line; 
        cout<<"Introducir Ruta de Archivo"<<endl;
        ifstream myfile;
        cin>>ruta;
        myfile.open(ruta);
        getline(myfile,line);
        while(getline(myfile,line)) {
            stringstream stream(line);
            bool car,me,di,ho,si;
            int month,day,time;
            string mes,dia,hora, Carnet,Nombre,descrip,materia,fecha,estado;
            getline(stream,mes,',');
            getline(stream,dia,',');
            getline(stream,hora,',');
            getline(stream,Carnet,',');
            getline(stream,Nombre,',');
            getline(stream,descrip,',');
            getline(stream,materia,',');
            getline(stream,fecha,',');
            getline(stream,estado,',');
            stringstream sa;
            

            if(buscar2(Carnet)==false){

             car=false;
             flag=false;

            }
            if(check_number(mes)==false){

                me=false;
            }
            if (check_number(dia)==false)
            {
                di=false;
            }
            if (check_number(hora)==false)
            {
                ho=false;
            }
            if(Carnet.size()==9){

                
            }else{

                si=false;
            }

            if(car==false && si==false ){

                insertarea(dia,mes,hora,Carnet,Nombre,descrip,materia,fecha,estado,flag);
                cola1.colaerror("Tarea","Carnet no registrado y no tiene 9 digitos",Carnet);
                cola2.colaerror("Tarea","Carnet no registrado y no tiene 9 digitos",Carnet);

            }else
            {
                insertarea(dia,mes,hora,Carnet,Nombre,descrip,materia,fecha,estado,flag);
            }
            



            
            






            
            
            
        }
        myfile.close();
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