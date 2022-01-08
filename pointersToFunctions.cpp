#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <chrono>

using namespace std;


void broadCastEvent(void (*event)())
{
    event();
}

void fireAlarm()
{
    cout << "Fire!" << endl;
}


void floodAlarm()
{
    cout << "Flood!" << endl;
}


int main()
{
    srand(time(NULL));
    void (*pFireAlarm)() = &fireAlarm;
    void (*pFloodAlarm)() = &floodAlarm;

    while(true)
    {
        int eventId = rand() %2 + 1;

        switch (eventId)
        {
            case 1:
                broadCastEvent(pFireAlarm);
                break;
            case 2:
                broadCastEvent(pFloodAlarm);
                break;
        }

        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    return 0;
}