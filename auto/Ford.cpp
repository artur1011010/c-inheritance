#include "Ford.h"

Ford::Ford(Engine engine) : Auto(engine) {

}

ostream &operator<<(ostream &out, Ford &ford1) {
    cout << "Ford (z klasy pochodnej):\nsilnik: " << ford1.engine << endl;
    return out;
}

