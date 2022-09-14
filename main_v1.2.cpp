#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hianyzik az alahuzas "_"
    std::cout << '1-100 ertekek duplazasa' //' helyett idezojel " es <<std::endl;
    for (int i = 0;) //i=1, nincs megadva a lepeskoz es i<=N_ELEMENTS
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //i=1, i helyett i<=N_ELEMENTS-ig
    {
        std::cout << "Ertek:" // << stdl::endl; es az ertekkiiras hianyzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //i=1, i<=N_ELEMENTS
    {
        atlag += b[i] //hianyzik a vesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
