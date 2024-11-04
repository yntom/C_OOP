#include <stdlib.h>
#include "EntityChild.h"


EntityChild* newEntityChild(int defaultValue)
{
    EntityChild* entity;
    entity = (EntityChild*)malloc(sizeof(EntityChild));
    Entity* parent_ptr = newEntity(0);
    entity->parent = parent_ptr;
    entity->second_value = defaultValue;
    // printf("Constructor EntityChild called!\n");
    return entity;
}

void deleteEntityChild(EntityChild* entity)
{
    // printf("Destructor EntityChild called!\n");
    Entity* parent_ptr = entity->parent;
    deleteEntity(parent_ptr);
    free(entity);
    entity = NULL;
}
