#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

///INCLUIMOS EL .H DE LISTA
///---------------------------------------------------------------------------------------
#include "lista.h"
///---------------------------------------------------------------------------------------

///CREAMOS LA ESTRUCTURA DE LA PERSONA Y SU TIPO DE DATO
///---------------------------------------------------------------------------------------
struct PersonaE;

typedef struct PersonaE * PersonaP;
///---------------------------------------------------------------------------------------

///FUNCIONES (PRIMITIVAS)
///---------------------------------------------------------------------------------------
///1- Creacion de la Persona
PersonaP crearPersona (char nombre [20], char apellido [20], char dni [10]);

///2- Mostrar Persona
void mostrarPersona (PersonaP persona);

///3- Imprimir lista de Personas
void imprimirListaPersonas (ListaP lista);

///4- Ordenar lista de Personas por nombre
void ordenarListaPersonasPorNombre (ListaP lista);

///5- Busqueda de Persona en la lista por Dni
int busquedaPersonaPorDni (ListaP lista, char dni [10]);
void chequearBusquedaPersonaPorDni (ListaP lista, char dni [10]);

///6- Getters
char * getNombrePersonaLista (ListaP lista, int pos);
char * getApellidoPersonaLista (ListaP lista, int pos);
char * getDniPersonaLista (ListaP lista, int pos);
PersonaP getPersonaInicioLista (ListaP lista);
PersonaP getPersonaLista (ListaP lista, int pos);
PersonaP getPersonaFinalLista (ListaP lista);

///7- Setters
void setNombrePersona (PersonaP persona, char nombreNuevo [20]);
void setApellidoPersona (PersonaP persona, char apellidoNuevo [20]);
void setDniPersona (PersonaP persona, char dniNuevo [10]);
///---------------------------------------------------------------------------------------


#endif // PERSONA_H_INCLUDED
