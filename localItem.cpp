//
// Created by Seçkin KÜKRER on 5.02.2021.
//

#include "localItem.h"

double localItem::tax() {
    return this->price + this->price * localItem::taxRate;
}

double localItem::taxRate = 0;



