#include <iostream>
using namespace std;

int main(){
    int x, z=0;
    cout << "Inputkan Nilai X : ";
    cin >> x;getchar();
    for(int i = 1; i <= x; i++){
        cout << z << endl;
        z = z + 5;
    }
    return 0;
}
