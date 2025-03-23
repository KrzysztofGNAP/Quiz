#include <iostream>
#include <cctype>

using namespace std;

class question{
public:

    string content;
    string a,b,c,d;
    int question_number;
    string correct;
    string choice;
    int score;

    void load(); //wczytuje dane z pliku
    void ask(); //wyswietla pytanie
    void check_answear(); //sprawdz odpowiedz
};
