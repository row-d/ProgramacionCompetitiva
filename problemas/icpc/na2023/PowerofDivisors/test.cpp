#include <bits/stdc++.h>

using namespace std;

size_t potencia(size_t x, size_t n)
{
  size_t total = x;

  for (size_t i = 1; i < n; i++)
  {
    total *= x;
  }
  return total;
}
int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(false);
  size_t x, n;
  cin >> x >> n;
  cout << potencia(x, n);
  return 0;
}
