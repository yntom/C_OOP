#include <stdlib.h>
#include "Entity.h"

// pritvate struct
typedef struct private
{
    int privateValue;
} private;

static int getValue_private(struct Entity* entity)
{
    return ((struct private*)(entity->privateEntity))->privateValue;
}

static void setValue_private(struct Entity* entity, int val)
{
    ((struct private*)(entity->privateEntity))->privateValue = val;
}

Entity* newEntity(int defaultValue)
{
    Entity* entity;
    entity = (Entity*)malloc(sizeof(Entity));
    entity->privateEntity = malloc(sizeof(private));
    entity->getValue = &getValue_private;
    entity->setValue = &setValue_private;
    entity->setValue(entity, defaultValue);
    entity->publicValue = 0;
    // printf("Constructor Entity called\n!");
    return entity;
}

void deleteEntity(Entity* entity)
{
    free(entity->privateEntity);
    free(entity);
    entity = NULL;
    // printf("Destructor Entity called\n!");
}
