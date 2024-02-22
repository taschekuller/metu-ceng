#include "Matrix.h"

template <typename T> Matrix<T>::Matrix() : n(0), m(0) {}

template <typename T>
Matrix<T>::Matrix(int rows, int cols)
    : n(rows), m(cols), A(rows, std::vector<T>(cols, 0)) {}

template <typename T>
void Matrix<T>::readFromFile(const std::string &filename) {
  std::ifstream file(filename);
  if (!file.is_open()) {
    std::cerr << "Failed to open file: " << filename << std::endl;
    return;
  } else {
    file >> n >> m;
    A.resize(n, std::vector<T>(m, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        file >> A[i][j];
      }
    }
    file.close();
  }
}

template <typename T>
void Matrix<T>::writeToFile(const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to create output file: " << filename << std::endl;
        return;
    }
    file << n << " " << m << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            file << A[i][j] << " ";
        }
        file << std::endl;
    }
    file.close();
}

  template <typename T>
  Matrix<T> Matrix<T>::operator+(const Matrix &other) const {
    if (n != other.n || m != other.m) {
      throw std::invalid_argument(
          "Matrix dimensions do not match for addition.");
    }

    Matrix result(n, m);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        result.A[i][j] = A[i][j] + other.A[i][j];
      }
    }
    return result;
  }

  template <typename T>
  Matrix<T> Matrix<T>::operator*(const Matrix &other) const {
    if (m != other.n) {
      throw std::invalid_argument(
          "Matrix dimensions do not match for multiplication.");
    }

    Matrix result(n, other.m);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < other.m; j++) {
        for (int k = 0; k < m; k++) {
          result.A[i][j] += A[i][k] * other.A[k][j];
        }
      }
    }
    return result;
  }

  template <typename T> Matrix<T> Matrix<T>::operator!() const {
    Matrix result(m, n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        result.A[j][i] = A[i][j];
      }
    }
    return result;
  }

  template class Matrix<double>;