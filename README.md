# Programacion-paralela

## Ejercicio 1: Multiplicación de matrices en C
### Marco teórico
- **Tema**: Multiplicación de matrices
- **Antecedentes**: *Un arreglo (matriz) es una colección ordenada de datos (tanto primitivos u objetos dependiendo del lenguaje). Los arreglos (matrices) se emplean para almacenar multiples valores en una sola variable, frente a las variables que sólo pueden almacenar un valor (por cada variable)* (Mozilla, 2023).
- **Bases teóricas**:
- ¿Cómo se escribe una mátriz?
- ¿Cómo se multiplica una mátriz?
- **Conceptos clave**: matriz, multiplicación
### ¿Cómo funciona?
- Primero agregamos las librerías <stdio.h> y <stdlib.h>, la primera para manejar entradas y salidas de datos y la segunda para poder utilizar la función **rand()** para generar números aleatorios.
 
- Declaramos 3 variables de tipo *int* con arreglos bidimensionales para guardar los datos de las matrices. Las primeras 2 para generar las matrices iniciales y la tercera para guardar el resultado final.

- La función **definirMat()** de tipo *void* agrega valores a los primeros 2 arreglos anteriormente mencionados de manera aleatoria.

- La función **multMat()** de tipo *void* multiplica ambas matrices para después almacenar el resultado en la matriz final

- Por útlimo, en **main()** se llaman las primeras 2 funciones y se imprime el resultado de la matriz final con una función **for()**

![](https://media.tenor.com/Uh4Mcry2P8EAAAAC/pato-bailar.gif)
