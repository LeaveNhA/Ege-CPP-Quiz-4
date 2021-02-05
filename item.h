//
// Created by Seçkin KÜKRER on 5.02.2021.
//

#ifndef QUIZ4_ITEM_H
#define QUIZ4_ITEM_H

#include <iostream>

class item {
protected:
    std::string description;
    double price;

public:
    item(std::string description_, double price_) :
            description(description_), price(price_) {}

    std::string getDescription();

    double getPrice();

    virtual double tax() = 0;
};

#endif //QUIZ4_ITEM_H
