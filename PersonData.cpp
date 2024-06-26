// PersonData.cpp
#include "PersonData.h"
#include<iostream>
using namespace std;
// Accessors (getters)
string PersonData::getFirstName() const { return FirstName; }
string PersonData::getLastName() const { return LastName; }
string PersonData::getAddress() const { return Address; }
string PersonData::getCity() const { return City; }
string PersonData::getState() const { return State; }
string PersonData::getZip() const { return Zip; }
string PersonData::getPhoneNo() const { return PhoneNo; }

// Mutators (setters)
void PersonData::setFirstName(const string& first) { FirstName = first; }
void PersonData::setLastName(const string& last) { LastName = last; }
void PersonData::setAddress(const string& addr) { Address = addr; }
void PersonData::setCity(const string& city) { City = city; }
void PersonData::setState(const string& state) { State = state; }
void PersonData::setZip(const string& zip) { Zip = zip; }
void PersonData::setPhoneNo(const string& phone) { PhoneNo = phone; }

