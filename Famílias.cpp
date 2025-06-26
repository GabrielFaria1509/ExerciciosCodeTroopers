#include <bits/stdc++.h>

#define MAXV 50005  // aumentei o tamanho para evitar erro

using namespace std;

vector <int> adj[MAXV];
bool vis[MAXV];

void dfs(int u)
{
    vis[u] = true;       //vértice de origem //começa como visitado

    for(int i = 0; i < adj[u].size(); i++)  verifica se o vértice já foi visitado
    // percorre todos os vértices adjacentes ao vértice u
    {
        int v = adj[u][i];

        if (vis[v] == false)      // se o vértice v não foi visitado
            dfs(v);             // chama a função dfs recursivamente para visitar o vértice v
    }
}

int main()
{
    int nVertices, nArestas, x, y;

    cin >> nVertices >> nArestas;

    for (int i = 0; i < nArestas; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int familias = 0;
    for (int i = 1; i <= nVertices; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            familias++;
        }
    }

    cout << familias << endl;

    return 0;
}
