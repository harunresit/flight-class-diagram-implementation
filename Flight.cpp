#include <iostream>
#include <stdlib.h>

using namespace std;

struct EGender
{
    bool gender;
};



class IPerson
{
private:
    /* data */
    string name;
    EGender gender;
public:
    IPerson(string _name, EGender _gender) : name{_name}, gender{_gender}
    {
    }
    string GetName(){
        return name;
    }
    EGender GetGender(){
        return gender;
    }
};

class CCrewMember : public IPerson      //Composition
{
private:
    /* data */
    int personel_number;
public:
    CCrewMember(const string& name, EGender gender, int p_number) : IPerson{name, gender}, personel_number{p_number}
    {
    }
    int GetPersonelNumber(){
        return personel_number;
    }
};


class CPassenger : public IPerson       //Composition 
{
private:
    /* data */
    bool need_assistance;
public:
    CPassenger(const string& name, EGender gender, bool n_assistance) : IPerson{name, gender}, need_assistance{n_assistance}
    {
    }
    bool NeedsAssistance(){
        return need_assistance;
    }
};


class CAirport          //Composition
{
private:
    /* data */
    string name;
public:
    CAirport(/* args */);
    string GetName(){
        return name;
    }
};


class IAirplane         //Aggregation
{
private:
    /* data */
    string name;
    int capacity;
public:
    IAirplane(string _name, int _capacity){
        name = _name;
        capacity = _capacity;
    }
    string GetName(){
        return name;
    }
    int GetCapacity(){
        return capacity;
    }
};

class CBoeing737 : public IAirplane
{
public:
    CBoeing737() : IAirplane("Boeing 737", 450){}
};

class CAirbusA320 : public IAirplane
{
public:
    CAirbusA320() : IAirplane("Airbus A320", 500){}
};


class CFlight
{
private:
    /* data */
    string flight_number;
    string departure_time;
    string arrival_time;

    CAirport departure_airport;
    CAirport arrival_airport;
    IAirplane *airplane;

    CPassenger passenger;
    CCrewMember crew_member;
public:
    CFlight(string flight_number,string departure_time,string arrival_time,CAirport departure_airport,
    CAirport arrival_airport,IAirplane *airplane,CPassenger passenger,CCrewMember crew_member) : flight_number{flight_number},
    departure_time{departure_time}, arrival_time{arrival_time}, departure_airport{departure_airport}, arrival_airport{arrival_airport},
    airplane{airplane}, passenger{passenger}, crew_member{crew_member}
    {
    }
    string GetFlightNumber(){
        return flight_number;
    }
    string GetDepartureTime(){
        return departure_time;
    }
    string GetArrivalTime(){
        return arrival_time;
    }
    CAirport GetDeperatureAirport(){
        return departure_airport;
    }
    CAirport GetArrivalAirport(){
        return arrival_airport;
    }
    void SetAirplane(IAirplane air_plane){
        *airplane = air_plane;
    }
};





int main(){

}