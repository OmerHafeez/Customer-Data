#pragma once
#define CUSTOMER_DATA_H

#include "PersonData.h"
#include<iostream>
using namespace std;
class CustomerData : public PersonData {
private:
    int CustomerNumber;
    bool MailingList;

public:
    // Accessors (getters)
    int getCustomerNumber() const;
    bool getMailingList() const;

    // Mutators (setters)
    void setCustomerNumber(int number);
    void setMailingList(bool mailing);

    // Input customer data (function overloading)
    void InputCustomerData();

    // Display customer data (function overloading)
    void DisplayCustomerData();
};




