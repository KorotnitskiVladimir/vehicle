//
//  transmission.cpp
//  vehicle
//
//  Created by Коротницкий Владимир on 03.06.2024.
//

#include "transmission.hpp"
#include <iostream>
using namespace std;

Transmission::Transmission()
{
    model = nullptr;
    type = nullptr;
    speed = 0;
}

Transmission::Transmission(const char* m, const char* t, int s)
{
    model = new char[strlen(m)+1];
    strcpy(model, m);
    type = new char[strlen(t)+1];
    strcpy(type, t);
    speed = s;
}

Transmission::~Transmission()
{
    if (model)
        delete [] model;
    if (type)
        delete [] type;
}

Transmission::Transmission(const Transmission &object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy(this->model, object.model);
    this->type = new char[strlen(object.type)+1];
    strcpy(this->type, object.type);
    this->speed = object.speed;
}

void Transmission::setModel(const char* m)
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

void Transmission::setType(const char* t)
{
    if (type)
    {
        delete [] type;
        type = new char[strlen(t)+1];
        strcpy(type, t);
    }
    else
    {
        type = new char[strlen(t)+1];
        strcpy(type, t);
    }
}

void Transmission::setSpeed(int s)
{
    if (s>0)
        speed = s;
}

char* Transmission::getModel() const
{
    return model;
}

char* Transmission::getType() const
{
    return type;
}

int Transmission::getSpeed() const
{
    return speed;
}

void Transmission::print() const
{
    cout << "Model: " << model << endl << "Type: " << type << endl << speed << " speeds" << endl << endl;
}
