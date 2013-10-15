#include "math.h"

int main (void)
{
	int menu_input = 1;
	int menu_input_valid = 0;
	double slope = 0.0;
	double function_output = 0.0;
	double x1_coordinate = 0.0, y1_coordinate = 0.0, x2_coordinate = 0.0, y2_coordinate = 0.0; 
	while (menu_input != 3)
	{

		while (menu_input_valid == 0)
		{
			print_menu_options();
			get_menu_input(&menu_input);
			validate_menu_input(&menu_input, &menu_input_valid);
		}

		switch (menu_input)
		{
		case 1:
			convert_from_two_point(&slope, &x1_coordinate, &y1_coordinate, &x2_coordinate, &y2_coordinate);
			break;
		case 2:
			convert_from_point_slope(&x1_coordinate, &y1_coordinate, &slope);
			break;
		case 3:
			exit(0);
			break;
		}

		return 0;
	}
}