#include <stdio.h>

int main(void){
    FILE *log_file;
    
    log_file= fopen("flight_data.csv", "w");
    
    if(log_file == NULL){
        printf("Error, The File couldn't be generated!\n");
        return 1;
    }
    
    printf("Black Box Recording is starting..\n");
    
    fprintf(log_file, "Time(s), Altitude(m), Velocity(m/s) \n");
    
    double altitude=0 , velocity=0 , time=0 ;
    
    for(int i = 0; i <5; i++){
        altitude = altitude + (velocity * 1.0) + (0.5 * 9.8 * 1 * 1);
        velocity= velocity+9.8;
        time=i;
        
        fprintf(log_file,"%.2f, %.2f, %.2f \n", time, altitude, velocity);
        
        printf("%d . Data was written on the screen\n", i);
    }
    
    fclose(log_file);
    
    printf("Fligh Data is succesfully saved to 'flight_data.csv' file");
}
