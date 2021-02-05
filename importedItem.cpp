//
// Created by Seçkin KÜKRER on 5.02.2021.
//

#include "importedItem.h"

double importedItem::tax() {
    return this->price + this->price * importedItem::taxRate;
}

double importedItem::taxRate = 0;

