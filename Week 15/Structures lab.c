#include <stdio.h>
struct metal_properties{
    char metal_name[20];
    double resistivity_num;
    double resistivity_power;
    double length_in_m;
    double radius_in_mm;
}
int main(){
    struct metal_properties metal1 = {"Copper", 1.7, -8, 80, 5};
    printf("");
}