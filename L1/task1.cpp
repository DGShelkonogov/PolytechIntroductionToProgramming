#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg 
    {
        "Унылая пора! Очей очарованье!", 
        "Люблю я пышное природы увяданье,", 
        "В багрец и в золото одетые леса,", 
        "В их сенях ветра шум и свежее дыханье,", 
        "И мглой волнистою покрыты небеса,", 
        "И редкий солнца луч, и первые морозы,",
        "И отдаленные седой зимы угрозы.",
    };

    for (const auto& word : msg)
    {
        cout << word << "\n";
    }
}