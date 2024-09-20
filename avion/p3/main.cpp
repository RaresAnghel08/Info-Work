#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream fin("prosir.in");
    ofstream fout("prosir.out");

    if (!fin.is_open()) {
        cerr << "Eroare la deschiderea fișierului de intrare!" << endl;
        return 1;
    }

    char text[201];
    fin.getline(text, 201);
    
    int n = strlen(text);
    text[n-1]='\0';
    n--;
    for (int i = 0; i < n; i++) {
        // Sărim peste spații multiple
        while (i < n && text[i] == ' ') {
            i++;
        }
        
        // Detectăm începutul unui cuvânt
        int start = i;
        
        // Parcurgem cuvântul până la sfârșit sau până întâlnim un spațiu
        while (i < n && text[i] != ' ') {
            i++;
        }
        
        // Înlocuim ultima literă a cuvântului cu cifra 5
        if (start < i) {
            text[i - 1] = '5';
        }
    }
    text[n]='.';
    text[n+1]='\0';
    fout << text;

    fin.close();
    fout.close();
    
    return 0;
}
