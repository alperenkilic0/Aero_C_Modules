#include <stdio.h>

struct normalTelemetry{
    unsigned int antenna_deployed;
    unsigned int engine_valve_status;
    unsigned int flight_mode;
};

struct optimizedTelemetry{
    unsigned int antenna_deployed: 1;
    unsigned int engine_valve_status: 1;
    unsigned int flight_mode: 2;
};

int main(void){
    struct optimizedTelemetry myPacket;

    myPacket.antenna_deployed = 1;
    myPacket.engine_valve_status = 1;
    myPacket.flight_mode = 2;

    printf("Telemetry Status Report\n");
    printf("Antenna Current Status: %d \n", myPacket.antenna_deployed);
    printf("Engine Valves' Current Status: %d \n", myPacket.engine_valve_status);
    printf("Flight Mode: %d", myPacket.flight_mode);

    printf("Bandwith and RAM Savings\n");
    printf("Standart Structure Size: %lu Byte\n", sizeof(struct normalTelemetry));
    printf("Optimized Structure Size: %lu Byte\n", sizeof(struct optimizedTelemetry));
    
    
    return 0;
}
