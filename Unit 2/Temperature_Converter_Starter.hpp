#include <iostream>
#include <string>
using namespace std;

/*
    ====================================     TASK     =====================================
    This program contains two functions for you to implement:
        1. A converter of temperature from Farenheit to Celsius
        2. A converter of temperature from Celsius to Farenheit

    The following conversions will be useful (use these exact values for correctness):
        Degrees Celsius = (Degrees Farenheit - 32) * 5/9
        Degrees Farenheit = (Degrees Celsius * 9/5) + 32

    Your converter should use integers for the conversion
    =======================================================================================
*/

/*
    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o temp_converter Temperature_Converter_Checker.cpp
        Next, run the program:
            ./temp_converter
    =======================================================================================
*/

//Convert a temperature in Farenheit to a temperature in Celsius and print the conversion
string farenheit_to_Celsius(int temperature_in_farenheit){
    //TODO: create a variable temperature_in_celsius and set it equal to the proper conversion from the temperature_in_farenheit
    int temperature_in_celsius = (temperature_in_farenheit - 32) * 5/9;
    //DO NOT EDIT BELOW THIS LINE

    //This will print the proper output string 
    return to_string(temperature_in_farenheit) + " degrees Farenheit is equal to " 
        + to_string(temperature_in_celsius) + " degrees Celsius\n";
}

//Convert a temperature in Celsius to a temperature in Farenheit and print the conversion
string celsius_to_farenheit(int temperature_in_celsius){
    //TODO: create a variable temperature_in_farenheit and set it equal to the proper conversion from the temperature_in_celsius
    int temperature_in_farenheit = (temperature_in_celsius * 9/5) + 32;
    //DO NOT EDIT BELOW THIS LINE

    //This will print the proper output string 
    return to_string(temperature_in_celsius) + " degrees Celsius is equal to " 
        + to_string(temperature_in_farenheit) + " degrees Farenheit\n";
}