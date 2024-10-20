#include<stdio.h>

int main() {

    int n;


    scanf("%d", &n);


    int matrix[n][n];


    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            scanf("%d", &matrix[i][j]);
        }
    }


    int result = 0;


    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            for (int k = 0; k < n; k++) {

                if (matrix[i][j] == matrix[i][k] && j != k) {

                result = 1;

                break;
                }

            if (matrix[i][j] == matrix[k][j] && i != k) {

                result = 1;

                break;
            }
        }
    }
}


    if (result == 0) {

        printf("Yay\n");
    } else {

        printf("Nay\n");
    }

    return 0;

}

