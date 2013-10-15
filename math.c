#include "math.h"

void print_menu_options (void)
{
	printf("Select the form which you would like to convert to slope-intercept form:\n");
	printf("1) Two-point form (you know two points on a line)\n");
	printf("2) Point-slope form (you know the line's slope and one point)\n");
	printf("3) Exit\n");
}
void get_menu_input (int *menu_input)
{
	scanf("%d", menu_input);
}
void validate_menu_input (int *menu_input, int *menu_input_valid)
{
	system("cls");
	if (*menu_input >= 1 && *menu_input <= 3)
	{
		*menu_input_valid = 1;
	}
	else
	{
		menu_input_valid = 0;
		system("cls");
		printf("Please enter a valid input.\n");
	}
}
void convert_from_two_point (double *slope, double *x1_cooridnate, double *y1_coordinate, double *x2_cooridnate, double *y2_coordinate)
{
	double term_a = 0.0;

	printf("Enter the x-y coordinates of point 1 seperated by a space: \n");
	scanf("%lf%lf", x1_cooridnate, y1_coordinate);

	printf("Enter the x-y coordinates of point 2 seperated by a space: \n");
	scanf("%lf%lf", x2_cooridnate, y2_coordinate);

	printf("Two-point form: m = (%.2lf - %.2lf) / (%.2lf - %.2lf)\n", *y2_coordinate, *y1_coordinate, *x2_cooridnate, *x1_cooridnate);

	if (*x2_cooridnate - *x1_cooridnate == 0)
	{
		printf("Denominator is zero.  Please enter another point.\n");
		return;
	}

	*slope = (*y2_coordinate - *y1_coordinate) / (*x2_cooridnate - *x1_cooridnate);	

	if (*y1_coordinate < 0)
	{
		term_a = ((*slope) * (*x1_cooridnate)) - *y1_coordinate;
	}
	if (*y1_coordinate >= 0)
	{
		term_a = ((*slope) * (*x1_cooridnate)) + *y1_coordinate;
	}	
	if (term_a < 0)
	{
		printf("Slope-intercept form: y = %.2lfx - %.2lf\n", term_a);
	}
	if (term_a >= 0)
	{
		printf("Slope-intercept form: y = %.2lfx + %.2lf\n", term_a);
	}
}
void convert_from_point_slope (double *x1_coordinate, double *y1_coordinate, double *slope)
{
	double term_a = 0.0;
	double b = 0.0;
	printf("Please enter the x-y coordinates of a point on the line seperated by a space:\n");
	scanf("%lf%lf", x1_coordinate, y1_coordinate);

	printf("Please enter the slope of the line:\n");
	scanf("%lf", slope);

	printf("Point-slope form: y - %.2lf = %.2lf(x - %.2lf)\n", *y1_coordinate, *slope, *x1_coordinate);

	b = (*slope * *x1_coordinate) - *y1_coordinate;

	if (term_a < 0.0)
	{
		printf("Slope-intercept form: y = %.2lfx - %.2lf\n", *slope, b);
	}
	if (term_a >= 0.0)
	{
		printf("Slope-intercept form: y = %.2lfx + %.2lf\n", *slope, b);
	}
	
}