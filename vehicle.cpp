//
//  vehicle.cpp
//  vehicle
//
//  Created by Коротницкий Владимир on 04.06.2024.
//

#include "vehicle.hpp"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
    model = nullptr;
    id = nullptr;
}

Vehicle::Vehicle(const char* m, const char* i, double c, double p, int s, int ml, Engine e, Transmission t, Chassis ch, Body b): eng(e), trsm(t), chas(ch), bdy(b)
{
    model = new char[strlen(m)+1];
    strcpy(model, m);
    id = new char[strlen(i)+1];
    strcpy(id, i);
    consumption = c;
    price = p;
    speed = s;
    mileage = ml;
}

Vehicle::~Vehicle()
{
    if (model)
        delete [] model;
    if (id)
        delete [] id;
}

void Vehicle::setModel(const char *m)
{
    if (model)
    {
        delete [] model;
        model = new char[strlen(m)+1];
        strcpy(model, m);
    }
    else
    {
        model = new char[strlen(m)+1];
        strcpy(model, m);
    }
}

void Vehicle::setId(const char* i)
{
    if (id)
    {
        delete [] id;
        id = new char[strlen(i)+1];
        strcpy(id, i);
    }
    else
    {
        id = new char[strlen(i)+1];
        strcpy(id, i);
    }
}

void Vehicle::setConsumption(double c)
{
    if (c>=0)
        consumption = c;
}

void Vehicle::setPrice(double p)
{
    if (p>0)
        price = p;
}

void Vehicle::setSpeed(int s)
{
    if (s>0)
    {
        speed = s;
    }
}

void Vehicle::setMileage(int m)
{
    if (m>=0)
        mileage = m;
}

char* Vehicle::getModel() const
{
    return model;
}

char* Vehicle::getId() const
{
    return id;
}

double Vehicle::getConsumption() const
{
    return consumption;
}

double Vehicle::getPrice() const
{
    return price;
}

int Vehicle::getSpeed() const
{
    return speed;
}

int Vehicle::getMileage() const
{
    return mileage;
}

void Vehicle::print() const
{
    cout << "Vehicle model: " << model << endl << "ID #: " << id << endl <<
        "Consumption: " << consumption << " liters per 100 km" << endl << "Price: " << price <<
        " USD" << endl << "Max speed: " << speed << " km/h" << endl << "Current mileage: " <<
    mileage << " kms" << endl;
    cout << "Engine: " << endl; eng.print(); cout << endl;
    cout << "Transmission: " << endl; trsm.print(); cout << endl;
    cout << "Chassis: " << endl; chas.print(); cout << endl;
    cout << "Body: " << endl; bdy.print(); cout << endl;
}
