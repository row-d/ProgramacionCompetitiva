#include <bits/stdc++.h>

using namespace std;

typedef int nodo;
typedef vector<vector<nodo>> adj_list;

vector<nodo> dfs(nodo inicio, adj_list grafo, size_t N)
{
  stack<nodo> pila;
  vector<bool> visitado(N, false);
  vector<nodo> predecesor(N, -1);

  visitado[inicio] = true;
  pila.push(inicio);

  while (!pila.empty())
  {
    nodo u = pila.top();
    pila.pop();

    for (nodo v : grafo[u])
    {
      if (!visitado[v])
      {
        visitado[v] = true;
        pila.push(v);
        predecesor[v] = u;
      }
    }
  }
  return predecesor;
}

vector<nodo> dfs_recursive(nodo inicio, adj_list grafo, size_t N)
{

  vector<bool> visitado(N, false);
  vector<nodo> predecesor(N, -1);

  function<void(nodo)> iterar_nodo = [&](nodo u)
  {
    visitado[u] = true;
    for (nodo v : grafo[u])
    {
      if (!visitado[v])
      {
        predecesor[v] = u;
        iterar_nodo(v);
      }
    }
  };

  iterar_nodo(inicio);
  return predecesor;
}