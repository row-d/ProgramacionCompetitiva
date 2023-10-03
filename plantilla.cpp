#include <bits/stdc++.h>

#define FOR(nombre, inicio, fin) for (int nombre = inicio; nombre < fin; nombre++)
#define leer_variable(tipo, nombre) \
  tipo nombre;                      \
  std::cin >> nombre
#define leer_arreglo(tipo, nombre, n) \
  tipo nombre[n];                     \
  FOR(i, 0, n)                        \
  std::cin >> nombre[i]
#define por_cada_caso \
  int t;              \
  std::cin >> t;      \
  while (t--)
#define leer_variables_hasta_eof(patron, ...) while (scanf(patron, ##__VA_ARGS__) != EOF)

// EOF = End Of File
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // tu codigo
  return 0;
}
