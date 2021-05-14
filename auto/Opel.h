#ifndef OPEL_H
#define OPEL_H


#include "Auto.h"

class Opel : public Auto {
public:
    explicit Opel(Engine engine);
    friend ostream &operator<<(ostream &out, Opel &opel1);
};


#endif //OPEL_H
