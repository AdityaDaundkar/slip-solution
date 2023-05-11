//Slip 16 - B) Create a C++ class MyMatrix and Write necessary member functions for the following: i. To accept a Matrix ii. To display a Matrix iii. Overload unary ‘-* operatorto calculate transpose of a Matrix. iv. Overload unary ‘++’ operator to increment matrix elements by 1.


#include <iostream>
#include <vector>

using namespace std;

class MyMatrix {
private:
    vector<vector<int>> matrix;
public:
    // Constructor to initialize an empty matrix
    MyMatrix() {}

    // Constructor to initialize a matrix with given values
    MyMatrix(vector<vector<int>> mat) {
        matrix = mat;
    }

    // Function to accept a matrix from user input
    void accept() {
        int rows, cols;
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;
        matrix.resize(rows);
        for (int i = 0; i < rows; i++) {
            matrix[i].resize(cols);
            for (int j = 0; j < cols; j++) {
                cout << "Enter element at position (" << i << ", " << j << "): ";
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display a matrix
    void display() {
        for (vector<int> row : matrix) {
            for (int elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    // Overloading the unary - operator to calculate the transpose of a matrix
    MyMatrix operator-() {
        vector<vector<int>> transposed(matrix[0].size(), vector<int>(matrix.size()));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                transposed[j][i] = matrix[i][j];
            }
        }
        return MyMatrix(transposed);
    }

    // Overloading the unary ++ operator to increment matrix elements by 1
    MyMatrix operator++() {
        for (vector<int>& row : matrix) {
            for (int& elem : row) {
                elem++;
            }
        }
        return *this;
    }
};

int main() {
    MyMatrix mat;
    mat.accept();
    cout << "Original matrix:" << endl;
    mat.display();

    cout << "Transpose of matrix:" << endl;
    (-mat).display();

    cout << "Matrix with elements incremented by 1:" << endl;
    (++mat).display();

    return 0;
}
