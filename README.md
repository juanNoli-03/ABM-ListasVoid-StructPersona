<div id="user-content-toc">
  <ul align="center">
    <summary><h1 style="display: inline-block">ABM con Listas Void en C - Struct Persona</h1>
    </summary>
  </ul>
</div>

---

**Este programa consiste en un ABM clasico trabajando con listas de tipo Void (genericas) en el lenguaje de programación C. Mediante este programa usted podrá:**

**1. Insertar Personas al inicio de la lista, en la posición que desee o en el final de la misma** 

- ***int insertarInicio (ListaP lista, void * item);***

- ***int insertar (ListaP lista, void * item, int pos);***

- ***int insertarFinal (ListaP lista, void * item);***

**2. Remover Personas de la lista. Remover la del inicio, la de la posición que desee o la del final.***

- ***int removerInicio (ListaP lista, void * itemEliminado);***

- ***int remover (ListaP lista, void * itemEliminado, int pos);***

- ***int removerFinal (ListaP lista, void * itemEliminado);***

**3. Obtener un Persona de la lista. La del inicio, la de la posición que desee o la del final.***

- ***void * getElementoInicio (ListaP lista);***

- ***void * getElementoFinal (ListaP lista);***

- ***void * getElemento (ListaP lista, int pos);***

**4. Setear un elemento de la lista. El de la posición que desee.**

- ***void setElemento (ListaP lista, void * item, int pos);***

**5. Duplicar la lista creada. A partir de la lista creada, se puede generar una segunda lista con los mismos elementos de la primera lista.***

- ***void duplicarLista (ListaP lista1, ListaP lista2);***

**6. Imprimir la lista creada.**

- ***void imprimirListaPersonas (ListaP lista);***

**7. Ordenar la lista creada por nombre mediante el algoritmo de burbuja.**

- ***void ordenarListaPersonasPorNombre (ListaP lista);***

**8. Buscar una determinada Persona de la lista por dni.**

- ***int busquedaPersonaPorDni (ListaP lista, char dni [10]);***
