//
//  vehicle.hpp
//  vehicle
//
//  Created by Коротницкий Владимир on 04.06.2024.
//

#ifndef vehicle_hpp
#define vehicle_hpp
#include "engine.hpp"
#include "transmission.hpp"
#include "chassis.hpp"
#include "body.hpp"

class Vehicle
{
private:
    Engine eng;
    Transmission trsm;
    Chassis chas;
    Body bdy;
    char* model;
    char* id;
    double consumption;
    double price;
    int speed;
    int mileage;
public:
    Vehicle();
    Vehicle(const char* m, const char* i, double c, double p, int s, int ml, Engine e, Transmission t, Chassis ch, Body b);
    ~Vehicle();
    void setModel(const char* m);
    void setId(const char* i);
    void setConsumption(double c);
    void setPrice(double p);
    void setSpeed(int s);
    void setMileage(int m);
    char* getModel() const;
    char* getId() const;
    double getConsumption() const;
    double getPrice() const;
    int getSpeed() const;
    int getMileage() const;
    void print() const;
};

#endif /* vehicle_hpp */
