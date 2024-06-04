//
//  main.cpp
//  vehicle
//
//  Created by Коротницкий Владимир on 03.06.2024.
//

#include <iostream>
#include "engine.hpp"
#include "transmission.hpp"
#include "chassis.hpp"
#include "body.hpp"
#include "vehicle.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Engine e1("Volkswagen GT", "gas", 3.6, 2000);
    Transmission t1("Volkswagen", "automat", 9);
    Chassis c1("Volkswagen", 4);
    Body b1("Volkswagen", "blue", 5, 5);
    Vehicle v1("Volkswagen GT", "UA12390CH0901011", 13.2, 22100, 220, 45200, e1, t1, c1, b1);
    v1.print();
    
    return 0;
}
