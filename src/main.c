#include "stm32f0xx.h"

/*

import cmath

ledpos = [

 [ 11.650411,  1.320647,   0.000000, 0],
 [  8.390671,  7.840126,   2.368000, 1],
 [  8.390671,  7.840126,  -2.368000, 2],
 [ 10.405368,  3.810732,   3.832000, 2],
 [ 10.405368,  3.810732,  -3.832000, 1],
 [  9.848587,  4.924294,   0.000000, 3],
 [  3.600175,  1.320647, -11.080199, 0],
 [  4.844962,  7.840126,  -7.248250, 1],
 [  0.340758,  7.840126,  -8.711755, 2],
 [  6.859884,  3.810732,  -8.711940, 2],
 [ -0.429013,  3.810732, -11.080246, 1],
 [  3.043381,  4.924294,  -9.366563, 3],
 [ -9.425380,  1.320647,  -6.847940, 0],
 [ -5.396320,  7.840126,  -6.847665, 1],
 [ -8.180071,  7.840126,  -3.016160, 2],
 [ -6.165727,  3.810732,  -9.216275, 2],
 [-10.670513,  3.810732,  -3.015969, 1],
 [ -7.967675,  4.924294,  -5.788854, 3],
 [ -9.425380,  1.320647,   6.847940, 0],
 [ -8.180071,  7.840126,   3.016160, 1],
 [ -5.396320,  7.840126,   6.847665, 2],
 [-10.670513,  3.810732,   3.015969, 2],
 [ -6.165727,  3.810732,   9.216275, 1],
 [ -7.967675,  4.924294,   5.788854, 3],
 [  3.600175,  1.320647,  11.080199, 0],
 [  0.340758,  7.840126,   8.711755, 1],
 [  4.844962,  7.840126,   7.248250, 2],
 [ -0.429013,  3.810732,  11.080246, 2],
 [  6.859884,  3.810732,   8.711940, 1],
 [  3.043381,  4.924294,   9.366563, 3],
 [  3.259529, 11.011055,  -2.368187, 0],
 [ -1.245520, 11.011055,   3.831932, 1],
 [ -4.029271, 11.011055,   0.000428, 2],
 [  3.259619, 11.011055,   2.368360, 2],
 [ -1.245167, 11.011055,  -3.831946, 1],
 [  0.000000, 11.011055,   0.000000, 3],

 ]

print "uint8_t led_phases[] = {",
for x, y, z, c in ledpos:
	a, b = x, z
	print str(int(256*cmath.phase(complex(a, b))/cmath.pi/2)+128)+",",

print "};"

for x, y, z, c in ledpos:
	a, b = (x**2.+z**2.)**.5, y
	print str(int(4*256*cmath.phase(complex(a, b))/cmath.pi/2))+",",

for x, y, z, c in ledpos:
	a, b = z, y
	print str(int(512*cmath.phase(complex(a, b))/cmath.pi/2))+",",

for x, y, z, c in ledpos:
	a, b = x, z
	if c == 3:
		a = -a
	print str(int(256*cmath.phase(complex(a, b))/cmath.pi/2)+128)+",",

*/

uint8_t led_phases[] =
{

//128, 139, 117, 142, 114, 128, 77, 89, 66, 92, 63, 77, 26, 37, 15, 40, 12, 26, 230, 241, 219, 244, 216, 230, 179, 190, 167, 193, 164, 179, 103, 204, 255, 153, 52, 128,

18, 119, 119, 53, 53, 75, 18, 119, 119, 53, 53, 75, 18, 119, 119, 53, 53, 75, 18, 119, 119, 53, 53, 75, 18, 119, 119, 53, 53, 75, 198, 198, 198, 198, 198, 0,

//128, 104, 151, 63, 192, 128, 246, 188, 196, 222, 229, 216, 240, 186, 157, 224, 182, 198, 15, 98, 69, 73, 31, 57, 9, 59, 67, 26, 33, 39, 145, 100, 127, 110, 155, 128,

//128, 139, 117, 142, 114, 256, 77, 89, 66, 92, 63, 52, 26, 37, 15, 40, 12, 103, 230, 241, 219, 244, 216, 153, 179, 190, 167, 193, 164, 204, 103, 204, 255, 153, 52, 256,
};


uint8_t fade[] =
{
	// [ int(((.5-cos(2*pi*x/128.)*.5)**2.6)*128) for x in range(128) ]*2
	//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 4, 6, 7, 8, 10, 12, 13, 16, 18, 21, 23, 26, 30, 33, 37, 40, 44, 49, 53, 57, 62, 66, 71, 75, 80, 84, 89, 93, 97, 101, 105, 109, 112, 115, 118, 120, 123, 124, 126, 127, 127, 128, 127, 127, 126, 124, 123, 120, 118, 115, 112, 109, 105, 101, 97, 93, 89, 84, 80, 75, 71, 66, 62, 57, 53, 49, 44, 40, 37, 33, 30, 26, 23, 21, 18, 16, 13, 12, 10, 8, 7, 6, 4, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 4, 6, 7, 8, 10, 12, 13, 16, 18, 21, 23, 26, 30, 33, 37, 40, 44, 49, 53, 57, 62, 66, 71, 75, 80, 84, 89, 93, 97, 101, 105, 109, 112, 115, 118, 120, 123, 124, 126, 127, 127, 128, 127, 127, 126, 124, 123, 120, 118, 115, 112, 109, 105, 101, 97, 93, 89, 84, 80, 75, 71, 66, 62, 57, 53, 49, 44, 40, 37, 33, 30, 26, 23, 21, 18, 16, 13, 12, 10, 8, 7, 6, 4, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

//	[ int(((.5-cos(2*pi*x/256.)*.5)**2.2)*128) for x in range(256) ]
	//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 22, 23, 24, 26, 27, 29, 30, 32, 34, 35, 37, 39, 41, 43, 44, 46, 48, 50, 52, 54, 56, 58, 60, 63, 65, 67, 69, 71, 73, 75, 77, 79, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 101, 103, 105, 107, 108, 110, 111, 113, 114, 116, 117, 118, 119, 121, 122, 122, 123, 124, 125, 125, 126, 126, 127, 127, 127, 127, 128, 127, 127, 127, 127, 126, 126, 125, 125, 124, 123, 122, 122, 121, 119, 118, 117, 116, 114, 113, 111, 110, 108, 107, 105, 103, 101, 100, 98, 96, 94, 92, 90, 88, 86, 84, 82, 79, 77, 75, 73, 71, 69, 67, 65, 63, 60, 58, 56, 54, 52, 50, 48, 46, 44, 43, 41, 39, 37, 35, 34, 32, 30, 29, 27, 26, 24, 23, 22, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 8, 7, 6, 6, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

	//[ int(((.5-cos(2*pi*x/128.)*.5)**2.2)*128) for x in range(128) ] + [ 0 ]*128
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 3, 4, 5, 6, 8, 9, 11, 13, 15, 17, 19, 22, 24, 27, 30, 34, 37, 41, 44, 48, 52, 56, 60, 65, 69, 73, 77, 82, 86, 90, 94, 98, 101, 105, 108, 111, 114, 117, 119, 122, 123, 125, 126, 127, 127, 128, 127, 127, 126, 125, 123, 122, 119, 117, 114, 111, 108, 105, 101, 98, 94, 90, 86, 82, 77, 73, 69, 65, 60, 56, 52, 48, 44, 41, 37, 34, 30, 27, 24, 22, 19, 17, 15, 13, 11, 9, 8, 6, 5, 4, 3, 3, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

	//[ int(((.5-cos(2*pi*x/64.)*.5)**2.2)*64) for x in range(64) ] + [ 0 ]*192
	//0, 0, 0, 0, 0, 0, 0, 1, 1, 3, 4, 6, 9, 13, 17, 22, 27, 34, 41, 48, 56, 65, 73, 82, 90, 98, 105, 111, 117, 122, 125, 127, 128, 127, 125, 122, 117, 111, 105, 98, 90, 82, 73, 65, 56, 48, 41, 34, 27, 22, 17, 13, 9, 6, 4, 3, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};


#define HIGH(c) (1<<c)
#define OUTPUT(c) (1<<(2*c))
#define ALT_FN(c) (2<<(2*c))

#define PAIR(pin1, pin2) { .mode = ALT_FN(13)|ALT_FN(14)|OUTPUT(pin1)|OUTPUT(pin2), .data = HIGH(pin1) }

#define PENTAGON(pin1, pin2, pin3) \
	PAIR(pin1, pin2), \
	PAIR(pin2, pin1), \
	PAIR(pin1, pin3), \
	PAIR(pin3, pin1), \
	PAIR(pin2, pin3), \
	PAIR(pin3, pin2)

struct { uint32_t mode, data; } led_matrix[] =
{
	PENTAGON(1, 2, 4),
	PENTAGON(3, 4, 6),
	PENTAGON(5, 6, 7),
	PENTAGON(1, 7, 0),
	PENTAGON(3, 0, 2),
	PENTAGON(1, 3, 5),
// offeat
	PENTAGON(1, 2, 4),
};


static void init(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN; 	// enable the clock to GPIOA
}

/*
static void rotate_colors(void)
{

	int k, l;
	for (;;)
	{
		for (k=0;k<36;k+=1)
		{
				GPIOA->ODR = 0;
				GPIOA->MODER = led_matrix[k].mode;
				GPIOA->ODR = led_matrix[k].data;
				for (l=0; l<51200; l++);
		}
	}

}


static void fade_colors(void)
{

	int k, i, j, l, m;
	for (;;) for (i=0;i<6;i++)
	{
			for (j=0; j<512; j++)
			{
			for (m=0; m<1; m++)
		for (k=0;k<36;k+=6)
		{
				GPIOA->ODR = 0;
				GPIOA->MODER = led_matrix[k+i].mode;
				GPIOA->ODR = led_matrix[k+i].data;
				for (l=j; l<512; l++);
				GPIOA->ODR = 0;
				GPIOA->MODER = led_matrix[k+i+1].mode;
				GPIOA->ODR = led_matrix[k+i+1].data;
				for (l=0; l<j; l++);
			}
		}
	}

}

static void radar(void)
{

	int ph, i, j, led, c, cur;
	uint8_t list[36];
	GPIOA->ODR = 0;
	for (;;) for (ph=0;ph<255;ph+=1)
	{
		c=0;
		for (i=0; i<36; i++)
			if ((uint8_t)(led_phases[i] - ph) < 64)
			{
				list[c] = i;
				c += 1;
			}

		cur = 0;
		for (i=0; i<100; i++)
		{
			cur++;
			if (cur >= c)
				cur = 0;
			led = list[cur];

			GPIOA->MODER = led_matrix[led].mode;
			GPIOA->ODR = led_matrix[led].data;
			for (j=0; j<64; j++);
			GPIOA->ODR = 0;

		}
	}

}

static void wave_(void)
{

	int ph, i, j, c,q;
	GPIOA->ODR = 0;
	for (;;) for (ph=0;ph<255;ph+=8)
	{
	//	for (l=0; l<55; l++)
		for (i=0; i<36; i++)
		{
			c = fade[(uint8_t)(led_phases[i] - ph)];

			if (c)
			{
				GPIOA->MODER = led_matrix[i].mode;
				GPIOA->ODR = led_matrix[i].data;
				for (j=0; j<c; j++);
				for (q=0; q<40000; q++);
				GPIOA->ODR = 0;
			}
		}
	}

}

*/

static void wave(void)
{

	int ph, i, j, c, l;
	GPIOA->ODR = 0;
	for (;;) for (ph=0;ph<255;ph+=1)
	{
		for (l=0; l<55; l++)
		for (i=0; i<36; i++)
		{
			c = fade[(uint8_t)(led_phases[i] - ph)];

			if (c)
			{
				GPIOA->MODER = led_matrix[i].mode;
				GPIOA->ODR = led_matrix[i].data;
				for (j=0; j<c; j++);
				GPIOA->ODR = 0;
			}
		}
	}

}

int main(void)
{
	init();
	wave();
}
