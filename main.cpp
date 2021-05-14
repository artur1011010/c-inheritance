#include <iostream>

#include "engine/Engine.h"
#include "engine/Ils.h"
#include "engine/Gls.h"
#include "auto/Auto.h"
#include "auto/Ford.h"
#include "auto/Opel.h"

using namespace std;

int main() {
    Engine engine(1600, "custom");
    Auto auto1(engine);
    cout << auto1;

//    Ils ils(1200);
//    Gls gls(2000);
//
//    Ford ford(gls);
//    cout << ford;

    return 0;
}
