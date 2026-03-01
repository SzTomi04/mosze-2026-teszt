#include <iostream>

constexpr int N_ELEMENTS = 100; // N_ELEMENTS rossz néven van meghívva

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa' 	// több karakter használata a '' aposztróffal és hiányzik a pontosvessző
    for (int i = 0;) 				// hiányzik a ciklus feltétel és inkrementálás
    {
        b[i] = i * 2; 				// végtelen ciklus
    }
    for (int i = 0; i; i++) 			// ciklusfeltétel hibás
    {
        std::cout << "Ertek:" 			// nem ír ki értéket és hiányzik a pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;					// változó nincs inicializálva
    for (int i = 0; i < N_ELEMENTS, i++)	// vessző van pontosvessző helyett a feltételben
    {
        atlag += b[i]				// hiányzik a pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}