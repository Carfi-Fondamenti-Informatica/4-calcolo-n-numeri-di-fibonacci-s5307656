#include <iostream>
using namespace std;

int main() {
   int n=0, primo=0, secondo= 1, i=0, terzo=0;
    cin >> n;

    if(n>=2){
        for (i=1; i<=n; i++) {
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;

        cout << terzo << endl;
        }
    } else {
        cout << "errore" << endl;
    }
   return 0;
}
