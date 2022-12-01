# Pensamiento Computacional Orientado a Objetos - Proyecto 
Este proyecto está hecho para mostrar los conocimientos adqueridos en la clase de Pensamiento Orientado a Objetos. 

## Contexto

Una cafeteria necesita realizar diferentes operaciones además de cocinar la comida. Tiene que llevar control de inventario y empleados, gestionar los gastos, cobrar servicios, entre otras. 

## Funcionalidad
El programa permite llevar control de las cuentas de las mesas, editar costos de productos, mantener un conteo del inventario, añadir nuevos productos y cuentas, desplegar el menú, inventario, y la cuenta total de la mesa. 
  
  
Cuenta con un menu que muestra las opciones iniciales.

## Correciones

Para este programa se relizaron las siguientes correcciones:

1.- Se implemento el diseño clases sencillas completas (con todos los atributos y métodos requeridos).

    Se puden observar tanto en el archivo de "Cuenta.h" (lineas 8 a 59) como en el archivo de "Alimento.h" (lineas 211 a 270) 
    la creación de clases sencillas completas.


2.- Se implementaron las clases en c++ siguiendo el diseño del diagrama de clases en UMl.

    Se puede observar la implentación de clases siguiendo el diseño del diagrama de clases en UML en los archivos de
    "Alimento.h" (líneas 17-29, 81-90, 151-162 y 213-223), "Cuenta.h" (líneas 8-20) e "Inventario.h (líneas 13-49).
    Además se corrigio el UML incluyendo los getters y setters en los metodos (imagen png)


3.- Se codificaron métodos y atributos de clase correctamente. (constructores, getters, setters).

    Se implementaron los getters y setters necesarios de una forma correcta en el código. Se puede ver en los archivos
    Alimento.h(líneas 31-61 , líneas 185-206, líneas 249-270), y "Cuenta.h" (líneas 22-57)


4.- Se comprueba el acceso a los atributos y métodos de la clase (encapsulamiento correcto, mando a llamar los objetos de forma útil).
     
    Se accede a los atributos utilizados por medio de getters y setters, ademas de dividirlos entre publicos, privados o portegidos.
    Se puede ver en el archivo de "Inventario.h" en la línea (77,142,274) donde se mandan a llamar los atributos protegiendolos 
    a través de getters y setters. El encapsulamiento se puede ver en los archivos de "Alimento.h" y "Cuenta.h".


5.- Implemento herencia de manera correcta y util.
    
    Se puede observar en el archivo "Alimento.h" en las líneas 14,79,149, y 211.


6.- Implemento composición (o agregación) sieguiendo mi diagrama de clases.
    
    Se puede observar en el archivo "Inventario.h" donde se realiza agregación con las clases hija de Postre, Bebida, Comida y Cuenta, 
    (líneas 166 a 192) en las funciones de agregar alimentos, y 201 a 260 en las funciones de crear ejemplos.
    
    
7.- Implemento clases apegadas a requerimientos a partir de un modelo.
    
    Se observar a lo largo de la archivo ya que sigo los mismos formatos de mi UML


8.- Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc...
    
    En todo el codigo se utiliza el estilo aprendido en clase, los comentarios si son de una línea se utiliza // y si es más de una /** */.
    Se puede ver en "Main.cpp" líneas 1-20 o a lo largo de todo el código.


9.- Guardo correctamente los avances en commits durante la materia.
  
  Se fueron subiendo los archivos en git hub con el mismo nombre para mantener el progreso de las entregas.
