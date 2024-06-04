//
//  chassis.cpp
//  vehicle
//
//  Created by Коротницкий Владимир on 04.06.2024.
//

#include "chassis.hpp"
#include <iostream>
using namespace std;

Chassis::Chassis()
{
    model = nullptr;
    mode = 0;
}

Chassis::Chassis(const char* m, int mod)
{
    model = new char[strlen(m)+1];
    strcpy(model, m);
    mode = mod;
}

Chassis::~Chassis()
{
    if (model)
        delete [] model;
}

Chassis::Chassis(const Chassis &object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy(this->model, object.model);
    this->mode = object.mode;
}

void Chassis::setModel(const char *m)
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

void Chassis::setMode(int m)
{
    if (m==2 || m==4)
        mode = m;
}

char* Chassis::getModel() const
{
    return model;
}

int Chassis::getMode() const
{
    return mode;
}

void Chassis::print() const
{
    cout << "Model: " << model << endl << "Drive mode: " << mode << " WD" << endl;
}


