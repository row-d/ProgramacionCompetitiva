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

vector<bool> criba(size_t limit)
{
  vector<bool> _criba(limit + 1);
  _criba[0] = _criba[1] = false;
  size_t max = sqrt(limit);
  for (size_t i = 2; i <= max; i++)
  {
    if (_criba[i])
    {
      for (size_t j = i * i; j <= limit; j += i)
        _criba[j] = false;
    }
  }
  return _criba;
}

size_t divisores(size_t n, vector<bool> &es_primo)
{
  if (es_primo[n])
  {
    return 2;
  }
  else
  {
    size_t sqrt_n = sqrt(n);
    size_t count = 0;
    for (size_t i = 1; i <= sqrt_n; i++)
    {
      if (n % i == 0)
      {
        if (n / i == i)
        {
          count++;
        }
        else
        {
          count += 2;
        }
      }
    }
    return count;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  size_t x;
  cin >> x;
  size_t max = potencia(10, 5);
  vector<bool> es_primo = criba(max);

  for (size_t n = 1; n < max; n++)
  {
    size_t fn = divisores(n, es_primo);
    size_t n_fn = potencia(n, fn);
    if (n_fn == x)
    {
      cout << n << '\n';
      return 0;
    }
  }
  cout << -1 << '\n';

  return 0;
}
