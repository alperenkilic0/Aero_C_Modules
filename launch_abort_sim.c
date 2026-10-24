#include <stdio.h>

int main(void){
    int temp_sensors[5] = {35,40,50,75,90};
    int abort_flag = 0;

    printf("We are testing sensors' final checks before launching!");

    for(int i = 0; i<5; i++){
        if(temp_sensors[i]>80){
            abort_flag=1;
            printf("Critical Error! Temperature of the sensor %d is %dC! Launching Stopped!\n",i , temp_sensors[i]);
            break;
        }

        if(temp_sensors[i]<0){
            printf("We cannot read sensor %d, Please Check sensor %d\n", i, i);
            continue;
        }

        printf("Sensor %d is nominal: %dC\n", i, temp_sensors[i]);

    }

    if(!abort_flag){
        printf("All sensors are nominal, Launch approved!\n");
    }
    
}
