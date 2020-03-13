/*============
Autor : md. Foysal ahammed
University : Eastern University of Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string helloArray [] = {"HELLO",
            "HOLA",
            "HALLO",
            "BONJOUR",
            "CIAO",
            "ZDRAVSTVUJTE"};

    string languageArray [] = {"ENGLISH",
            "SPANISH",
            "GERMAN",
            "FRENCH",
            "ITALIAN",
            "RUSSIAN"};


    string input;
    int cases = 1;

    while (cin >> input && input != "#") {

        int len = 6;
        bool found = false;

        for ( int i = 0; i < len; i++ ) {
            if (helloArray [i] == input) {
                printf ("Case %d: %s\n", cases++, languageArray [i].c_str());
                found = true;
                break;
            }
        }

        if (!found) {
            printf ("Case %d: UNKNOWN\n", cases++);
        }

    }

    return 0;
}
