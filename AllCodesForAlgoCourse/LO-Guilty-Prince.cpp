/*
Program short detail : 2D Grid traversing
Written by           : Md Sadman Hafiz, SWE, SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define inf 1e18

#define mx INT_MAX
#define fi first
#define sc second
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fo(i, x, n) for (i = x; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define clr(x) memset(x, 0, sizeof(x))

int dx []= {+1, -1 , +0 , -0};
int dy []= {+0 , -0 , +1 , -1};

int m, n;
#define sz 20
char adj[sz][sz];
bool vis[sz][sz];
int cnt ;
bool valid(int x , int y)
{
    if( x >= 0 && x < n  &&  y >= 0 && y < m  && adj[x][y] != '#'  && !vis[x][y])
        return true;
    else
        return false;
}
void DFS(int i , int j)
{
   cnt++;
   vis[i][j] = true;;
   for(int k = 0; k < 4 ; k++)
   {
        int x = i + dx[k];
        int y = j + dy[k];

        if(valid(x,y))
        {
            DFS(x,y);
        }
   }


}
int tc = 1;
void solve()
{
    //int i = 0, j = 0, sm = 0, ck = 0, sum = 0, sum1 = 0;

    // string  s, s1;
    // cin >> s;
   

    cin >> m >> n;

    //cin >> n;
    // vi  v(n) ;
    // for(int i = 0 ; i < n ; i++)
    //{
    //	cin >> v[i];
    // }
    for(int i = 0 ; i < n ;i++ )
    {
        for(int j = 0 ; j < m ; j++)
        {

            cin >> adj[i][j];
        }
    }
    memset(vis, 0 , sizeof(vis));
    cnt = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(adj[i][j] == '@')
            {
                DFS(i,j);
                break;
            }
        }
    }


    cout << "Case "<< tc++ << ": " <<  cnt << endl;
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
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
// 1 2 4 8 16````````````
