#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s;
  size_t k;
  getline(cin, s);
  cin >> k;

  vector<priority_queue<char, vector<char>, greater<char>>> A(k);
  for (size_t i = 0; i < k; i++)
  {
    for (size_t j = i; j < s.size(); j = j + k)
    {
      A[i].push(s[j]);
    }
  }

  while (!A.empty())
  {
    auto a = A.begin();
    while (a != A.end())
    {
      if (!a->empty())
      {
        cout << a->top();
        a->pop();
        a++;
      }
      else
      {
        a = A.erase(a);
      }
    }
  }
  cout << "\n";

  return 0;
}
