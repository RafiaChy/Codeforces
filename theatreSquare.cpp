#include<bits/stdc++.h>

using namespace std;

int main()
{


    double n, m, a;
    long long sum;
    cin >> n >> m >> a;
    sum= (long long) ceil(n/a)* (long long) ceil(m/a);
    cout << sum << endl;
    return 0;
}
