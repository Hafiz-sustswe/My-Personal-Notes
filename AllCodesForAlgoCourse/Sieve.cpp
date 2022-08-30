/*
Program short detail :
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define sc second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define mii map<int, int>

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fo(i, n) for (i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define clr(x) memset(x, 0, sizeof(x))


#define N 150
bool isComposite[N];


vi prime ;

void sieve(int n)
{
    memset(isComposite, false, sizeof(isComposite));
    for(int i = 2 ; i < n ; i++)
    {
        if(!isComposite[i])
           {
            prime.push_back(i);
           } 
        
        for(int j = i * i  ; j  <= n ; j += i )
        {
            isComposite[j] = true;
        }


    }
    for(auto u : prime )
        cout << u << " ";    
}

void solve()
{
    int m, n, s = 0, ck = 0, sum1 = 0, sum2 = 0;
    // long long  a[N] ;
    // string  s1, s2;

    // cin >> m >> n;
    cin >> n;
    // cin >> s1;
    sieve(n);

    
}
void OJ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    // OJ();
   
    int T = 1;
    //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
// 4
// 3
// 10 20 10
// 6
// 2 1 4 2 4 1
// 5
// 1 2 4 8 16
