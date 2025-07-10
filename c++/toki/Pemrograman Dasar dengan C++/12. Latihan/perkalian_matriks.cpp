#include <iostream>
using namespace std;

int main(){
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], r[n][p];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            cin >> b[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j=0; j<p; j++){
            r[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<m; k++){
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
}
