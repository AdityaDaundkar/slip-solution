//Slip 19 - B) Create a C++ base class Media. Derive two different classes from it, class NewsPaper with data members N_Name, NEditor, N_Price, No_ofPages and class Magazine with data members M_Name, M_Editor, M_Price. Write a C++ program to accept and display information of both NewsPaper and Magazine. (Use pure virtual function)

#include<iostream>
#include<string>

using namespace std;

class Media {
protected:
    string name, editor;
    float price;
public:
    virtual void getDetails() = 0;
    virtual void display() = 0;
};

class Newspaper : public Media {
    int pages;
public:
    void getDetails() {
        cout << "Enter Newspaper Name: ";
        cin >> name;
        cout << "Enter Newspaper Editor: ";
        cin >> editor;
        cout << "Enter Newspaper Price: ";
        cin >> price;
        cout << "Enter Number of Pages: ";
        cin >> pages;
    }
    void display() {
        cout << "Newspaper Name: " << name << endl;
        cout << "Newspaper Editor: " << editor << endl;
        cout << "Newspaper Price: " << price << endl;
        cout << "Number of Pages: " << pages << endl;
    }
};

class Magazine : public Media {
    string category;
public:
    void getDetails() {
        cout << "Enter Magazine Name: ";
        cin >> name;
        cout << "Enter Magazine Editor: ";
        cin >> editor;
        cout << "Enter Magazine Price: ";
        cin >> price;
        cout << "Enter Magazine Category: ";
        cin >> category;
    }
    void display() {
        cout << "Magazine Name: " << name << endl;
        cout << "Magazine Editor: " << editor << endl;
        cout << "Magazine Price: " << price << endl;
        cout << "Magazine Category: " << category << endl;
    }
};

int main() {
    Media* mediaPtr[2];
    mediaPtr[0] = new Newspaper;
    mediaPtr[1] = new Magazine;

    for(int i=0; i<2; i++) {
        mediaPtr[i]->getDetails();
    }

    cout << endl << "Media Details" << endl;
    for(int i=0; i<2; i++) {
        mediaPtr[i]->display();
        cout << endl;
    }

    return 0;
}
