/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:2D Array- Room Occupancy
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // random occupancy (1 = occupied, 0 = vacant)
    for(floor=0; floor<5; floor++)
    {
        for(room=0; room<10; room++)
        {
            occupancy[floor][room] = rand() % 2;
        }
    }

    printf("\nRoom Occupancy per Floor:\n");

    for(floor=0; floor<5; floor++)
    {
        occupied = 0;
        vacant = 0;

        for(room=0; room<10; room++)
        {
            if(occupancy[floor][room]==1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor+1, occupied, vacant);
    }

    return 0;
}