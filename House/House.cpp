#include <iostream>
using namespace std;

#define MAX_PRODUCT 50



//Sructure of Products--------
struct Product_haus {
    char name[50];            // Product name
    char manufacturer[50];    // Manufacturer
    char group[30];           // Product group (e.g., water, canned food)
    double price;             // Price
    char arrivalDate[30];     // Arrival date (e.g., "2026-05-14")
    char expirationDate[30];  // Expiration date
};
//------------------




//num1 Add Function---------------
void add_product(Product_haus products[], int& count) {
    if (count >= MAX_PRODUCT) {
        cout << "Warehouse is full. Cannot add more products." << endl;
        return;
    }

    cout << "Enter product name: ";
    cin >> products[count].name;

    cout << "Enter manufacturer: ";
    cin >> products[count].manufacturer;

    cout << "Enter product group: ";
    cin >> products[count].group;

    cout << "Enter price: ";
    cin >> products[count].price;

    cout << "Enter arrival date (YYYY-MM-DD): ";
    cin >> products[count].arrivalDate;

    cout << "Enter expiration date (YYYY-MM-DD): ";
    cin >> products[count].expirationDate;

    count++;
}
//----------------

//num2 Del Function ----------------
void dell_product(Product_haus products[], int& count, int neg) {
    for (int i = neg; i < count - 1; i++) {
        products[i] = products[i + 1];
    }
    count--; // reduce the product in structure of Products
}
//-----------------

//num3 Replace-------------------
void replace_product(Product_haus products[], int& count, int& pos) {
    cout << "Enter new product name: ";
    cin >> products[pos].name;
    cout << "Enter new manufacturer: ";
    cin >> products[pos].manufacturer;
    cout << "Enter new product group: ";
    cin >> products[pos].group;
    cout << "Enter new price: ";
    cin >> products[pos].price;
    cout << "Enter new arrival date (YYYY-MM-DD): ";
    cin >> products[pos].arrivalDate;
    cout << "Enter new expiration date (YYYY-MM-DD): ";
    cin >> products[pos].expirationDate;
}

//NUM4 Search by (name, manufacturer, price, group, arrival date, expiration date) ----------------------------------------

//Search by Name product
void search_name(Product_haus products[], int& count) {
    char pr_name[50];
    int found = 0;

    cout << "Enter product name: " << endl;
    cin >> pr_name;

    for (int i = 0; i < count; i++) {
        if (products[i].name , pr_name) {
            cout << "Product found:\n";
            cout << "Name: " << products[i].name << endl;
            cout << "Manufacturer: " << products[i].manufacturer << endl;
            cout << "Group: " << products[i].group << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Arrival date: " << products[i].arrivalDate << endl;
            cout << "Expiration date: " << products[i].expirationDate << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error Name" << endl;
    }
}

//Search by Manufacturer product
void search_manufacturer(Product_haus products[], int& count) {
    char pr_manufacturer[50];
    int found = 0;

    cout << "Enter product manufacturer" << endl;
    cin >> pr_manufacturer;

    for (int i = 0; i < count; i++) {
        if (products[i].manufacturer , pr_manufacturer) {
            cout << "Product found:\n";
            cout << "Name: " << products[i].name << endl;
            cout << "Manufacturer: " << products[i].manufacturer << endl;
            cout << "Group: " << products[i].group << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Arrival date: " << products[i].arrivalDate << endl;
            cout << "Expiration date: " << products[i].expirationDate << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error Manufacturer" << endl;
    }
}

//Search by Price product
void search_price(Product_haus products[], int& count) {
    double pr_price;
    int found = 0;

    cout << "Enter product price" << endl;
    cin >> pr_price;

    for (int i = 0; i < count; i++) {
        if (products[i].price , pr_price) {
            cout << "Product found:\n";
            cout << "Name: " << products[i].name << endl;
            cout << "Manufacturer: " << products[i].manufacturer << endl;
            cout << "Group: " << products[i].group << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Arrival date: " << products[i].arrivalDate << endl;
            cout << "Expiration date: " << products[i].expirationDate << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error Price" << endl;
    }
}

//Search by Group product
void search_group(Product_haus products[], int& count) {
    char pr_group[50];
    int found = 0;

    cout << "Enter product group" << endl;
    cin >> pr_group;

    for (int i = 0; i < count; i++) {
        if (products[i].group , pr_group) {
            cout << "Product found:\n";
            cout << "Name: " << products[i].name << endl;
            cout << "Manufacturer: " << products[i].manufacturer << endl;
            cout << "Group: " << products[i].group << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Arrival date: " << products[i].arrivalDate << endl;
            cout << "Expiration date: " << products[i].expirationDate << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error Group" << endl;
    }
}

//Search by Arrivel date product
void search_arriveldate(Product_haus products[], int& count) {
    int pr_arrdate;
    int found = 0;

    cout << "Enter product group" << endl;
    cin >> pr_arrdate;

    for (int i = 0; i < count; i++) {
        if (products[i].arrivalDate, pr_arrdate) {
            cout << "Product found:\n";
            cout << "Name: " << products[i].name << endl;
            cout << "Manufacturer: " << products[i].manufacturer << endl;
            cout << "Group: " << products[i].group << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Arrival date: " << products[i].arrivalDate << endl;
            cout << "Expiration date: " << products[i].expirationDate << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error Group" << endl;
    }
}

// Search by Expiration date:
void search_expirationdate(Product_haus products[], int& count) {
    int pr_expdate;
    int found = 0;

    cout << "Enter product group" << endl;
    cin >> pr_expdate;

    for (int i = 0; i < count; i++) {
        if (products[i].expirationDate, pr_expdate) {
            cout << "Product found:\n";
            cout << "Name: " << products[i].name << endl;
            cout << "Manufacturer: " << products[i].manufacturer << endl;
            cout << "Group: " << products[i].group << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Arrival date: " << products[i].arrivalDate << endl;
            cout << "Expiration date: " << products[i].expirationDate << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Error Arriveldate" << endl;
    }
}


//NUM5 Sort by (price, group) ----------------------------------


// Sort by Price product
void sort_by_price(Product_haus products[], int count) {

    for (int i = 0; i < count - 1; i++) {

        for (int j = 0; j < count - i - 1; j++) {

            if (products[j].price > products[j + 1].price) {
                Product_haus tmp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = tmp;
            }
        }
    }
}

//Sort by Group product
void sort_by_group(Product_haus products[], int count) {

    for (size_t i = 0; i < count - 1; i++) {

        for (size_t j = 0; j < count - i - 1; j++) {

            if (products[j].group > products[j + 1].group) {
                Product_haus srt = products[j];
                products[j] = products[j + 1];
                products[j + 1] = srt;
            }
        }
    }
}

//Show all products
void show_product(Product_haus products[], int count) {
    for (size_t i = 0; i < count; i++) {
        cout << "Product found:\n";
        cout << "Name: " << products[i].name << endl;
        cout << "Manufacturer: " << products[i].manufacturer << endl;
        cout << "Group: " << products[i].group << endl;
        cout << "Price: " << products[i].price << endl;
        cout << "Arrival date: " << products[i].arrivalDate << endl;
        cout << "Expiration date: " << products[i].expirationDate << endl;
    }
}


void print_struct_array(Product_haus* products, int count) {
    for (int i = 0; i < count; i++) {
        cout << i + 1 << "Name: " << products[i].name << "Manufacturer: " << products[i].manufacturer
            << "Group: " << products[i].group
            << "Price: " << products[i].price
            << "Arrival: " << products[i].arrivalDate
            << "Expiration: " << products[i].expirationDate
            << endl;
    }
}



int main() {


    Product_haus products[MAX_PRODUCT];
    int count = 0;
    int choice = 0;

    //Products
    products[0] = { "Milk",   "Farm",      "Food",   25.5, "2026-05-14", "2026-06-14" };
    products[1] = { "Water",  "Spring",    "Drink",  10.0, "2026-05-15", "2026-07-15" };
    products[2] = { "Bread",  "Bakery",    "Food",   15.0, "2026-05-16", "2026-05-20" };
    products[3] = { "Cheese", "DairyFarm", "Food",   45.0, "2026-05-10", "2026-06-10" };
    products[4] = { "Juice",  "FreshCo",   "Drink",  30.0, "2026-05-12", "2026-06-12" };
    products[5] = { "Butter", "Farm",      "Food",   55.0, "2026-05-11", "2026-06-01" };
    products[6] = { "Cola",   "CoolDrink", "Drink",  20.0, "2026-05-13", "2026-08-13" };
    products[7] = { "Rice",   "GrainCo",   "Cereal", 18.0, "2026-05-01", "2027-05-01" };
    products[8] = { "Sugar",  "SweetCo",   "Cereal", 22.0, "2026-04-20", "2027-04-20" };
    products[9] = { "Oil",    "GoldPress", "Food",   60.0, "2026-05-05", "2026-11-05" };

    count = 10;

    cout << "Input data:\n";
    print_struct_array(products, count);

    while (true) {
        cout << "\n+------------------------------+\n";
        cout << "|        Warehouse  2.0        |\n";
        cout << "+------------------------------+\n";
        cout << "|  1. Add product              |\n";
        cout << "|  2. Delete product           |\n";
        cout << "|  3. Replace product          |\n";
        cout << "|  4. Search by name           |\n";
        cout << "|  5. Search by manufacturer   |\n";
        cout << "|  6. Search by price          |\n";
        cout << "|  7. Search by group          |\n";
        cout << "|  8. Search by arrival date   |\n";
        cout << "|  9. Search by expiration date|\n";
        cout << "| 10. Sort by price            |\n";
        cout << "| 11. Sort by group            |\n";
        cout << "| 12. Show all products        |\n";
        cout << "|  0. Exit                     |\n";
        cout << "+------------------------------+\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            add_product(products, count);
        }
        else if (choice == 2) {
            int neg;
            cout << "Enter position to delete (0-based): ";
            cin >> neg;
            dell_product(products, count, neg);
        }
        else if (choice == 3) {
            int pos;
            cout << "Enter position to replace (0-based): ";
            cin >> pos;
            replace_product(products, count, pos);
        }
        else if (choice == 4) {
            search_name(products, count);
        }
        else if (choice == 5) {
            search_manufacturer(products, count);
        }
        else if (choice == 6) {
            search_price(products, count);
        }
        else if (choice == 7) {
            search_group(products, count);
        }
        else if (choice == 8) {
            search_arriveldate(products, count);
        }
        else if (choice == 9) {
            search_expirationdate(products, count);
        }
        else if (choice == 10) {
            sort_by_price(products, count);
        }
        else if (choice == 11) {
            sort_by_group(products, count);
        }
        else if (choice == 12) {
            show_product(products, count);
        }
        else if (choice == 0) {
            cout << "Exit...\n";
            return 0;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
}
