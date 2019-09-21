#ifndef __Objects_H
#define __Objects_H

#include "UID.h"

class _Objects{
    private:
        UID ID;
        bool Location;//true is home, false is nome
    public:
        _Objects(uint8_t* id, uint8_t idLength, bool location);//General Constuctor
        _Objects(const _Objects& object){//Copy Constructor
            ID = object.ID;
            Location = object.Location;
        };
        _Objects(){};
        
        bool getLocation();
        void setLocation();
        UID getID();
};
#endif