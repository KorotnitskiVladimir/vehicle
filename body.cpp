//
//  body.cpp
//  vehicle
//
//  Created by Коротницкий Владимир on 04.06.2024.
//

#include "body.hpp"
#include <iostream>
using namespace std;

Body::Body()
{
    model = nullptr;
    color = nullptr;
    doors = 0;
    seats = 0;
}

Body::Body(const char* m, const char* c, int d, int s)
{
    model = new char[strlen(m)+1];
    strcpy(model, m);
    color = new char[strlen(c)+1];
    strcpy(color, c);
    doors = d;
    seats = s;
}

Body::~Body()
{
    if (model)
        delete [] model;
    if (color)
        delete [] color;
}

Body::Body(const Body &object)
{
    this->model = new char[strlen(object.model)+1];
    strcpy(this->model, object.model);
    this->color = new char[strlen(object.color)+1];
    strcpy(this->color, object.color);
    this->doors = object.doors;
    this->seats = object.seats;
}

void Body::setModel(const char* m)
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

void Body::setColor(const char* c)
{
    if (color)
    {
        delete [] color;
        color = new char[strlen(c)+1];
        strcpy(color, c);
    }
    else
    {
        color = new char[strlen(c)+1];
        strcpy(color, c);
    }
}

void Body::setDoors(int d)
{
    if (d==3 || d==5)
        doors = d;
}

void Body::setSeats(int s)
{
    if (s==5 || s==7)
        seats = s;
}

char* Body::getModel() const
{
    return model;
}

char* Body::getColor() const
{
    return color;
}

int Body::getDoors() const
{
    return doors;
}

int Body::getSeats() const
{
    return seats;
}

void Body::print() const
{
    cout << "Model: " << model << endl << "Color: " << color << endl;
    cout << "Number of doors: " << doors << endl << "Number of seats: " << seats << endl;
}
