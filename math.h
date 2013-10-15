#ifndef MATH_H
#define MATH_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_menu_options (void);
void get_menu_input (int *menu_input);
void validate_menu_input (int *menu_input, int *menu_input_valid);
void convert_from_two_point (double *slope, double *x1_cooridnate, double *y1_coordinate, double *x2_cooridnate, double *y2_coordinate);
void convert_from_point_slope (double *x1_coordinate, double *y1_coordinate, double *slope);

#endif