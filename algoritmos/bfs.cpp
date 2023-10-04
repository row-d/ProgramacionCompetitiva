#include <bits/stdc++.h>

using namespace std;

typedef int nodo;
typedef vector<vector<nodo>> adj_list;

vector<nodo> bfs(nodo inicio, adj_list grafo, size_t N)
{
  queue<nodo> cola;
  vector<bool> visitado(N, false);
  vector<nodo> predecesor(N, -1);

  visitado[inicio] = true;
  cola.push(inicio);

  while (!cola.empty())
  {
    nodo actual = cola.front();
    cola.pop();

    for (auto vecino : grafo[actual])
    {
      if (!visitado[vecino])
      {
        visitado[vecino] = true;
        predecesor[vecino] = actual;
        cola.push(vecino);
      }
    }
  }

  return predecesor;
}
