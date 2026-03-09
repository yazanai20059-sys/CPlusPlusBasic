#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret[4];
    int intent[4];

    for(int i = 0; i < 4; i++) {
        secret[i] = rand() % 10;
    }

    int encertats = 0;

    cout << "Joc MasterMind (codi de 4 xifres)" << endl;

    while(encertats != 4) {

        cout << "\nIntrodueix 4 xifres separades per espais: ";
        for(int i = 0; i < 4; i++) {
            cin >> intent[i];
        }

        encertats = 0;
        int coincideixen = 0;
        bool usatSecret[4] = {false, false, false, false};
        bool usatIntent[4] = {false, false, false, false};

        for(int i = 0; i < 4; i++) {
            if(intent[i] == secret[i]) {
                encertats++;
                usatSecret[i] = true;
                usatIntent[i] = true;
            }
        }

        for(int i = 0; i < 4; i++) {
            if(!usatIntent[i]) {
                for(int j = 0; j < 4; j++) {
                    if(!usatSecret[j] && intent[i] == secret[j]) {
                        coincideixen++;
                        usatSecret[j] = true;
                        break;
                    }
                }
            }
        }

        cout << "Encertats: " << encertats << endl;
        cout << "Coincideixen: " << coincideixen << endl;
    }

    cout << "\nHas endevinat el codi!" << endl;

    return 0;
}