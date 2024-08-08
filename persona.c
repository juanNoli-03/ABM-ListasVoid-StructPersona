#include <stdio.h>
#include <stdlib.h>
#include <string.h>


///INCLUIMOS NUESTRO ARCHIVO.H
#include "persona.h"

///DEFINIMOS LA ESTRUCTURA DE LA PERSONA CON SUS RESPECTIVOS ATRIBUTOS
struct PersonaE {

    char nombre [20];

    char apellido [20];

    char dni [10];
};

///IMPLEMENTACIONES DE LAS PRIMITIVAS

///1- Construccion de la Persona
///-----------------------------------------------------------------------------------------
PersonaP crearPersona (char nombre [20], char apellido [20], char dni [10]) {

    PersonaP persona = malloc (sizeof(struct PersonaE));

    strcpy (persona->nombre, nombre);

    strcpy (persona->apellido, apellido);

    strcpy (persona->dni, dni);

    return persona;
}
///-----------------------------------------------------------------------------------------


///2- Mostrar Persona
///-----------------------------------------------------------------------------------------
void mostrarPersona (PersonaP persona) {

    printf ("\n---DATOS DE LA PERSONA---\n");

    printf ("\n---Nombre completo: %s %s--DNI: %s---\n", persona->nombre, persona->apellido, persona->dni);
}
///-----------------------------------------------------------------------------------------

///3- Imprimir lista de Personas
///-----------------------------------------------------------------------------------------
void imprimirListaPersonas (ListaP lista) {

    int tam;

    getSizeLista (lista, &tam);

    printf ("\n---IMPRESION DE LA LISTA CREADA---\n");

    for (int i = 0; i < tam; i ++) {

        PersonaP persona = *((PersonaP *) getElemento (lista, i));

        mostrarPersona(persona);
    }
}
///-----------------------------------------------------------------------------------------

///4- Ordenar lista de Personas por nombre
///-----------------------------------------------------------------------------------------
void ordenarListaPersonasPorNombre (ListaP lista) {

   int tam;

   getSizeLista (lista, &tam);

   PersonaP aux1; //Definimos un auxiliar donde vamos a guardar a la persona en la pos actual.

   PersonaP aux2; //Definimos un auxiliar donde vamos a guardar a la persona en la pos actual + 1.

   printf ("\n---LISTA DE PERSONAS ORDENADA---\n");

	for (int j = 0; j < tam; j ++) {

	    for (int i = 0; i < tam - 1; i ++) {

            if (strcmp(getNombrePersonaLista(lista, i), getNombrePersonaLista(lista, i + 1)) == 1) {

                aux1 = *((PersonaP *)getElemento (lista, i)); //Obtenemos a la persona de la pos i.

                aux2 = *((PersonaP *)getElemento(lista, i + 1)); //Obtenemos a la persona de la pos i + 1.

                setElemento (lista, &aux1, i + 1); //Seteamos a la persona de la pos i en la pos i + 1.

                setElemento (lista, &aux2, i); //Seteamos a la persona de la pos i + 1 en la pos i.
            }
        }

    }
}
///-----------------------------------------------------------------------------------------

///5- Busqueda de Persona en la lista por Dni
///-----------------------------------------------------------------------------------------
int busquedaPersonaPorDni (ListaP lista, char dni [10]) {

    int tam;

    getSizeLista (lista, &tam);

    int pos = -1;

	for (int i = 0; i < tam; i ++) {

        if (strcmp(dni, getDniPersonaLista (lista, i)) == 0) {

            pos = i;

            i = i + tam;
		}
    }

   return pos;
}

void chequearBusquedaPersonaPorDni (ListaP lista, char dni [10]) {

    int pos = busquedaPersonaPorDni (lista, dni);

    if (pos != -1) {

       printf ("\nLa persona que estas buscando se encontro en tu lista y esta en la pos %d. Datos:\n", pos);

       PersonaP aux = *((PersonaP *)getElemento(lista, pos));

       mostrarPersona (aux);

    } else {

      printf ("\nLa persona buscada no se pudo encontrar en tu lista :(\n");
   }
}
///-----------------------------------------------------------------------------------------

///6- Getters
///-----------------------------------------------------------------------------------------
char * getNombrePersonaLista (ListaP lista, int pos) {

    PersonaP persona = *((PersonaP *) getElemento (lista, pos));

    return persona->nombre;
}
char * getApellidoPersonaLista (ListaP lista, int pos) {

     PersonaP persona = *((PersonaP *) getElemento (lista, pos));

    return persona->apellido;
}
char * getDniPersonaLista (ListaP lista, int pos) {

    PersonaP persona = *((PersonaP *) getElemento (lista, pos));

    return persona->dni;
}

PersonaP getPersonaInicioLista (ListaP lista) {

    PersonaP persona = *((PersonaP *) getElementoInicio(lista));

    return persona;
}

PersonaP getPersonaLista (ListaP lista, int pos) {

    PersonaP persona = *((PersonaP *) getElemento(lista, pos));

    return persona;
}

PersonaP getPersonaFinalLista (ListaP lista) {

    PersonaP persona = *((PersonaP *) getElementoFinal(lista));

    return persona;
}
///-----------------------------------------------------------------------------------------

///7- Setters
///-----------------------------------------------------------------------------------------
void setNombrePersona (PersonaP persona, char nombreNuevo [20]) {

    strcpy (persona->nombre, nombreNuevo);
}

void setApellidoPersona (PersonaP persona, char apellidoNuevo [20]) {

    strcpy (persona->apellido, apellidoNuevo);
}

void setDniPersona (PersonaP persona, char dniNuevo [10]) {

    strcpy (persona->dni, dniNuevo);
}
///-----------------------------------------------------------------------------------------
