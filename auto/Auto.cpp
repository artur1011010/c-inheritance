#include "Auto.h"

Auto::Auto(Engine engine) : engine(engine) {
}

ostream &operator<<(ostream &out, Auto &auto1) {
    cout << "Auto (z klasy bazowej):\nsilnik: " << auto1.engine << endl;
    return out;
}
