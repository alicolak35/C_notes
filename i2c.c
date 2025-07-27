#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "FreeRTOS.h"


//typedef enum { false, true } bool;

#define I2C_ADDR    0x56 //8 bits address
#define CMD_TEMP    0x10
#define CMD_HUM     0x20 


bool i2c_master_send(uint8_t addr, uint8_t cmd, uint8_t *buffer)
{
    
buffer[0] = addr >> 1;
buffer[1] = cmd;

return 0;
}


bool i2c_master_receive(uint8_t *buffer)
{
    float to_float;
    
    if (buffer[0] != 0xff)
    {
        // memcpy(&to_float, buffer, sizeof(float));
        to_float = *(float*)buffer;
        printf("%s\n", "Slave device respond...");
        printf("%f\n", to_float);

    }    

    return 0;
}

// tampon kullanımı
bool i2c_slave(uint8_t *buffer)
{
    float data;

    if (*buffer == I2C_ADDR >> 1)
    {
        switch(*(buffer + 1))
        {
            case CMD_TEMP:
                data = 25.32;
                break;
            case CMD_HUM:
                data = 44.12;
                break;
            default:
                data = 0.00;
        }
        uint8_t reset[2] = { 0 };//D
        
        
        memcpy(buffer, reset, (size_t) 2);
        memcpy(buffer, &data, sizeof(float));

        return 0;
    }    
    else    
    {
        data = 0xff;
        memcpy(buffer, &data, (size_t) 1);
        return 1;
    }    
}


int main(void){

    uint8_t buffer[10] = { 0 };
    // memset(buffer, 0, 10);
    
    i2c_master_send(I2C_ADDR, CMD_TEMP, buffer);
    i2c_slave(buffer);
    i2c_master_receive(buffer);

    return 0;

}


/*
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define I2C_ADDR    0x56
#define CMD_TEMP    0x10
#define CMD_HUM     0x20 
#define BUFFER_SIZE 10

bool i2c_master_send(uint8_t addr, uint8_t cmd, uint8_t *buffer)
{
    *buffer = addr;
    *(buffer + 1) = cmd;
    return 0;
}

bool i2c_master_receive(uint8_t *buffer)
{
    // Allocate memory for receive buffer
    uint8_t receive_data = *buffer;
    
    if (receive_data != 0xff)
    {
        printf("Slave device respond...\n");
        // Cast the 4 bytes back to float
        float *temp_ptr = (float*)buffer;
        printf("%f\n", *temp_ptr);
    }    
    return 0;
}

bool i2c_slave(uint8_t *buffer)
{
    float data;
    
    if (*buffer == I2C_ADDR)
    {
        switch(*(buffer + 1))
        {
            case CMD_TEMP:
            data = 25.32;
            break;
            case CMD_HUM:
            data = 44.12;
            break;
            default:
            data = 0.00;
        }
        
        // Properly clear buffer and copy float data
        memset(buffer, 0x00, 2);
        memcpy(buffer, &data, sizeof(float));
        return 0;
    }    
    else    
    {
        uint8_t error_code = 0xff;
        memcpy(buffer, &error_code, 1);
        return 1;
    }    
}

int main(void){
    // Properly allocate memory for buffers
    uint8_t buffer[BUFFER_SIZE];
    
    // Initialize buffer
    memset(buffer, 0, BUFFER_SIZE);
    
    i2c_master_send(I2C_ADDR, CMD_TEMP, buffer);
    i2c_slave(buffer);
    i2c_master_receive(buffer);
    
    return 0;
}
*/