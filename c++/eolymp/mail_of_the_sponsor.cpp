#include <iostream>
#include <vector>
using namespace std;

vector<int> g;
int find(int v){
    if(g[v] != v){
        g[v] = find(g[v]);
    }
    return g[v];
}

void gabung(int a, int b){
    int p_a = find(a);
    int p_b = find(b);
    if(p_a != p_b){
        g[p_a] = p_b;
    }
}

int main(){
    int t=0, n, s, k, a, b;
    cin >> n >> s >> k;

    g.resize(n+1);
    for(int i = 0; i < n; i++){
        g[i] = i;
    }

    for(int i=0; i<k; i++){
        cin >> a >> b;
        gabung(a, b);
    }

    vector<bool> visited(n+1, false);
    for(int i=1; i<=n; i++){
        int root = find(i);
        if(!visited[root]){
            t++;
            visited[root] = true;
        }
    }

    cout << t-1 << endl;
}
