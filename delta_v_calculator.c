#include <stdio.h>
#include <math.h>

double calculate_delta_v(double vx_initial, double vy_initial, double vz_initial, double vx_target, double vy_target, double vz_target){
    double delta_vx = vx_target - vx_initial;
    double delta_vy = vy_target - vy_initial;
    double delta_vz = vz_target - vz_initial;

    double result = sqrt(pow(delta_vx,2)+pow(delta_vy, 2) + pow(delta_vz,2));

    return result;
    
}

int main(void){
    double vx_i =7600, vx_t = 7600;
    double vy_i =0, vy_t =150;
    double vz_i = 200, vz_t = 500;

    printf("Delta-V Calculating is starting\n");

    double deltav = calculate_delta_v(vx_i, vy_i, vz_i, vx_t, vy_t, vz_t);

    printf("The required Delta-V manuever is %.2f m/s\n", deltav);

    return 0;
    
}
