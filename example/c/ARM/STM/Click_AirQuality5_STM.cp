#line 1 "D:/Clicks_git/Air_quality_5_Click/SW/example/c/ARM/STM/Click_AirQuality5_STM.c"
#line 1 "d:/clicks_git/air_quality_5_click/sw/example/c/arm/stm/click_airquality5_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/air_quality_5_click/sw/example/c/arm/stm/click_airquality5_config.h"
#line 1 "d:/clicks_git/air_quality_5_click/sw/example/c/arm/stm/click_airquality5_types.h"
#line 3 "d:/clicks_git/air_quality_5_click/sw/example/c/arm/stm/click_airquality5_config.h"
const uint32_t _AIRQ5_I2C_CFG[ 1 ] =
{
 100000
};
#line 1 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 59 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
extern const uint16_t _AIRQ5_DATA_CHANNEL_NO2;
extern const uint16_t _AIRQ5_DATA_CHANNEL_NH3;
extern const uint16_t _AIRQ5_DATA_CHANNEL_CO;


extern const uint8_t _AIRQ5_REG_POINTER_CONVERT;
extern const uint8_t _AIRQ5_REG_POINTER_CONFIG;
extern const uint8_t _AIRQ5_REG_POINTER_LOW_THRESH;
extern const uint8_t _AIRQ5_REG_POINTER_HIGH_THRESH;


extern const uint16_t _AIRQ5_CONFIG_OS_SINGLE;
extern const uint16_t _AIRQ5_CONFIG_OS_BUSY;
extern const uint16_t _AIRQ5_CONFIG_OS_NOTBUSY;


extern const uint16_t _AIRQ5_CONFIG_PGA_6_144V;
extern const uint16_t _AIRQ5_CONFIG_PGA_4_096V;
extern const uint16_t _AIRQ5_CONFIG_PGA_2_048V;
extern const uint16_t _AIRQ5_CONFIG_PGA_1_024V;
extern const uint16_t _AIRQ5_CONFIG_PGA_0_512V;
extern const uint16_t _AIRQ5_CONFIG_PGA_0_256V;


extern const uint16_t _AIRQ5_CONFIG_CONTINUOUS_MODE;
extern const uint16_t _AIRQ5_CONFIG_SINGLE_MODE;


extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_128SPS;
extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_250SPS;
extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_490SPS;
extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_920SPS;
extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_1600SPS;
extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_2400SPS;
extern const uint16_t _AIRQ5_CONFIG_DATA_RATE_3300SPS;


extern const uint16_t _AIRQ5_CONFIG_COMP_MODE_TRADITIONAL;
extern const uint16_t _AIRQ5_CONFIG_COMP_MODE_WINDOW;


extern const uint16_t _AIRQ5_CONFIG_COMP_POL_ACTIVE_LOW;
extern const uint16_t _AIRQ5_CONFIG_COMP_POL_ACTIVE_HIGH;


extern const uint16_t _AIRQ5_CONFIG_COMP_LAT_NOT_LATCH;
extern const uint16_t _AIRQ5_CONFIG_COMP_LAT_LATCH;


extern const uint16_t _AIRQ5_CONFIG_COMP_QUE_1CONV;
extern const uint16_t _AIRQ5_CONFIG_COMP_QUE_2CONV;
extern const uint16_t _AIRQ5_CONFIG_COMP_QUE_4CONV;
extern const uint16_t _AIRQ5_CONFIG_COMP_QUE_0CONV;
#line 125 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
void airq5_i2cDriverInit( const uint8_t*  gpioObj,  const uint8_t*  i2cObj, uint8_t slave);
#line 132 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
void airq5_gpioDriverInit( const uint8_t*  gpioObj);
#line 144 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
void airq5_writeData(uint8_t reg, uint16_t _data);
#line 154 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
uint16_t airq5_readData(uint8_t reg);
#line 173 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
void airq5_setConfiguration(uint16_t config);
#line 186 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
uint16_t airq5_readSensorData(uint16_t channel_data);
#line 193 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
uint8_t airq5_getInterrupt();
#line 201 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
float airq5_getNO2Data(uint16_t NO2_data);
#line 215 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
void airq5_getCOData(uint16_t CO_Data, float *dataBuffer);
#line 228 "d:/clicks_git/air_quality_5_click/sw/library/__airq5_driver.h"
void airq5_getNH3Data(uint16_t NH3_Data, float *dataBuffer);
#line 29 "D:/Clicks_git/Air_quality_5_Click/SW/example/c/ARM/STM/Click_AirQuality5_STM.c"
uint16_t NO2_sensorData;
uint16_t NH3_sensorData;
uint16_t CO_sensorData;
char dataText[50] = {0};

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_i2cInit( _MIKROBUS1, &_AIRQ5_I2C_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 Delay_ms( 100 );
}

void applicationInit()
{
 airq5_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x48 );
 airq5_setConfiguration( _AIRQ5_CONFIG_OS_SINGLE |
 _AIRQ5_CONFIG_PGA_2_048V |
 _AIRQ5_CONFIG_SINGLE_MODE |
 _AIRQ5_CONFIG_DATA_RATE_1600SPS |
 _AIRQ5_CONFIG_COMP_MODE_TRADITIONAL |
 _AIRQ5_CONFIG_COMP_POL_ACTIVE_LOW |
 _AIRQ5_CONFIG_COMP_LAT_NOT_LATCH |
 _AIRQ5_CONFIG_COMP_QUE_0CONV );
}

void applicationTask()
{
 NO2_sensorData = airq5_readSensorData(_AIRQ5_DATA_CHANNEL_NO2);
 NH3_sensorData = airq5_readSensorData(_AIRQ5_DATA_CHANNEL_NH3);
 CO_sensorData = airq5_readSensorData(_AIRQ5_DATA_CHANNEL_CO);

 IntToStr(NO2_sensorData, dataText);
 mikrobus_logWrite(" NO2 data: ", _LOG_TEXT);
 mikrobus_logWrite(dataText, _LOG_LINE);

 IntToStr(NH3_sensorData, dataText);
 mikrobus_logWrite(" NH3 data: ", _LOG_TEXT);
 mikrobus_logWrite(dataText, _LOG_LINE);

 IntToStr(CO_sensorData, dataText);
 mikrobus_logWrite(" CO data: ", _LOG_TEXT);
 mikrobus_logWrite(dataText, _LOG_LINE);

 mikrobus_logWrite(" -------- ", _LOG_LINE);
 Delay_ms( 200 );
}

void main()
{
 systemInit();
 applicationInit();

 while (1)
 {
 applicationTask();
 }
}
