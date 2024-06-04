//
//  engine.hpp
//  vehicle
//
//  Created by Коротницкий Владимир on 03.06.2024.
//

#ifndef engine_hpp
#define engine_hpp

#include <stdio.h>

class Engine
{
private:
    char* model;
    char* fuel;
    double volume;
    int power;
public:
    Engine();
    Engine(const char* m, const char* f, double v, int p);
    ~Engine();
    Engine(const Engine &object);
    void setModel(const char* m);
    void setFuel(const char* f);
    void setVolume(double v);
    void setPower(int p);
    char* getModel() const;
    char* getFuel() const;
    double getVolume() const;
    int getPower() const;
    void print() const;
};




#endif /* engine_hpp */
