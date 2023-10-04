#include <vector>
#include <queue>
#include <utility>

#include <limits>
// #include <climits>
// #define INF INT_MAX

using std::greater;
using std::pair;
using std::priority_queue;
using std::vector;

// no incluir lo de arriba si se está usando "<bits/stdc++.h>" y "using namespace std;"

typedef int nodo;
typedef unsigned int peso;
typedef vector<peso> distancias;
typedef pair<peso, nodo> adj_el;
typedef vector<vector<adj_el>> adj_list;
typedef priority_queue<adj_el, vector<adj_el>, greater<adj_el>> pq;

const peso INF = std::numeric_limits<peso>::max();

pair<distancias, vector<nodo>> dijkstra(nodo inicio, adj_list grafo, size_t N)
{
  pq cola;
  vector<bool> visitado(N, false);
  distancias dist(N, INF);
  vector<nodo> predecesor(N, -1);

  visitado[inicio] = true;
  dist[inicio] = 0;
  cola.push(adj_el(0, inicio));

  while (!cola.empty())
  {
    adj_el el = cola.top();
    nodo u = el.second;
    peso uw = el.first;
    cola.pop();

    if (uw != dist[u])
      continue;

    for (adj_el vecino : grafo[u])
    {
      nodo v = vecino.second;
      peso vw = vecino.first;
      if (dist[u] + vw < dist[v])
      {
        dist[v] = dist[u] + vw;
        cola.push(adj_el(dist[v], v));
        predecesor[v] = u;
      }
    }
  }
  return make_pair(dist, predecesor);
}