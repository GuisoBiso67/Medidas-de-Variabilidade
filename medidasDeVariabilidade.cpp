#include <bits/stdc++.h>
using namespace std;

int main(){
    int nValores;
    cout << "Insira a quantidade de valores: ";
    cin >> nValores;

    // MEDIA
    double valores[nValores], soma=0, media;
    cout << "Insira cada valor, separado por espaco: ";
    for (int i=0; i<nValores; i++){
        cin >> valores[i];
        soma = soma+valores[i];
    }
    media = soma/nValores;
    cout << "A media desse valores eh: " << fixed << setprecision(3) << media << endl;

    // AMPLITUDE
    double maior, menor;
    maior = valores[0];
    menor = valores[0];
    for (int i=0; i<nValores; i++){
        if (valores[i] > maior){
            maior = valores[i];
        }
        if (valores[i] < menor){
            menor = valores[i];
        }
    }
    cout << "Maior valor = " << fixed << setprecision(3) << maior << endl;
    cout << "Menor valor = " << fixed << setprecision(3) << menor << endl;
    cout << "Amplitude = " << fixed << setprecision(3) << maior-menor << endl;

    // DESVIOS
    cout << "/ VALUE / -DIFERENCAS/DESVIOS- /" << endl;
    for (int i=0; i<nValores; i++){
        cout << "/ " << fixed << setprecision(3) << valores[i] << " / " << fixed << setprecision(3) << valores[i] << " - " << fixed << setprecision(3) << media << " = " << fixed << setprecision(3) << valores[i] - media << " / " << endl;
    }
}