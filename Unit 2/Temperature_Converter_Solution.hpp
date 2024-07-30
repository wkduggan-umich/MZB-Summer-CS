#include <iostream>
#include <string>
using namespace std;

//Convert a temperature in Farenheit to a temperature in Celcius and print the conversion
string farenheit_to_Celsius(int temperature_in_farenheit){
    int temperature_in_celsius  = (temperature_in_farenheit - 32) * 5/9;
    return to_string(temperature_in_farenheit) + " degrees Farenheit is equal to " 
        + to_string(temperature_in_celsius) + " degrees Celsius\n";
}

//Convert a temperature in Celcius to a temperature in Farenheit and print the conversion
string celsius_to_farenheit(int temperature_in_celsius){
    int temperature_in_farenheit  = (temperature_in_celsius * 9/5) + 32;
    return to_string(temperature_in_celsius) + " degrees Celsius is equal to " + to_string(temperature_in_farenheit) + " degrees Farenheit\n";
}