#ifndef TEMPCONVERT_H_INCLUDED
#define TEMPCONVERT_H_INCLUDED

///Convert temperature from Celsius to Fahrenheit.
float convertTemperature(float);

float convertTemperature(float temp)
{
    float returnValue;

    returnValue = ((temp * 9) / 5) + 32;

    return returnValue;
}


#endif // TEMPCONVERT_H_INCLUDED
