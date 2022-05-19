// Copyright 2022 Alimov Mikhail
#ifndef MODULES_TASK_2_ALIMOV_M_MATRIX_M_CANNON_OMP_MATRIX_M_CANNON_H_
#define MODULES_TASK_2_ALIMOV_M_MATRIX_M_CANNON_OMP_MATRIX_M_CANNON_H_

#include <vector>
#include <complex>
#include <iostream>
#include <cmath>

using matrix = std::vector<std::vector<double>>;

matrix RandomMatrix(const int n);

matrix NaiveMulti(const matrix &A, const matrix &B);
matrix BlockMulti(const matrix &A, const matrix &B, const int &blockSize);
matrix AlgorithmCannon(const matrix &A,
  const matrix &B,
  const int &num_threads);

bool CompareMatrix(const matrix &A, const matrix &B);
bool CompareValues(const double &a, const double &b);

#endif  // MODULES_TASK_2_ALIMOV_M_MATRIX_M_CANNON_OMP_MATRIX_M_CANNON_H_
