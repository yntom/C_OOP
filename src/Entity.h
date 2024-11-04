#ifndef ENTITY_H
#define ENTITY_H

typedef struct Entity 
{
    // struct with private class field 
    void *privateEntity;
    // functions with private data access
    int (*getValue) (struct Entity*);
    void (*setValue) (struct Entity*, int);
    // public class field
    int publicValue;
} Entity;


// Constructor
Entity* newEntity(int);

// Destructor
void deleteEntity(Entity*);

#endif