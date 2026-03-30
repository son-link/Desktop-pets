#include "entity.h"

void Entity_init(Entity* entity,char* fileName, Vector2 position,Vector2 velocity){
    entity->position = position;
    entity->velocity = velocity;
    Sprite_init(&entity->sprite,fileName);
}

void Entity_update(Entity* entity){
    float dt = GetFrameTime();
    entity->position.x += entity->velocity.x*dt;
    entity->position.y += entity->velocity.y*dt;
    Sprite_update(&entity->sprite); 
}

void Entity_draw(Entity* entity){
    Sprite_draw(&entity->sprite,entity->position.x,entity->position.y);
}

void Entity_unload(Entity* entity){
    Sprite_Unload(&entity->sprite);
}