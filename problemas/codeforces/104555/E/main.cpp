#include <bits/stdc++.h>

using namespace std;

int sum_digitos(int num)
{
  int sum = 0;
  while (num % 10 != 0)
  {
    sum += num % 10;
    num = num / 10;
  }
  return sum;
}

int main(int argc, char const *argv[])
{
  int N, K;
  cin >> N >> K;
  vector<int> P(N);

  for (size_t i = 0; i < N; i++)
  {
    cin >> P[i];
  }
  priority_queue<int> flores(P.begin(), P.end());

  for (size_t t = 0; t < K; t++)
  {
    {

      int polen = flores.top();
      int suma_digitos = sum_digitos(polen);
      flores.pop();
      flores.push(polen - suma_digitos);
      if (t == K - 1)
      {
        cout << suma_digitos << "\n";
      }
    }

    return 0;
  }
}
