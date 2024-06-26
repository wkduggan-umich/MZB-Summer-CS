/* 
    =======================================================================================
                            TEMPERATURE TESTS. DO NOT EDIT!
    =======================================================================================
*/

#include "Temperature_Converter_Starter.hpp"

int main(){
    cout << "Testing 32 degrees Farenheit to Celsius...\n";
    cout << farenheit_to_Celsius(32);
    if(farenheit_to_Celsius(32) == "32 degrees Farenheit is equal to 0 degrees Celsius\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing 68 degrees Farenheit to Celsius...\n";
    cout << farenheit_to_Celsius(68);
    if(farenheit_to_Celsius(68) == "68 degrees Farenheit is equal to 20 degrees Celsius\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing 31226 degrees Farenheit to Celsius...\n";
    cout << farenheit_to_Celsius(31226);
    if(farenheit_to_Celsius(31226) == "31226 degrees Farenheit is equal to 17330 degrees Celsius\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing -13 degrees Farenheit to Celsius...\n";
    cout << farenheit_to_Celsius(-13);
    if(farenheit_to_Celsius(-13) == "-13 degrees Farenheit is equal to -25 degrees Celsius\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing 0 degrees Celsius to Farenheit...\n";
    cout << celsius_to_farenheit(0);
    if(celsius_to_farenheit(0) == "0 degrees Celsius is equal to 32 degrees Farenheit\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing -20 degrees Celsius to Farenheit...\n";
    cout << celsius_to_farenheit(-20);
    if(celsius_to_farenheit(-20) == "-20 degrees Celsius is equal to -4 degrees Farenheit\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing 100 degrees Celsius to Farenheit...\n";
    cout << celsius_to_farenheit(100);
    if(celsius_to_farenheit(100) == "100 degrees Celsius is equal to 212 degrees Farenheit\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }

    cout << "Testing 23010 degrees Celsius to Farenheit...\n";
    cout << celsius_to_farenheit(23010);
    if(celsius_to_farenheit(23010) == "23010 degrees Celsius is equal to 41450 degrees Farenheit\n"){
        cout << "PASS!\n\n";
    } else {
        cout << "FAILED!\n\n";
    }
}