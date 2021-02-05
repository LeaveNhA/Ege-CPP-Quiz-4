//
// Created by Seçkin KÜKRER on 5.02.2021.
//

#ifndef QUIZ4_IMPORTEDITEM_H
#define QUIZ4_IMPORTEDITEM_H

#include "item.h"

class importedItem : public item{
protected:
    static double taxRate;

public:
    static double getTaxRate() {
        return importedItem::taxRate;
    }

    static void setTaxRate(double taxRate_) {
        importedItem::taxRate = taxRate_;
    }

    importedItem(std::string description_, double price_):
    item(description_, price_) {}

    double tax();
};


#endif //QUIZ4_IMPORTEDITEM_H
