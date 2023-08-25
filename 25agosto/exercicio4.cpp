#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome1 = "Pedro";
    string nome2 = "Bianca";
    // string nome2 = "Paula";

    if (nome1 < nome2) {
        cout << "Nomes em ordem alfabética: " << nome1 << ", " << nome2 << endl;
    } else {
        cout << "Nomes em ordem alfabética: " << nome2 << ", " << nome1 << endl;
    }

    return 0;
}

