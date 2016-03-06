#include <iostream>
#include <cstring>
using namespace std;
const int MAX_SIZE = 100;

struct Person
{
   char firstName[MAX_SIZE];
   char surname[MAX_SIZE];
};

void PrintPerson(Person p)
{
    cout << "First name:" << p.firstName << endl;
    cout << "Surname:" << p.surname << endl;
}

void InitPerson (Person& p, char* firstName, char* surname)
{
    strcpy(p.firstName, firstName);
    strcpy(p.surname, surname);
}

void EnterPerson (Person& p)
{
    char firstName[MAX_SIZE], surname[MAX_SIZE];
    cout << "Please enter first name: ";
    cin >> firstName;
    cout << "Please enter surname: ";
    cin >> surname;
    InitPerson(p, firstName, surname);
}

struct Client
{
    Person person;
    double money;
};

void PrintClient (Client c)
{
    cout << "Client information:" << endl;
    PrintPerson(c.person);
    cout << "Money:" << c.money;
}

void InitClient (Client& c, Person p, double money)
{
    c.person = p;
    c.money = money;
}

void EnterClient (Client& c)
{
    Person p;
    double money;
    cout << "Please enter the client`s information: " << endl;
    EnterPerson(p);
    cout << "Please enter the client`s money: ";
    cin >> money;
    InitClient(c, p, money);
}

void InitClients (Client* clientsArr, int numberOfClients)
{
    for(int i = 0; i < numberOfClients; i++)
    {
        EnterClient(clientsArr[i]);
    }
}

void PrintClients (Client* clientsArr, int numberOfClients)
{
    for (int i = 0; i < numberOfClients; i++)
    {
        PrintClient(clientsArr[i]);
        cout << endl;
    }
}

double TotalOfMoney (Client* clientsArr, int numberOfClients)
{
    double TotalOfMoney = 0;
    for (int i = 0; i < numberOfClients; i++)
    {
        TotalOfMoney += clientsArr[i].money;
    }

    return TotalOfMoney;
}

int main()
{
    Client clients[MAX_SIZE];
    int numberOfClients;
    cout << "Please enter the number of clients: ";
    cin >> numberOfClients;

    InitClients (clients, numberOfClients);
    PrintClients (clients, numberOfClients);
    cout << "The total sum of the client`s money is: " << TotalOfMoney(clients, numberOfClients);

    return 0;
}
