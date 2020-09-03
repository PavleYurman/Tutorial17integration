// IntegrationBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>       /* pow */

int main()
{
    // This is numerical integration called semi implicit euler applied to spring damper system
    double t = 0.0;
    float dt = 1.0f; // change by 1 sec vs change by 1/100 sec
    dt = dt / 100.0f;

    float velocitiy = 0.0f;
    float position = 0.0f;
    float mass = 1.0f; // mass of 1kg
    float force = 10.0f; // 10N(newtons)

    std::cout << "t = " << t << " position = " << position << " velocitiy = " << velocitiy << std::endl;
 

    while (t < 10)
    {
        velocitiy = velocitiy + (force / mass) * dt;
        position = position + velocitiy * dt;        
        t += dt;
        std::cout << "t = " << t << " position = " << position << " velocitiy = " << velocitiy << std::endl;
    }   

    // change in displacememnt for 10 seconds:
    double t0 = 0.0; // starting time
    double t1 = 10.0; // final time
    float u = 0.0f; // initial velocitiy
    float a = force / mass;    
    float s = (u * t0) + (0.5 * a * pow(t, 2)); // displacement after 10 sec - skupna linearno opravljena pot po 10 sek
    std::cout << "s = " << s << " meters" << std::endl;

    // continue width Explicit Euler on https://gafferongames.com/post/integration_basics/
    // continue at: Why explicit euler is not (always) so great: when acceleration is not constant

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
