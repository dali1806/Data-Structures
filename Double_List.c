/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
#include <stdio.h>
#include <stdlib.h>

//#include "Node.c"
//#include "Stack.c"


typedef struct node{
  int dato;
  struct node *sgte;
  struct node *ant;
}*nodo, tipoNodo;

typedef struct{
  nodo last;
  nodo first;
}*lista, tipoLista;


nodo crearNodo(int);//done
lista crearLista();//done
void insert(int, int, lista);//done
void insertfront(int, lista);//done
void insertlast(int, lista);//done
int delete(int, lista);//done
int deletefront(lista);//done
int deletelast(lista);//done
int empty(lista);//done
int size(lista);//done
int first(lista);//done
int last(lista);//done

nodo crearNodo(int valor){
  nodo item = (nodo) malloc(sizeof(tipoNodo));
  item->dato = valor;
  item->sgte = NULL;
  item->ant = NULL;
  return item;
}

lista crearLista(){
  lista List = (lista) malloc(sizeof(tipoLista));
  List->last = NULL;
  List->first = NULL;
  return List;
}

//main

void insert(int valor, int posicion, lista List){

  if(empty(List)){
    if (posicion == 1){
      insertlast( valor, List);
    }else{
      printf("Error :(\n[la lista esta vacia, y pos != 1]\n");
    }
  }else{
    if(posicion == 1){
      insertfront(valor, List);//funciona
    }else
    if ( posicion <= size(List) ){
      int n,tam;
      nodo item = List -> first;
      n = 1;tam = size(List);
      while( n != posicion){
        n++;
        item = item -> sgte;
      }
      nodo nodoAinsertar = crearNodo( valor);

      nodoAinsertar -> ant = item -> ant;
      item -> ant -> sgte = nodoAinsertar;
      item -> ant = nodoAinsertar;
      nodoAinsertar -> sgte = item;

    }else if(posicion == (size(List) + 1)){
      insertlast(valor, List);//funciona
    }else{
      printf("Error :(\n[el tamano supera a %d]\n", (size(List)+1));//funciona
    }
 }
}

void insertfront(int valor, lista List){ 
  if(empty(List)){
    nodo elemento = crearNodo(valor);
    List -> last = elemento;
    List -> first = elemento;
  }else{
    nodo elemento = crearNodo(valor);
    elemento -> sgte = List -> first;
    List -> first -> ant = elemento;
    List -> first = elemento;
  }
}

void insertlast(int valor, lista List){ 
  if(empty(List)){
    nodo elemento = crearNodo(valor);
    List -> last = elemento;
    List -> first = elemento;
  }else{
    nodo elemento = crearNodo(valor);
    elemento -> ant = List -> last;
    List -> last -> sgte = elemento;
    List -> last = elemento;
  }
}

int delete(int posicion, lista List){

  int info;
  if (!empty(List)){ 

    if(posicion == 1){
      info = deletefront(List);
    }else if(posicion == size(List)){
      info = deletelast(List);
    }else if(posicion == 2){
      nodo item = List -> first;

      info = item -> sgte -> dato;//paso 1.seleccciono el dato del nodo a eliminar

      nodo nodoAborrar = item -> sgte;
      item -> sgte = nodoAborrar -> sgte;
      item -> sgte -> ant = item;//paso 2.apunto al que apuntaba el que va a ser eliminado
      
      free(nodoAborrar);//paso 3. elimino el nodo
    }else if(posicion <= size(List)){

      nodo item = List -> first;
      short n=2;
      while(n != (posicion)){//paso 0.llego una posicion anterior
        n++;
        item = item -> sgte;
      }

      info = item -> sgte -> dato;//paso 1.seleccciono el dato del nodo a eliminar

      nodo nodoAborrar = item -> sgte;
      item -> sgte = nodoAborrar -> sgte;
      item -> sgte -> ant = item;//paso 2.apunto al que apuntaba el que va a ser eliminado
      
      free(nodoAborrar);//paso 3. elimino el nodo

    }else{
      info = -123;
    }
  }else{
    info = -123;
  }

  return info;
}

int deletefront(lista List){ 
  int info;
  if (!empty(List))
  { 
    
    nodo item = List -> first;
    info = item -> dato;
    
    if(List -> first == List -> last){
        List -> first = NULL;
        List -> last = NULL;
    }else{
        List -> first = List -> first -> sgte;
        List -> first -> ant = NULL;
    }
    
    free(item);
    
  }else{
    info = -123;
  }
  return info;
}

int deletelast(lista List){
  int info;
  if (!empty(List))
  {
    nodo item = List -> last;
    
    if(List -> first == List -> last){
        
        info = item -> dato;
        List -> first = NULL;
        List -> last = NULL;
        free(item);
       
    }
    else{
        info = List -> last -> dato;
        List -> last = List -> last -> ant;
        List -> last -> sgte = NULL;
        free(item);
    }
    
  }else{
    info = -123;
  }
  return info;
}

int empty(lista List){ return (List -> first == NULL && List -> last == NULL);
}

int size(lista List){
  int contador = 0;
  nodo actual = List->first;
  while (actual != NULL){
    contador++;
    actual = actual->sgte;
  }
  return contador;
}

int first(lista List){
  return List -> first -> dato;
}

int last(lista List){
  return List -> last -> dato;
}
*/