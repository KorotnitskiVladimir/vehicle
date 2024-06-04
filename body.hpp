//
//  body.hpp
//  vehicle
//
//  Created by Коротницкий Владимир on 04.06.2024.
//

#ifndef body_hpp
#define body_hpp

class Body
{
private:
    char* model;
    char* color;
    int doors;
    int seats;
public:
    Body();
    Body(const char* m, const char* c, int d, int s);
    ~Body();
    Body(const Body &object);
    void setModel(const char* m);
    void setColor(const char* c);
    void setDoors(int d);
    void setSeats(int s);
    char* getModel() const;
    char* getColor() const;
    int getDoors() const;
    int getSeats() const;
    void print() const;
};

#endif /* body_hpp */
