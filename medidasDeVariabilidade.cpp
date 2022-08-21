#include <bits/stdc++.h>
using namespace std;

int main(){


    // MEDIA
    int nValores;
    cout << "Insira a quantidade de valores que vc quer fazer a media: ";
    cin >> nValores;

    double valores[nValores], soma=0, media;
    cout << "Insira cada valor, separado por espaco: ";
    for (int i=0; i<nValores; i++){
        cin >> valores[i];
        soma = soma+valores[i];
    }
    media = soma/nValores;
    cout << "A media eh: " << fixed << setprecision(3) << media << endl;
}