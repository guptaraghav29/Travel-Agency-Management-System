#include <vector>
#include "trip.hpp"

class Client
{
    private:
        vector<Trip*> trips;
        int choice(int, int);
    public:
        ~Client();
        void run();
        void listTrips();
        void addTrip();
        void deleteTrip();
        void editTrip();
        void exportTrips();
        void importTrips();
};