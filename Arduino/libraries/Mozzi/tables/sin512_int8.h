#ifndef SIN512_INT8_H_
#define SIN512_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include <avr/pgmspace.h>

#define SIN512_NUM_CELLS 512
#define SIN512_SAMPLERATE 512

const char __attribute__((section(".progmem.data"))) SIN512_DATA []  =
        {
                0, 1, 2, 4, 5, 7, 8, 9, 11, 12, 14, 15, 16,
                18, 19, 21, 22, 23, 25, 26, 27, 29, 30, 32, 33, 34, 36, 37, 38, 40, 41, 42, 44,
                45, 46, 47, 49, 50, 51, 53, 54, 55, 56, 58, 59, 60, 61, 62, 64, 65, 66, 67, 68,
                69, 70, 71, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
                89, 90, 91, 92, 93, 94, 94, 95, 96, 97, 98, 98, 99, 100, 100, 101, 102, 102,
                103, 104, 104, 105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111,
                111, 111, 112, 112, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114, 114, 114,
                114, 115, 115, 115, 115, 115, 115, 115, 115, 115, 114, 114, 114, 114, 114, 114,
                114, 113, 113, 113, 113, 112, 112, 112, 112, 111, 111, 111, 110, 110, 109, 109,
                108, 108, 107, 107, 106, 106, 105, 105, 104, 104, 103, 102, 102, 101, 100, 100,
                99, 98, 98, 97, 96, 95, 94, 94, 93, 92, 91, 90, 89, 89, 88, 87, 86, 85, 84, 83,
                82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 71, 70, 69, 68, 67, 66, 65, 64, 62, 61,
                60, 59, 58, 56, 55, 54, 53, 51, 50, 49, 47, 46, 45, 44, 42, 41, 40, 38, 37, 36,
                34, 33, 32, 30, 29, 28, 26, 25, 23, 22, 21, 19, 18, 16, 15, 14, 12, 11, 9, 8, 7,
                5, 4, 2, 1, 0, -2, -3, -5, -6, -8, -9, -10, -12, -13, -15, -16, -17, -19, -20,
                -22, -23, -24, -26, -27, -28, -30, -31, -33, -34, -35, -37, -38, -39, -41, -42,
                -43, -45, -46, -47, -48, -50, -51, -52, -54, -55, -56, -57, -59, -60, -61, -62,
                -63, -65, -66, -67, -68, -69, -70, -71, -72, -74, -75, -76, -77, -78, -79, -80,
                -81, -82, -83, -84, -85, -86, -87, -88, -89, -90, -90, -91, -92, -93, -94, -95,
                -95, -96, -97, -98, -99, -99, -100, -101, -101, -102, -103, -103, -104, -105,
                -105, -106, -106, -107, -107, -108, -108, -109, -109, -110, -110, -111, -111,
                -112, -112, -112, -113, -113, -113, -113, -114, -114, -114, -114, -115, -115,
                -115, -115, -115, -115, -115, -116, -116, -116, -116, -116, -116, -116, -116,
                -116, -116, -115, -115, -115, -115, -115, -115, -114, -114, -114, -114, -113,
                -113, -113, -113, -112, -112, -112, -111, -111, -110, -110, -109, -109, -108,
                -108, -107, -107, -106, -106, -105, -105, -104, -103, -103, -102, -101, -101,
                -100, -99, -99, -98, -97, -96, -95, -95, -94, -93, -92, -91, -90, -90, -89, -88,
                -87, -86, -85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -72, -71,
                -70, -69, -68, -67, -66, -64, -63, -62, -61, -60, -59, -57, -56, -55, -54, -52,
                -51, -50, -48, -47, -46, -45, -43, -42, -41, -39, -38, -37, -35, -34, -33, -31,
                -30, -28, -27, -26, -24, -23, -22, -20, -19, -17, -16, -15, -13, -12, -10, -9,
                -8, -6, -5, -3, -2,
        };

#endif	/* SIN512_INT8_H_ */
