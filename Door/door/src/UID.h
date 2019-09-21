#ifndef _UID_H
#define _UID_H

#include <stdint.h>
#include <string.h>

class UID{
    private:
        uint8_t ID[7];
        uint8_t IDLength;
    public:
        UID(uint8_t* id, uint8_t idLength);//General Constructor
        UID(){};//Default Constructor
        UID(const UID& uid){//Copy Constructor
            IDLength = uid.IDLength;
            memcpy(&ID, &uid.ID, uid.IDLength);
        }
        uint8_t* getID();
        uint8_t getIDLength();
        void setID(uint8_t* id);
        void setLength(uint8_t idLength);

};
#endif