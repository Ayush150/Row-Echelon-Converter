#include <iostream>
#include <vector>

using namespace std;

int main() {
    int order_of_matrix;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &order_of_matrix);
    vector<vector<float>> matrix(order_of_matrix, vector<float>(order_of_matrix));
    printf("Enter the elements of the matrix row-wise:\n");
    for (int i = 0; i < order_of_matrix; i++) {
        for (int j = 0; j < order_of_matrix; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    
    // printf("The entered matrix is:\n");
    // for (int i = 0; i < order_of_matrix; i++) {
    //     for (int j = 0; j < order_of_matrix; j++) {
    //         printf("%.2f ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }   
}