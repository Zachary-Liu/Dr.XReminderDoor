#include "_Objects.h"

_Objects::_Objects(uint8_t* id, uint8_t idLength, bool location){
    ID = UID(id, idLength);
    Location = location;   
}

bool _Objects::getLocation(){
    return Location;
}

void _Objects::setLocation(){
    Location != Location;
}

UID _Objects::getID(){
    return ID;
}
