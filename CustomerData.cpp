// CustomerData.cpp
#include "CustomerData.h"
#include <iostream>
using namespace std;
// Accessors (getters)
int CustomerData::getCustomerNumber() const { return CustomerNumber; }
bool CustomerData::getMailingList() const { return MailingList; }

// Mutators (setters)
void CustomerData::setCustomerNumber(int number) { CustomerNumber = number; }
void CustomerData::setMailingList(bool mailing) { MailingList = mailing; }

// Input customer data (function overloading)
void CustomerData::InputCustomerData() {
    cout << "Enter Customer Number: ";
    cin >> CustomerNumber;

    // Input PersonData
    cout << "Enter First Name: ";
    cin >> getFirstName();
    cout << "Enter Last Name: ";
    cin >> getLastName();
    cout << "Enter Address: ";
    cin.ignore(); // Ignore newline left in the buffer
    getline(std::cin, getAddress());
    cout << "Enter City: ";
    cin >> getCity();
    cout << "Enter State: ";
    cin >> getState();
    cout << "Enter Zip: ";
    cin >> getZip();
    cout << "Enter Phone Number: ";
    cin >> getPhoneNo();

    // Input CustomerData
    cout << "Do you want to be on the mailing list? (1 for Yes, 0 for No): ";
    cin >> MailingList;
}

// Display customer data (function overloading)
void CustomerData::DisplayCustomerData() {
    cout << "\nCustomer Information:\n";
    cout << "Customer Number: " << CustomerNumber << "\n";
    cout << "Name: " << getFirstName() << " " << getLastName() << "\n";
    cout << "Address: " << getAddress() << ", " << getCity() << ", " << getState() << ", " << getZip() << "\n";
    cout << "Phone Number: " << getPhoneNo() << "\n";
    cout << "Mailing List: " << (MailingList ? "Yes" : "No") << "\n";
}

