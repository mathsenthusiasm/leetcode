#include <stdio.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_eigen.h>

int main() {
    // Define a symmetric 3x3 matrix
    double data[] = {
        4, 1, 1,
        1, 3, 0,
        1, 0, 2
    };

    gsl_matrix_view m = gsl_matrix_view_array(data, 3, 3);

    gsl_vector *eval = gsl_vector_alloc(3);
    gsl_matrix *evec = gsl_matrix_alloc(3, 3);

    gsl_eigen_symmv_workspace * w = gsl_eigen_symmv_alloc(3);
    gsl_eigen_symmv(&m.matrix, eval, evec, w);
    gsl_eigen_symmv_free(w);

    gsl_eigen_symmv_sort(eval, evec, GSL_EIGEN_SORT_VAL_ASC);

    // Print eigenvalues
    printf("Eigenvalues:\n");
    for (int i = 0; i < 3; i++) {
        printf("%g\n", gsl_vector_get(eval, i));
    }

    // Print eigenvectors
    printf("\nEigenvectors (columns):\n");
    for (int i = 0; i < 3; i++) {
        gsl_vector_view v = gsl_matrix_column(evec, i);
        for (int j = 0; j < 3; j++) {
            printf("%g ", gsl_vector_get(&v.vector, j));
        }
        printf("\n");
    }

    // Check orthogonality of eigenvectors for i != j
    printf("\nDot products between distinct eigenvectors:\n");
    for (int i = 0; i < 3; i++) {
        gsl_vector_view vi = gsl_matrix_column(evec, i);
        for (int j = i+1; j < 3; j++) {
            gsl_vector_view vj = gsl_matrix_column(evec, j);
            double dot = 0.0;
            for (int k = 0; k < 3; k++) {
                dot += gsl_vector_get(&vi.vector, k) * gsl_vector_get(&vj.vector, k);
            }
            printf("v_%d^T v_%d = %g\n", i, j, dot);
        }
    }

    gsl_vector_free(eval);
    gsl_matrix_free(evec);

    return 0;
}
