#include "Opel.h"

Opel::Opel(Engine engine) : Auto(engine) {

}

ostream &operator<<(ostream &out, Opel &opel1) {
    cout << "Ford (z klasy pochodnej):\nsilnik: " << opel1.engine << endl;
    return out;
}