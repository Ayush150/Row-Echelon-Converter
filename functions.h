#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>

void swaprow(std::vector<std::vector<float>>& matrix, int row1, int row2, int n);
void multiplyrow(std::vector<std::vector<float>>& matrix, int row, float scalar, int n);
void addrow(std::vector<std::vector<float>>& matrix, int targetRow, int sourceRow, float scalar, int n);
#endif