#ifndef SQUARE_H
#define SQUARE_H

typedef struct _solution {
    double x_1, x_2, D;
    int roots, is_done;
} solution;

solution square(double a, double b, double c);

#endif // SQUARE_H
