#include <iostream>

using namespace std;

int ile,n,m;
int doba=86400;
int suma_ciastek=0;
int suma_pudelek=0;

int main()
{
    cin >> ile;

    for (int i=1; i<=ile; i++)
    {
        cin >> n >> m;
        int czas[n];
        for (int i=0; i<n; i++)
        {
            cin >> czas[i];
            suma_ciastek += (doba/czas[i]);
        }
        suma_pudelek = suma_ciastek/m;
        if ((suma_ciastek % m) > 0)
        {
            suma_pudelek += 1;
            cout << suma_pudelek << endl;
        }
        else cout << suma_pudelek << endl;
        suma_ciastek = 0;
        suma_pudelek = 0;

    }
    return 0;
}
