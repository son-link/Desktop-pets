#ifndef ENTITY_H
#define ENTITY_H

#include <raylib.h>

#include "sprite.h"

typedef struct _entity{
    Vector2 position;
    Vector2 velocity;
    Sprite sprite;
} Entity;

void Entity_init(Entity*,char*, Vector2,Vector2);
void Entity_update(Entity*);
void Entity_draw(Entity*);
void Entity_unload(Entity*);

#endif // ENTITY_H

