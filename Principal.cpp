#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include<cstdio>
#include<cstdlib>
using namespace std;



 string n="";
 int num=0;
struct node
{
    
    string dpi;
    string Nombre;
    
    int edad;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* tail;

void insertar(string dpi,string nombre){
node* nuevo=new node();


    nuevo->dpi=dpi;
    
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
            cout<<"entro"<<endl;
            return flag;

        }

        actual=actual->next;

    }

    if(!flag){


        cout<<"no encontrado"<<endl;
        return flag;
    }
    
}else{


    cout<<"Lista Vacia Introducir Estudiantes"<<endl;
}

    
}

void insertarNodo();

int main(){

insertar("jkjk","Hola");
insertar("klkl","Hola");
bool flag=false;

if(buscar("klkl")==true){

cout<<"Funciono";

}





}