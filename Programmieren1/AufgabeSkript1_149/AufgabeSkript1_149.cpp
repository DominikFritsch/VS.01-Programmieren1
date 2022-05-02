/* Projekt: AufgabeSkript1_149 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches einen vector-Container DYNAMISCH definiert, diesen mit Werten
    f�llt und anschlie�end mithilfe des eingebauten Sortieralgorithmus sortiert ausgibt.

*/

#pragma region HEADER
#include <iostream>
#include <vector>
#include <cstddef>
#include <algorithm>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::size_t i,n;

    std::cout << "Feldgr\x94\xE1 \be: ";
    std::cin >> n;

    std::vector<float> w(n);

    std::cout << n << " float-Gr\x94\xE1 \ben eingeben:\n";

    for (i = 0; i < n; i++)
        std::cin >> w[i];

    std::sort(w.begin(), w.end());

    std::cout << std::endl;
    std::cout << "---------------Sortierte Ausgabe---------------";
    std::cout << std::endl;

    for (i = 0; i < n; i++)
        std::cout << w[i] << " " << std::endl;

    std::cout << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion