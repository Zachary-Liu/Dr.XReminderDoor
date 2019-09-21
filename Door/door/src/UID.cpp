#include "UID.h"

UID::UID(uint8_t* id, uint8_t idLength){
    memcpy(&ID, id, idLength);
    IDLength = idLength;
}

uint8_t* UID::getID(){
    return (uint8_t *)ID;
}

uint8_t UID::getIDLength(){
    return IDLength;
}

void UID::setID(uint8_t* id){
    memcpy(&ID, id, getIDLength());
}

void UID::setLength(uint8_t idLength){
    IDLength = idLength;
}

