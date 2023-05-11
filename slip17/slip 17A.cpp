#include <iostream>
#include <vector>

class MyMatrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:
    // Constructor
    MyMatrix(int r, int c) : rows(r), cols(c) {
        data.resize(r, std::vector<int>(c, 0));
    }

    // Method to accept matrix input
    void acceptInput() {
        std::cout << "Enter matrix elements row by row:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cin >> data[i][j];
            }
        }
    }

    // Method to display matrix
    void display() {
        std::cout << "Matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    // Overloading '-' operator for matrix subtraction
    MyMatrix operator- (const MyMatrix& other) {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrices must have the same dimensions");
        }
        MyMatrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns for matrix A:\n";
    std::cin >> rows >> cols;

    MyMatrix A(rows, cols);
    A.acceptInput();
    A.display();

    std::cout << "Enter number of rows and columns for matrix B:\n";
    std::cin >> rows >> cols;

    MyMatrix B(rows, cols);
    B.acceptInput();
    B.display();

    try {
        MyMatrix C = A - B;
        C.display();
    }
    catch (std::invalid_argument& e) {
        std::cerr << e.what() << "\n";
    }

    return 0;
}

