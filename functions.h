#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>

void swaprow(std::vector<std::vector<float>>& matrix, int row1, int row2, int n);
void row_operations(std::vector<std::vector<float>>& matrix, int order_of_matrix);
#endif