#include <iostream>
#include "../engine/Engine.h"

using namespace std;

#ifndef AUTO_H
#define AUTO_H

class Auto {
protected:
    Engine engine;
public:
    Auto(Engine engine);
    friend ostream &operator<<(ostream &out, Auto &auto1);
};


#endif //AUTO_H
