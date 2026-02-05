#include <stdio.h>
void calculatevolume(int width, int height, int length) {
    int volume = width * height *length;
    printf("volume: %d\n", volume);
}

int main() {
    int x = 25;
    int y = 30;
    int z = 10;
    calculatevolume(x, y, z); 
    calculatevolume(5, 8, 10); 
    calculatevolume(x + 5, y + 2,z + 5); 
    return 0;
}