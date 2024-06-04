//
//  engine.cpp
//  vehicle
//
//  Created by Коротницкий Владимир on 03.06.2024.
//

#include "engine.hpp"
#include <iostream>
using namespace std;

Engine::Engine()
{
    model = nullptr;
    fuel = nullptr;
    volume = 0;
    power = 0;
}

Engine::Engine(const char* m, const char* f, double v, int p)
{
    model = new char[strlen(m)+1];
    strcpy(model, m);
    fuel = new char[strlen(f)+1];
    strcpy(fuel, f);
    volume = v;
    power = p;
}

Engine::~Engine()
{
    if (model)
        delete [] model;
    if (fuel)
        delete [] fuel;
}

Engine::Engine(const Engine &object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy(this->model, object.model);
    this->fuel = new char[strlen(object.fuel)+1];
    strcpy(this->fuel, object.fuel);
    this->volume = object.volume;
    this->power = object.power;
}

void Engine::setModel(const char* m)
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

void Engine::setFuel(const char* f)
{
    if (fuel)
    {
        delete [] fuel;
        fuel = new char[strlen(f)+1];
        strcpy(fuel, f);
    }
    else
    {
        fuel = new char[strlen(f)+1];
        strcpy(fuel, f);
    }
}

void Engine::setVolume(double v)
{
    if (v>=0)
        volume = v;
}

void Engine::setPower(int p)
{
    if (p>0)
        power = p;
}

char* Engine::getModel() const
{
    return model;
}

char* Engine::getFuel() const
{
    return fuel;
}

double Engine::getVolume() const
{
    return volume;
}

int Engine::getPower() const
{
    return power;
}

void Engine::print() const
{
    cout << "Model: " << model << endl << "Fuel: " << fuel << endl;
    cout << "Volume: " << volume << " liters" << endl << "Power: " << power << " watt" << endl << endl;
}

