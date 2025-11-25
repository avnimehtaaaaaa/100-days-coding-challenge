//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light; 
    light = RED;

    printf("Traffic Light Status:\n");

    if (light == RED) {
        printf("RED light: Stop! It's not safe to move.\n");
    }
    else if (light == YELLOW) {
        printf("YELLOW light: Wait! Be ready to move.\n");
    }
    else if (light == GREEN) {
        printf("GREEN light: Go! You can move safely.\n");
    }

    return 0;
}
