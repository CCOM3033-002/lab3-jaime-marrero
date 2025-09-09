/*
Laboratorio 3: Tres Números Aleatorios
Nombre: Jaime R. Marrero Pérez
Núm. Est: 801-07-4312
Colaboraciones: 
- Rubrica
- TA: Gabriel, Lillian
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() 
{
    // set seed
    srand(time(0));

    // generate and display random numbers based on a range.
    int maxRange = 100;
    int minRange = 0;

    int numAleatorio1 = rand() % (maxRange - minRange + 1) + minRange;
    int numAleatorio2 = rand() % (maxRange - minRange + 1) + minRange;
    int numAleatorio3 = rand() % (maxRange - minRange + 1) + minRange;

    // initialize variables for containing the sorted numbers.
    int sorted1, sorted2, sorted3 = 0;

    cout << "Este programa genera 3 números aleatoreos." << endl
         << "Los números generados fueron: " << numAleatorio1 << ", " << numAleatorio2 <<" y " << numAleatorio3 << endl;
    
     
    // sort numbers in descending order.
    // case where numAleatorio1 is the largest, nested "if/else" to check whether numAleatorio2 or numAleatorio3 are the second largest
    if (numAleatorio1 >= numAleatorio2 && numAleatorio1 >= numAleatorio3)
    {
        if(numAleatorio2 >= numAleatorio3)
        {
            sorted1 = numAleatorio1;
            sorted2 = numAleatorio2;
            sorted3 = numAleatorio3;
        }
        else 
        {
            sorted1 = numAleatorio1;
            sorted2 = numAleatorio3;
            sorted3 = numAleatorio2;
        }
    }

    // case where numAleatorio2 is the largest,, nested "if/else" to check whether numAleatorio1 or numAleatorio3 are the second largest
    else if (numAleatorio2 >= numAleatorio3)
    {
        if(numAleatorio1 >= numAleatorio3)
        {
            sorted1 = numAleatorio2;
            sorted2 = numAleatorio1;
            sorted3 = numAleatorio3;
        }
        else 
        {
            sorted1 = numAleatorio2;
            sorted2 = numAleatorio3;
            sorted3 = numAleatorio1;
        }
    }

    // case where numAleatorio3 is the largest, nested "if/else" to check whether numAleatorio1 or numAleatorio2 are the second largest
    else
    {
        if(numAleatorio1 >= numAleatorio2)
        {
            sorted1 = numAleatorio3;
            sorted2 = numAleatorio1;
            sorted3 = numAleatorio2;
        }
        else 
        {
            sorted1 = numAleatorio3;
            sorted2 = numAleatorio2;
            sorted3 = numAleatorio1;
        }
    }

    // print the sorted numbers
    cout << "Los números en orden descendiente: " << sorted1 << ", " << sorted2 << " y " << sorted3 << endl;
        
    return 0;
}