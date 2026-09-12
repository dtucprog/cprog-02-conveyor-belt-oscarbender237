#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;
        printf("How many motors are carrying the packages\n");
       scanf("%d", &motorCount);
        if (motorCount > 0) {
        printf("How many kg of packages do we expect?\n");
     } 
        else {
        printf("How many motors are carrying the packages?\n");
        }
        scanf("%d+1", &totalPackageWeight);
        
        int TOTAL_MOTOR_CAPACITY = motorCount*MOTOR_CAPACITY;
    
        if (TOTAL_MOTOR_CAPACITY > totalPackageWeight) {
        printf("Yes! The conveyor belt can carry the packages.\n");
     } 
        else {
        printf("No. The conveyor belt cannot carry the packages.\n");
        }
}
