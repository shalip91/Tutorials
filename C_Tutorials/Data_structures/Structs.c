#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


// Struct
typedef struct {
    int x;
    int y;
}Position;

typedef struct{
    int radius;
    int height;
}Size;

typedef struct {
    char name[20];
    Position position;
    Size size;
}Building;


int main()
{
    // Struct (more before main)
    Building building = {"shali", {1, 2}, {10, 20}};
    printf("the name is: %s.\n"
           "the position is: (%d, %d).\n"
           "the size is (%d, %d)",
           building.name,
           building.position.x, building.position.y,
           building.size.height, building.size.radius);

    return 0;
}
