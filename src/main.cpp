#include "mbed.h"

I2C i2c(PB_11, PB_10);

int main() {
    i2c.frequency(400*1000);
    return 0;
}
