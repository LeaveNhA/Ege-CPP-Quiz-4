//
// Created by Seçkin KÜKRER on 5.02.2021.
//

#ifndef QUIZ4_LOCALITEM_H
#define QUIZ4_LOCALITEM_H

#include "item.h"

class localItem : public item {
protected:
    static double taxRate;

public:
    static double getTaxRate() {
        return localItem::taxRate;
    }

    static void setTaxRate(double taxRate_) {
        localItem::taxRate = taxRate_;
    }

    localItem(std::string description_, double price_) : item(description_, price_) {}
    double tax();
};

#endif //QUIZ4_LOCALITEM_H
