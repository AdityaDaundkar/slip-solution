#include <iostream>
using namespace std;

class Product {
    private:
        int product_id;
        string product_name;
        int qty;
        double price;
        static int count; // static data member

    public:
        Product() {
            product_id = 0;
            product_name = "";
            qty = 0;
            price = 0.0;
            count++;
        }

        Product(int id, string name, int q, double p) {
            product_id = id;
            product_name = name;
            qty = q;
            price = p;
            count++;
        }

        void accept() {
            cout << "Enter Product ID: ";
            cin >> product_id;
            cout << "Enter Product Name: ";
            cin >> product_name;
            cout << "Enter Quantity: ";
            cin >> qty;
            cout << "Enter Price: ";
            cin >> price;
            count++;
        }

        void display() {
            cout << "Product ID: " << product_id << endl;
            cout << "Product Name: " << product_name << endl;
            cout << "Quantity: " << qty << endl;
            cout << "Price: " << price << endl;
        }

        static void displayCount() { // static member function
            cout << "Number of Products: " << count << endl;
        }
};

int Product::count = 0; // initialize static data member

int main() {
    Product p1;
    p1.accept();
    p1.display();
    Product::displayCount();

    Product p2(101, "Laptop", 5, 45000);
    p2.display();
    Product::displayCount();

    return 0;
}
