#include <bits/stdc++.h>
using namespace std;

int main(){
    int nValores;
    double maior, menor; // variaveis 'amplitude'
    double somaDesvios=0, mediaDesvios=0, temp=0; // variaveis 'desvios'
    cout << "Insira a quantidade de valores: ";
    cin >> nValores;

    // MEDIA
    double valores[nValores], soma=0, media; // variaveis 'media'
    cout << "Insira cada valor, separado por espaco: ";
    for (int i=0; i<nValores; i++){
        cin >> valores[i];
        soma = soma+valores[i];
    }
    media = soma/nValores;
    cout << "A media desse valores eh: " << fixed << setprecision(3) << media << endl;

    // AMPLITUDE
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
    cout << "/ VALUE / DIFERENCAS;DESVIOS /" << endl;
    for (int i=0; i<nValores; i++){
        cout << "/ " << fixed << setprecision(2) << valores[i] << " / " << fixed << setprecision(2) << valores[i] << " - " << fixed << setprecision(2) << media << " = " << fixed << setprecision(2) << valores[i] - media << " / " << endl;

    // DESVIO MÉDIO
        temp = (valores[i] - media);
        if (temp < 0){
            somaDesvios += (temp*-1);
        }else{
            somaDesvios += temp;
        }
    }
    mediaDesvios = (somaDesvios/nValores);
    cout << "Desvio Medio (DM) = " << fixed << setprecision(3) << mediaDesvios << endl;

    // VARIÂNCIA

    // DESVIO PADRÃO

}