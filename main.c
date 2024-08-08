#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "time.h"

///INCLUIMOS NUESTROS ARCHIVO.H
#include "lista.h"
#include "persona.h"

int main()
{
    ///0- Creacion de ambas listas. Como vamos a guardar Personas, les pasamos el tamaño de la struct PersonaE.
    ///--------------------------------------------------------------
    ListaP lista1 = crearlista (sizeof(PersonaP));
    ListaP lista2 = crearlista (sizeof(PersonaP));
    ///--------------------------------------------------------------


    ///1- Insertamos Personas a la Lista1 y la mostramos.
    ///--------------------------------------------------------------
    printf ("\n1- INSERTAMOS Personas A LA LISTA1 Y LA MOSTRAMOS\n");
    printf ("--------------------------------------------------------------\n");
    PersonaP persona; //Definimos un item de tipo Persona.

    persona = crearPersona ("Juan Manuel", "Noli", "45233126");
    insertarInicio (lista1, &persona); //Lo insertamos al inicio.

    persona = crearPersona ("Agustin", "Fernandez", "44555632");
    insertar (lista1, &persona, 1); //Lo insertamos en la posicion que deseemos.

    persona = crearPersona ("Braulio", "Sanchez", "42111888");
    insertarFinal (lista1, &persona); //Lo insertamos al final.

    persona = crearPersona ("Viviana", "Garcia", "40222888");
    insertarFinal (lista1, &persona); //Lo insertamos al final.

    persona = crearPersona ("Agustina", "Calderon", "35874632");
    insertarFinal (lista1, &persona); //Lo insertamos al final.

    imprimirListaPersonas (lista1); //Mostramos la lista.

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    ///2- Ordenamos la Lista1 y la mostramos.
    ///--------------------------------------------------------------
    printf ("\n2- ORDENAMOS LA LISTA1 POR NOMBRE Y LA MOSTRAMOS\n");
    printf ("--------------------------------------------------------------\n");
    ordenarListaPersonasPorNombre (lista1); //Ordenamos.

    imprimirListaPersonas (lista1); //Mostramos.

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    ///3- DUPLICAMOS LA LISTA1 EN LA LISTA2 Y LA MOSTRAMOS
    ///--------------------------------------------------------------
    printf ("\n3- DUPLICAMOS LA LISTA1 EN LA LISTA 2 Y LA MOSTRAMOS\n");
    printf ("--------------------------------------------------------------\n");

    duplicarLista (lista1, lista2); //Duplicamos la lista.

    printf ("\n---LISTA DUPLICADA---\n");

    imprimirListaPersonas (lista2); //Mostramos la lista duplicada

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    ///4- BUSCAMOS UN ELEMENTO DETERMINADO EN LA LISTA
    ///--------------------------------------------------------------
    printf ("\n4- BUSCAMOS UNA PERSONA EN LA LISTA POR DNI\n");
    printf ("--------------------------------------------------------------\n");

    chequearBusquedaPersonaPorDni (lista1, "45233126"); //Lo buscamos

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    ///5- OBTENEMOS ELEMENTOS DE LA LISTA
    ///--------------------------------------------------------------
    printf ("\n5- OBTENEMOS ELEMENTOS DE LA LISTA\n");
    printf ("--------------------------------------------------------------\n");

    imprimirListaPersonas(lista1);

    printf ("\n- PRIMER ELEMENTO DE LA LISTA:\n");

    mostrarPersona(getPersonaInicioLista(lista1));

    printf ("\n- TERCER ELEMENTO DE LA LISTA:\n");

    mostrarPersona(getPersonaLista(lista1, 2));

    printf ("\n- ULTIMO ELEMENTO DE LA LISTA:\n");

    mostrarPersona (getPersonaFinalLista(lista1));

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    ///6- ELIMINACION DE ITEMS DE LA LISTA
    ///--------------------------------------------------------------
    printf ("\n6- ELIMINAMOS ITEMS DE LA LISTA\n");
    printf ("--------------------------------------------------------------\n");

    PersonaP personaEliminada; //Definimos un item donde vamos a guardar los items que vamos eliminando.

    removerInicio (lista1, &personaEliminada);

    printf ("\n\n---ELIMINACION DE ITEM DEL INICIO---\n");

    mostrarPersona(personaEliminada);

    imprimirListaPersonas (lista1);

    printf ("\n\n---ELIMINACION DE ITEM EN LA POS ELEGIDA---\n");

    remover (lista1, &personaEliminada, 2);

    mostrarPersona(personaEliminada);

    imprimirListaPersonas (lista1);

    printf ("\n\n---ELIMINACION DE ITEM DEL FINAL---\n");

    removerFinal (lista1, &personaEliminada);

    mostrarPersona(personaEliminada);

    imprimirListaPersonas (lista1);

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    printf ("\n\n");

    ///7- UNA VEZ FINALIZADO EL TRABAJO, LIBERAMOS LA MEMORIA DE AMBAS LISTAS!!!
    ///--------------------------------------------------------------
    printf ("\n7- LIBERAMOS LA MEMORIA DE AMBAS LISTAS!\n");
    printf ("--------------------------------------------------------------\n");

    liberarLista (lista1);

    liberarLista (lista2);

    printf ("\n--------------------------------------------------------------\n");
    ///--------------------------------------------------------------

    return 0;
}
