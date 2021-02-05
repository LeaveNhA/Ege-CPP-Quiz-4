#include "item.h"
#include "localItem.h"
#include "importedItem.h"
#include <iomanip>

#include <iostream>

int main() {
    {
        using namespace std;
        // declare a local item object with description "kalem" and price 1.5
        localItem kalem("kalem", 1.5);
        // declare a local item object with description "defter" and price 5.0
        localItem defter("defter", 5.0);
        // declare an imported item object with description "bilgisayar" and price 5000.0
        importedItem bilgisayar("bilgisayar", 5000.0);
        // declare an imported item object with description "telefon" and price 2500.0
        importedItem telefon("telefon", 2500.0);

        // set local item tax rate to 0.01
        localItem::setTaxRate(0.01);
        // set imported item tax rate to 0.05
        importedItem::setTaxRate(0.05);

        // put all declared local and imported item objects in an array
        item* objects[4] = {&kalem, &defter, &bilgisayar, &telefon};

        double totalTax;
        cout << "local item tax : " << localItem::getTaxRate() << endl
             << "imported item tax: " << importedItem::getTaxRate() << endl
             << endl
             << setw(40) << left << "Description" << setw(20) << left << "Price" << setw(20) << left << "Taxed Price" << endl;

        totalTax = 0;

        for(int i=0; i<4; i++)
        {
            cout << setw(40) << left << objects[i]->getDescription()
                 << setw(20) << left << objects[i]->getPrice()
                 << setw(20) << left << objects[i]->tax() << endl;

            totalTax +=  objects[i]->tax() - objects[i]->getPrice();
        }
        cout << "Total Tax: " << totalTax << endl;
    }

    return 0;
}
