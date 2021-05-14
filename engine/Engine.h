using namespace std;

#include <string>

#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
    string type;
    int capacity;
public:
    Engine(int capacity1, string type);
    friend ostream &operator<<(ostream &out, Engine &engine1);
};


#endif //ENGINE_H
