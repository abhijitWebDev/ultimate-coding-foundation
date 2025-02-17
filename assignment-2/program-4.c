#include<stdio.h>

int main() {
    int L, W, H, volumeOfCuboid;
    printf("Enter the length of cuboid: ");
    scanf("%d", &L);

    printf("Enter the breadth of cuboid: ");
    scanf("%d", &W);

    printf("Enter the height of cuboid: ");
    scanf("%d", &H);

    volumeOfCuboid = L * W * H;

    printf("The volume of cuboid is: %d\n ", volumeOfCuboid);

    return 0;

}