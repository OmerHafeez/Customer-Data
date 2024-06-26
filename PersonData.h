#pragma once
// PersonData.h
#define PERSON_DATA_H

#include <string>
#include<iostream>
using namespace std;
class PersonData {
private:
    string FirstName;
    string LastName;
    string Address;
    string City;
    string State;
    string Zip;
    string PhoneNo;

public:
    // Accessors (getters)
    string getFirstName() const;
    string getLastName() const;
    string getAddress() const;
    string getCity() const;
    string getState() const;
    string getZip() const;
    string getPhoneNo() const;

    // Mutators (setters)
    void setFirstName(const string& first);
    void setLastName(const string& last);
    void setAddress(const string& addr);
    void setCity(const string& city);
    void setState(const string& state);
    void setZip(const string& zip);
    void setPhoneNo(const string& phone);
};



