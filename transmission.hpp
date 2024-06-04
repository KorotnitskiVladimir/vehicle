//
//  transmission.hpp
//  vehicle
//
//  Created by Коротницкий Владимир on 03.06.2024.
//

#ifndef transmission_hpp
#define transmission_hpp

class Transmission
{
private:
    char* model;
    char* type;
    int speed;
public:
    Transmission();
    Transmission(const char* m, const char* t, int s);
    ~Transmission();
    Transmission(const Transmission &object);
    void setModel(const char* m);
    void setType(const char* t);
    void setSpeed(int s);
    char* getModel() const;
    char* getType() const;
    int getSpeed() const;
    void print() const;
};

#endif /* transmission_hpp */
