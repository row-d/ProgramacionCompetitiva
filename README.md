# Programacion Competitiva

Este repositorio contiene algoritmos y utilidades para programación competitiva

## Indice

- [Utilidades](#utilidades)
  - [Incluir todas las bibliotecas](#incluir-todas-las-bibliotecas)
  - [Redireccionar entrada y salida a archivos](#redireccionar-entrada-y-salida-a-archivos)
  - [Leer una linea](#leer-una-linea)

- [Macros](#macros)
  - [For loop mas común](#for-loop-mas-común)
  - [Leer una variable](#leer-una-variable)
  - [Leer un arreglo](#leer-un-arreglo)
  - [Leer casos de prueba](#leer-casos-de-prueba)
  - [Leer variables hasta que termine la entrada](#leer-variables-hasta-que-termine-la-entrada)

- [Tecnicas](#tecnicas)
  - [Ordenar un vector/string en orden ascendente/lexicografico](#ordenar-un-vectorstring-en-orden-ascendentelexicografico)
  - [Ordenar un vector en orden descendente](#ordenar-un-vector-en-orden-descendente)
  - [Ordenar un vector/string de forma personalizada](#ordenar-un-vectorstring-de-forma-personalizada)
  - [Permutar un vector/string](#permutar-un-vectorstring)

- [Algoritmos](#algoritmos)
  - [Grafos](#grafos)
    - [Busqueda en Amplitud (BFS)](#busqueda-en-amplitud-bfs)
    - [Busqueda en Profundidad (DFS)](#busqueda-en-profundidad-dfs)
    - [Dijkstra](#dijkstra)
    - [Prim](#prim)

## Utilidades

### Incluir todas las bibliotecas

```cpp
#include <bits/stdc++.h>
```

### Redireccionar entrada y salida a archivos
Si la variable `ONLINE_JUDGE` no está definida, redirecciona la entrada y salida estandar a los archivos `input.txt` y `output.txt` respectivamente. Esto nos permite probar nuestro codigo con casos de prueba personalizados y ahorrarnos el tiempo de escribirlos en la entrada estandar cada vez que queramos probar nuestro codigo.

```cpp
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
```

### Leer una linea

```cpp
std::string line;
std::getline(std::cin, line);
```

## Macros
Las macros son fragmentos de codigo que se reemplazan en tiempo de precompilacion.

Nos sirve para automatizar tareas repetitivas, permitiendo asi el enfoque a la solucion del problema.

### For loop mas común

```cpp
#define FOR(nombre, inicio, fin) for (unsigned int nombre = inicio; nombre < fin; nombre++)
```

> [!NOTE]
> el valor de inicio debe ser menor que el valor de fin

Ejemplo:

```cpp
FOR(i, 0, 10) {
  std::cout << i << std::endl;
}
```

### Leer una variable
Define una variable y lee su valor desde la entrada estandar

```cpp
#define leer_variable(tipo, nombre) \
  tipo nombre;                      \
  std::cin >> nombre
```

Ejemplo:

```cpp
leer_variable(int, n);
std::cout << n << std::endl;
```

### Leer un arreglo
Define un arreglo de tamaño n y lee sus valores desde la entrada estandar

```cpp
#define leer_arreglo(tipo, nombre, n) \
  tipo nombre[n];                     \
  FOR(i, 0, n)                        \
  std::cin >> nombre[i]
```

Ejemplo:
  
```cpp
leer_arreglo(int, a, 5);
FOR(i, 0, 5) {
  std::cout << a[i] << std::endl;
}
```	

### Leer casos de prueba

Define una variable t y lee su valor desde la entrada estandar,luego hace un ciclo hasta que t llege a 0 (Falso)

```cpp
#define por_cada_caso \
  int t;              \
  std::cin >> t;      \
  while (t--)
```

Ejemplo:

```cpp
por_cada_caso {
  leer_variable(int, n);
  std::cout << n << std::endl;
}
```

### Leer variables hasta que termine la entrada

Recibe los mismos parametros que `scanf`, luego lee desde la entrada estandar hasta que llegue a `EOF` (End Of File)

```cpp
#define leer_variables_hasta_eof(patron, ...) while (scanf(patron,__VA_ARGS__) != EOF)
```

Ejemplo:

```cpp
int a, b;
leer_variables_hasta_eof("%d %d", &a, &b) {
  std::cout << a << " " << b << std::endl;
}
```

## Tecnicas

### Ordenar un vector/string en orden ascendente/lexicografico

```cpp
std::sort(v.begin(), v.end());
```

### Ordenar un vector en orden descendente

```cpp
std::sort(v.begin(), v.end(), std::greater<int>());
```

### Ordenar un vector/string de forma personalizada

La function `cmp` recibe dos parametros y retorna un valor booleano, si retorna `true` el primer parametro va antes que el segundo, si retorna `false` el segundo parametro va antes que el primero.

```cpp
bool cmp(int a, int b) {
  return a > b;
}

sort(v.begin(), v.end(), cmp);
```

### Permutar un vector/string
En cada iteracion del ciclo `do while` se permuta el vector/string a su siguiente permutacion, cuando ya no se puede permutar mas, `std::next_permutation` retorna `false` y el ciclo termina.

```cpp
do {
  // ...
} while (std::next_permutation(v.begin(), v.end()));
```

## Algoritmos

### Grafos

#### Busqueda en Amplitud (BFS)
⚠️ Revisar

```cpp
```

#### Busqueda en Profundidad (DFS)
⚠️ Revisar

```cpp
```

#### Dijkstra
⚠️ Revisar

```cpp
```

#### Prim
⚠️ Revisar

```cpp
```
