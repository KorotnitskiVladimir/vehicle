//
//  chassis.hpp
//  vehicle
//
//  Created by Коротницкий Владимир on 04.06.2024.
//

#ifndef chassis_hpp
#define chassis_hpp

class Chassis
{
private:
    char* model;
    int mode;
public:
    Chassis();
    Chassis(const char* m, int mod);
    ~Chassis();
    Chassis(const Chassis &object);
    void setModel(const char* m);
    void setMode(int m);
    char* getModel() const;
    int getMode() const;
    void print() const;
};

#endif /* chassis_hpp */
