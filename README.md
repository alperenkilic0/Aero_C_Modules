# aero-c-modules

Core flight software routines and GNC (Guidance, Navigation, and Control) algorithms implemented in standard C. 

This repository focuses on low-level memory management, pointer arithmetic, and data structures used in avionics and telemetry processing.

## Contents

* `launch_abort_sim.c` - Pre-launch sensor polling loop with threshold-based abort flags.
* `delta_v_calculator.c` - Scalar Delta-V calculation for orbital trajectory corrections.
* `gnc_attitude_updater.c` - In-place state vector (X, Y, Z) updates using pointers (call-by-reference).

## Planned

* `telemetry_serializer.c` - Data framing with C structs and bit-fields for bandwidth optimization.
* `flight_logger.c` - Sequential and binary file I/O for blackbox sensor logging.

## Build

Compile any module using `gcc`. For modules using `<math.h>`, link the math library with `-lm`:

```bash
gcc delta_v_calculator.c -o delta_v -lm
./delta_v
```
