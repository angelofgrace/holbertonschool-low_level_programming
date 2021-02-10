#include "holberton.h"

void jack_bauer(void)
{
	int hr_tens;

	hr_tens = 0;

	while (hr_tens <= 2)
	{
		int hr_ones;

		hr_ones = 0;

		if (hr_tens < 2)
		{
		while (hr_ones <= 10)
		{
			int min_tens;

			min_tens = 0;

			while (min_tens <= 5)
			{
				int min_ones;

				min_ones = 0;

				while (min_ones <= 9)
				{
					_putchar(hr_tens + '0');
					_putchar(hr_ones + '0');
					_putchar(':');
					_putchar(min_tens + '0');
					_putchar(min_ones + '0');
					_putchar('\n');

					min_ones++;
				}
				min_tens++;
			}	
			hr_ones++;
		}
		hr_tens++;
		}
		else 
		{
		while (hr_ones < 4)
                {
                        int min_tens;

                        min_tens = 0;

                        while (min_tens <= 5)
                        {
                                int min_ones;

                                min_ones = 0;

                                while (min_ones <= 9)
                                {
                                        _putchar(hr_tens + '0');
                                        _putchar(hr_ones + '0');
                                        _putchar(':');
                                        _putchar(min_tens + '0');
                                        _putchar(min_ones + '0');
                                        _putchar('\n');

                                        min_ones++;
                                }
                                min_tens++;
                        }
                        hr_ones++;
                }
		hr_tens++;
		}
	}
}
