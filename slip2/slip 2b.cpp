//Slip 2-B)Write a C++ program to create a class Movie with data members M_Name, Release_Year, director_Name and Budget. (Use File Handling) Write necessary member functions to: i. Accept details for ‘n’ Movies from user and store it in a file “Movie.txt”. ii. Display Movie details from a file. iii. Count the number of objects stored in a file.
//Solution:
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Movie {
    string M_Name;
    int Release_Year;
    string director_Name;
    double Budget;

public:
    void accept_details() {
        cout << "Enter Movie Name: ";
        cin.ignore();
        getline(cin, M_Name);
        cout << "Enter Release Year: ";
        cin >> Release_Year;
        cout << "Enter Director Name: ";
        cin.ignore();
        getline(cin, director_Name);
        cout << "Enter Budget: ";
        cin >> Budget;
    }

    void display_details() {
        cout << "Movie Name: " << M_Name << endl;
        cout << "Release Year: " << Release_Year << endl;
        cout << "Director Name: " << director_Name << endl;
        cout << "Budget: " << Budget << endl;
    }

    void write_to_file() {
        ofstream file("Movie.txt", ios::app);
        file << M_Name << endl;
        file << Release_Year << endl;
        file << director_Name << endl;
        file << Budget << endl;
        file.close();
    }

    static void read_from_file() {
        ifstream file("Movie.txt");
        if (file.is_open()) {
            Movie m;
            while (file >> m.M_Name >> m.Release_Year >> m.director_Name >> m.Budget) {
                m.display_details();
                cout << endl;
            }
            file.close();
        } else {
            cout << "File not found!" << endl;
        }
    }

    static int count_objects_in_file() {
        ifstream file("Movie.txt");
        if (file.is_open()) {
            int count = 0;
            while (!file.eof()) {
                string line;
                getline(file, line);
                if (!line.empty()) {
                    count++;
                }
            }
            file.close();
            return count / 4;
        } else {
            cout << "File not found!" << endl;
            return 0;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of movies: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Movie m;
        cout << "Enter details for Movie " << i+1 << ":" << endl;
        m.accept_details();
        m.write_to_file();
    }

    cout << endl << "Movie details stored in the file Movie.txt:" << endl;
    Movie::read_from_file();

    cout << endl << "Number of objects stored in the file Movie.txt: " << Movie::count_objects_in_file() << endl;

    return 0;
}

