#include <iostream>
#include <vector>
using namespace std;

void transform(vector<vector<int>>& a, string s){
    int n = a.size(), m = a[0].size();
    vector<vector<int>> r;
    if(s == "_"){
        r = a;
        for(int i=0; i<n; i++){
            r[i] = a[n-1-i];
        }
        a = r;
    }else if(s == "|"){
        r = a;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                r[i][j] = a[i][m-1-j];
            }
        }
        a = r;
    }else if(s == "90"){
        r = vector<vector<int>>(m, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                r[j][n - 1 - i] = a[i][j];
            }
        }
        a = r;
    }else if(s == "180"){
        r = a;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                r[i][j] = a[n-1-i][m-1-j];
            }
        }
        a = r;
    }else if(s == "270"){
        r = vector<vector<int>>(m, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                r[m-1-j][i] = a[i][j];
            }
        }
        a = r;
    }
}

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> a(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    string s;
    while(x--){
        cin >> s;
        transform(a, s);
    }

    for(auto& r : a){
        for(int i : r){
            cout << i << " ";
        }
        cout << endl;
    }
}
