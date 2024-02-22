#include "Matrix.h"
#include <iostream>

int main() {

  int choice;

  std::cout << "Matrix Calculator\n";
  std::cout << "Choose one option to start:\n";

  Matrix<double> result;

  do {
    std::cout << "1. Matrix Addition\n 2. Matrix Multiplication\n 3. Matrix "
                 "Transpose\n 4. Quit\n";
    std::cin >> choice;
    if (choice == 4){
      break;
    }
    if (choice == 1 || choice == 2 || choice == 3) {
      std::string filename1, filename2;
      std::cout << "Enter a filename for first matrix: ";
      std::cin >> filename1;
      Matrix<double> matrix1;
      matrix1.readFromFile(filename1);

      if (choice == 1 || choice == 2) {
        std::cout << "Enter a filename for second matrix: ";
        std::cin >> filename2;
        Matrix<double> matrix2;
        matrix2.readFromFile(filename2);

        if (choice == 1) {
          result = matrix1 + matrix2;
        } else if (choice == 2) {
          result = matrix1 * matrix2;
        }
      } else if (choice == 3) {
        result = !matrix1;
      }

      result.writeToFile(filename1 + "_out.txt");
      std::cout << "The result written in " << filename1 + "_out.txt"
                << std::endl;
    }
  } while (choice != 4);
  std::cout << "Invalid choice program will be terminated!!";
  return 0;
}
