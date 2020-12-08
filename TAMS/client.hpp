#include <vector>
#include "utility.hpp"
#include "trip.hpp"

class Client
{
    private:
        vector<Trip*> trips;
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