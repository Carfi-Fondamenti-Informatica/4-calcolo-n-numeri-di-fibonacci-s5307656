#include <iostream>
using namespace std;

int main() {
   int n=0, primo=0, secondo= 1, terzo=0;
    cin >> n;
    if(n>=2){
        for (int i=1; i<=n; i++) {
        terzo=primo+secondo;
        secondo=primo;
        primo=terzo;

        cout << terzo << endl;
        }
    } else {
        cout << "errore" << endl;
    }
   return 0;
}
