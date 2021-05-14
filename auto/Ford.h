#ifndef FORD_H
#define FORD_H

#include "Auto.h"

class Ford : public Auto {
public:
    explicit Ford(Engine engine);
    friend ostream &operator<<(ostream &out, Ford &ford1);
};


#endif //FORD_H
