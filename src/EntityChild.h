#ifndef ENTITYCHILD_H
#define ENTITYCHILD_H

#include "Entity.h"

typedef struct EntityСhild
{
    Entity* parent;

    // own data 
    int second_value;
    
} EntityChild;


// Constructor
EntityChild* newEntityChild(int);

// Destructor
void deleteEntityChild(EntityChild*);

#endif