#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

template <typename T>
class Matrix{
  
  private:
  int n,m;
  std::vector<std::vector<T>> A;

  public:
  Matrix();
  Matrix(int rows, int cols);

  void readFromFile(const std::string& filename);
  void writeToFile(const std::string& filename);

  Matrix operator+(const Matrix& other) const;
  Matrix operator*(const Matrix& other) const;
  Matrix operator!() const;


};

#endif