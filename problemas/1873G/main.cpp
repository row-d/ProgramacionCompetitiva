#include <bits/stdc++.h>

using namespace std;
int main()
{
  ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  for (size_t _t = 0; _t < t; _t++)
  {
    string s;
    int count = 0;
    cin >> s;
    for (size_t i = 1; i < s.size(); i++)
    {
      char x = s[i - 1];
      char y = s[i];

      // cout << s << " ";
      if (x == 'A' && y == 'B')
      {
        s[i - 1] = 'B';
        s[i] = 'C';
        count++;
        i = 0;
      }
      else if (x == 'B' && y == 'A')
      {
        s[i - 1] = 'C';
        s[i] = 'B';
        count++;
        i = 0;
      }
    }
    cout << count << '\n';
  }
  return 0;
}