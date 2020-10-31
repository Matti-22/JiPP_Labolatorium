#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    double masa, wzrost, bmi;
    cout << "Podaj mase ciala w kilogramach" << endl;
    cin >> masa;
    cout << "Podaj wzrost w metrach" << endl;
    cin >> wzrost;
    //Obliczanie wartości BMI
    bmi = masa / (wzrost * wzrost);
    //Wypisanie wartości
    cout << "Twoje BMI wynosi: " << bmi << " - ";
    if (bmi < 16)
    {
        cout << "wyglodzenie" << endl;
    }
    else if (bmi < 17)
    {
        cout << "wychudzenie" << endl;
    }
    else if (bmi < 18.5)
    {
        cout << "niedowaga" << endl;
    }
    else if (bmi < 25)
    {
        cout << "wartosc poprawna" << endl;
    }
    else if (bmi < 35)
    {
        cout << "I stopien otylosci" << endl;
    }
    else if (bmi < 40)
    {
        cout << "II stopien otylosci" << endl;
    }
    else if (bmi >= 40)
    {
        cout << "otylosc skrajna" << endl;
    }

    return 0;
}
