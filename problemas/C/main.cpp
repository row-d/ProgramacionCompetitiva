#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> vertice;
typedef pair<int, vertice> pq_el;

vector<vertice> vecinos_grid(
    vertice inicio,
    int filas,
    int columnas,
    bool diagonal = false)
{

  auto [y, x] = inicio;
  vector<vertice> vecinos = {
      {y - 1, x},
      {y + 1, x},
      {y, x - 1},
      {y, x + 1},
  };

  if (diagonal)
  {
    vecinos.insert(vecinos.end(), {{y - 1, x - 1},
                                   {y + 1, x + 1},
                                   {y - 1, x + 1},
                                   {y + 1, x - 1}});
  }
  // remove_if(
  //     vecinos.begin(), vecinos.end(),
  //     [&](vertice a)
  //     { return !(a.first >= 0 && a.first < filas && a.second >= 0 && a.second < columnas); });

  vector<vertice> filtrados;
  copy_if(vecinos.begin(), vecinos.end(), filtrados.begin(),
          [&](vertice a)
          { return a.first >= 0 && a.first < filas && a.second >= 0 && a.second < columnas; });

  return filtrados;
}

int bfs_grid_italian(vertice inicio,
                     vector<vector<int>> grid,
                     int filas,
                     int columnas,
                     vector<bool> &visitados)
{
  priority_queue<pq_el, vector<pq_el>, greater<pq_el>> cola;

  auto [y0, x0] = inicio;
  int valor_0 = grid[y0][x0];
  visitados[valor_0] = true;
  cola.push({grid[y0][x0], inicio});
  int count = 0;

  while (!cola.empty())
  {
    auto u = cola.top();
    int valor_u = u.first;
    auto [uy, ux] = u.second;
    cola.pop();
    count++;
    for (vertice v : vecinos_grid(u.second, filas, columnas))
    {
      auto [vy, vx] = v;
      int valor_v = grid[vy][vx];
      if (valor_v < valor_u)
      {
        visitados[valor_v] = true;
        cola.push({valor_v, v});
      }
    }
  }
  return count;
}

int main(int argc, char const *argv[])
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int R, C;
  int total = 0;
  vector<vector<int>> grilla(R, vector<int>(C));
  vector<bool> visitados(R * C, false);

  for (size_t i = 0; i < R; i++)
  {
    for (size_t j = 0; j < C; j++)
    {
      cin >> grilla[i][j];
    }
  }

  for (size_t i = 0; i < R * C; i++)
  {
    
  }


  cout << total << "\n";

  return 0;
}
