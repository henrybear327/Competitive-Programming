#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", n * (n - 1) / 2 + m * (m - 1) / 2);

    return 0;
}
