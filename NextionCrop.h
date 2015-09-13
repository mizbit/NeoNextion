#ifndef __NEONEXTION_NEXTIONCROP
#define __NEONEXTION_NEXTIONCROP

#include <Arduino.h>
#include "Nextion.h"
#include "INextionTouchable.h"

class NextionCrop: public virtual INextionTouchable
{
  public:
    NextionCrop(Nextion* nex, uint8_t page, uint8_t component, const char *name);

    uint16_t getPictureID();
    bool setPictureID(uint16_t id);

};

#endif
