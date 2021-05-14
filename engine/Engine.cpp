#include <iostream>
#include "Engine.h"

Engine::Engine(int capacity1, string type1) {
    capacity = capacity1;
    type = type1;
}

ostream &operator<<(ostream &out, Engine &engine1) {
    cout << "Silnik (z klasy bazowej):\ntyp: " << engine1.type << ", pojemnosc: "<< engine1.capacity << endl;
    return out;
}
