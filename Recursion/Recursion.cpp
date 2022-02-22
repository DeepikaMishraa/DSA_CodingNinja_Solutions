#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for (long long int i = a; i < b; i++)
#define repe(i, a, b) for (long long int i = a; i <= b; i++)
#define MOD 1048576
#define pb(a) push_back(a)
using namespace std;
int multiplyNumbers(int m, int n)
{
    if (n == 0)
        return 0;
    int ans = m + multiplyNumbers(m, n - 1);
    return ans;
}

int main()
{

    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;

    return 0;
}