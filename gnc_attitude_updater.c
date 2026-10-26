#include <stdio.h>

void position_update(double *x_ptr, double *y_ptr, double *z_ptr, double vx, double vy, double vz, double dt){
*x_ptr = *x_ptr + (vx*dt);
*y_ptr = *y_ptr + (vy*dt);
*z_ptr = *z_ptr + (vz*dt);
}

int main(void){
    double vx = 100, vy = 150, vz = 200 , dt = 20;
    double pos_x = 1500, pos_y=1300 , pos_z= 1900;

    printf("Situation before manuever..\n");
    printf("Location X : %.2f, Y: %.2f, Z: %2f\n", pos_x,pos_y,pos_z);

    position_update(&pos_x, &pos_y, &pos_z, vx, vy, vz, dt);

    printf("Current Situation after manuever..\n");
    printf("New Location X : %.2f, Y: %.2f, Z:.%2f\n", pos_x,pos_y,pos_z);
    
    return 0;
    
}
