#include <iostream>
#include <cstring>
using namespace std;
const int  MAX_SIZE = 32;

struct Destination
{
    char city[MAX_SIZE];
    int kilometers;
};

void InitDestination(Destination& d, char* city, int kilometers)
{
    strcpy(d.city, city);
    d.kilometers = kilometers;
}

void EnterDestination(Destination& d)
{
    char city[MAX_SIZE];
    int kilometers;
    cout << "Please enter your destination: " ;
    cin >> city;
    cout << "Please enter the kilometers: ";
    cin >> kilometers;
    InitDestination(d, city, kilometers);
}

void PrintDestination(Destination d)
{
    cout << "City: " << d.city << endl;
    cout << "Kilometers: " << d.kilometers << endl;
}

void InitDestinationArray (Destination* destinations, const int numberOfDestinations)
{
    for(int i = 0; i < numberOfDestinations; i++)
    {
        memset(destinations[i].city, NULL, MAX_SIZE);
        destinations[i].kilometers = 0;
    }
}

void InitDestinationArrayTwo (Destination* destinations, const int numberOfDestinations)
{
    for(int i = 0; i < numberOfDestinations; i++)
    {
        EnterDestination(destinations[i]);
        cout << endl;
    }
}

void PrintDestinationArrayTwo(Destination* destinations, const int numberOfDestinations)
{
    for(int i = 0; i < numberOfDestinations; i++)
    {
        PrintDestination(destinations[i]);
        cout << endl;
    }
}

int main()
{
    Destination Plovdiv = {"Plovdiv", 165};
    Destination Varna = {"Varna", 469};

    PrintDestination(Plovdiv);
    cout << endl;
    PrintDestination(Varna);
    cout << endl;

    Destination destinations[30];
    InitDestinationArray(destinations, 30);

    InitDestinationArrayTwo(destinations, 5);
    PrintDestinationArrayTwo(destinations, 5);

    return 0;
}
