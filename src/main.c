#include <stdio.h>
#include "Entity.h"
#include "EntityChild.h"

int main() 
{
    // Entity
    printf("-----Entity class example-----\n");

    Entity *entity = newEntity(8);

    int private_val = entity->getValue(entity); 
    printf("Public value: %d\n", entity->publicValue);
    printf("Private value: %d\n", private_val);

    deleteEntity(entity);

    // EntityChild
    printf("-----EntityChild class example-----\n");

    EntityChild *child = newEntityChild(18);

    int parent_private_val = child->parent->getValue(child->parent);
    printf("Public value child: %d\n", child->second_value);
    printf("Public value parent: %d\n", child->parent->publicValue);
    printf("Private value parent: %d\n", parent_private_val);

    deleteEntityChild(child);
    return 0;
}