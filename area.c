#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

void welcome();
void menu();
void list_shapes();

void area_rectangle();
void area_square();
void area_circle();
void area_semicircle();
void area_scaleneTriangle();
void area_equilateral();
void area_isoceles();
void area_parallelogram();
void area_rhombus();
void area_trapezium();

void area_cube();
void area_cuboid();
void area_cylinder();
void area_cone();
void area_sphere();
void area_hemisphere();

void volume_cube();
void volume_cuboid();
void volume_cylinder();
void volume_cone();
void volume_sphere();
void volume_hemisphere();


void welcome()
{
	int i;
	system("color 9F");
	printf("\t\t  Made by Rachit Raj Rathour");
	printf("\n\n\n");
	printf("\n\t\t  _______________________________________________________________________________________");
	printf("\n\t\t |                                                                                       |");
	printf("\n\t\t |   #   #   #   # # # # #   #           # # # # #   # # # # #   #       #   # # # # #   |");
	printf("\n\t\t |   #   #   #   #           #           #           #       #   # #   # #   #           |");
	printf("\n\t\t |   #   #   #   #           #           #           #       #   #   #   #   #           |");
	printf("\n\t\t |   #   #   #   # # # # #   #           #           #       #   #       #   # # # # #   |");
	printf("\n\t\t |   #   #   #   #           #           #           #       #   #       #   #           |");
	printf("\n\t\t |   # #   # #   #           #           #           #       #   #       #   #           |");
	printf("\n\t\t |   #       #   # # # # #   # # # # #   # # # # #   # # # # #   #       #   # # # # #   |");
	printf("\n\t\t |_______________________________________________________________________________________|");

    printf("\n\n\t\t\t\t\tHOMEPAGE WILL APPEAR IN FEW MOMENTS");
	for(i=0;i<5;i++)
	{
		printf(" .");
		Sleep(700);
	}
}

void area_rectangle()
{
	float length, breadth, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = Length * Breadth");
	printf("\n\n\t\t\t\t\t\tEnter length : ");
	scanf("%f",&length);
	printf("\t\t\t\t\t\tEnter breadth : ");
	scanf("%f",&breadth);

	area = length * breadth;
	printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);

}


void area_square()
{
	float side, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = Side * Side");
	printf("\n\n\t\t\t\t\t\tEnter length of side : ");
	scanf("%f",&side);

	area = side * side;
    
    printf("\t\t\t\t\t\t-----------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_circle()
{
	float radius, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = pi * r%c",253);
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	area = 3.14 * radius * radius;

	printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_semicircle()
{
	float radius, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = 1/2 * pi * r%c",253);
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	area = 3.14 * radius * radius * 0.5;
    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_scaleneTriangle()
{
	float a, b, c, s, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = [s(s-a)(s-b)(s-c)]%c",171);
	printf("\n\n\t\t\t\t\t\tEnter length of side a : ");
	scanf("%f",&a);
	printf("\t\t\t\t\t\tEnter length of side b : ");
	scanf("%f",&b);
	printf("\t\t\t\t\t\tEnter length of side c : ");
	scanf("%f",&c);

	if(a<0 || b<0 || c<0)
	{
		printf("\n\nthis is not a valid triangle");
		printf("\ntry again");
		area_scaleneTriangle();
	}
	else if(a>b+c || b>a+c || c>a+b)
	{
		printf("\n\n\t\t\t\t\t\tthis is not a valid triangle");
		printf("\n\t\t\t\t\t\ttry again");
		area_scaleneTriangle();
	}

	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\t\t\t\t\t\t----------------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_equilateral()
{
	float side, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = (3/4)%c * r%c",171,253);
	printf("\n\n\t\t\t\t\t\tEnter length of side : ");
	scanf("%f",&side);
    
    if(side<0)
	{
		printf("\n\nthis is not a valid triangle");
		printf("\ntry again");
		area_equilateral();
	}

	area = side * side * sqrt(3)/4;

    printf("\t\t\t\t\t\t-----------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_isoceles()
{
	float base, height, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = 1/2 * base * height");
	printf("\n\n\t\t\t\t\t\tEnter base : ");
	scanf("%f",&base);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&height);

	area = base * height * 0.5;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_parallelogram()
{
	float base, height, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = base * height");
	printf("\n\n\t\t\t\t\t\tEnter base : ");
	scanf("%f",&base);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&height);

	area = base * height;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_rhombus()
{
	float diagonal_1, diagonal_2, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = 1/2 * diagonal_1 * diagonal_2 ");
	printf("\n\n \t\t\t\t\t\tEnter length of diagonal 1 : ");
	scanf("%f",&diagonal_1);
	printf("\t\t\t\t\t\tEnter length of diagonal 2 : ");
	scanf("%f",&diagonal_2);

	area = diagonal_1 * diagonal_2 * 0.5;

    printf("\t\t\t\t\t\t-----------------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_trapezium()
{
	float parallel_1, parallel_2, distance_parallel, area;

    printf("\n\t\t\t\tFORMULA => A = 1.2 * (sum of parallel sides) * distance between parallel sides");
	printf("\n\n\t\t\t\t\t\tEnter length of parallel side 1 : ");
	scanf("%f",&parallel_1);
	printf("\t\t\t\t\t\tEnter length of parallel side 2 : ");
	scanf("%f",&parallel_2);
	printf("\t\t\t\t\t\tEnter length of distance between paralled sides : ");
	scanf("%f",&distance_parallel);

	area = (parallel_1 + parallel_2) * distance_parallel * 0.5;

    printf("\t\t\t\t\t\t----------------------------------------------------");
	printf("\n\t\t\t\t\t\tArea = %.2f",area);
}

void area_cube()
{
	float side, TSA, CSA;
    
    printf("\n\t\t\t\t\t\tFORMULA => TSA = 6 * a%c ",253);
    printf("\n\t\t\t\t\t\t           CSA = 4 * a%c",253);
	printf("\n\n\t\t\t\t\t\tEnter length of side : ");
	scanf("%f",&side);

	TSA = 6 * side * side;
	CSA = 4 * side * side;

    printf("\t\t\t\t\t\t-------------------------");
	printf("\n\n\t\t\t\t\t\tTotal surface area : %.2f",TSA);
	printf("\n\t\t\t\t\t\tCurved surface area : %.2f",CSA);
}

void area_cuboid()
{
	float l, b, h, TSA, CSA;
   

    printf("\n\t\t\t\t\t\tFORMULA => TSA = 2(lb + bh + hl)");
    printf("\n\t\t\t\t\t\t           CSA = 2h(l + b)");
	printf("\n\n\t\t\t\t\t\tEnter length : ");
	scanf("%f",&l);
	printf("\t\t\t\t\t\tEnter breadth : ");
	scanf("%f",&b);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&h);

	TSA = 2 * (l*b + b*h + h*l);
	CSA = 2 * h *(l + b);

    printf("\t\t\t\t\t\t----------------------");
	printf("\n\t\t\t\t\t\tTotal surface area : %.2f",TSA);
	printf("\n\t\t\t\t\t\tCurved surface area : %.2f",CSA);
}

void area_cylinder()
{
	float radius, height, TSA, CSA;

    printf("\n\t\t\t\t\t\tFORMULA => TSA = 2 * pi * r (r + h)");
    printf("\n\t\t\t\t\t\t           CSA = 2 * pi * r * h");
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&height);

	TSA = 2 * 3.14 * radius * (radius + height);
	CSA = 2 * 3.14 * radius * height;

    printf("\t\t\t\t\t\t----------------------");
	printf("\n\t\t\t\t\t\tTotal surface area : %.2f",TSA);
	printf("\n\t\t\t\t\t\tCurved surface area : %.2f",CSA);
}

void area_cone()
{
	float length, radius, TSA, CSA;

    printf("\n\t\t\t\t\t\tFORMULA => TSA = pi * r * (l + r)");
    printf("\n\t\t\t\t\t\t           CSA = pi * r * l");
	printf("\n\n\t\t\t\t\t\tEnter length : ");
	scanf("%f",&length);
	printf("\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	TSA = 3.14 * radius * (length + radius);
	CSA = 3.14 * radius * length;

	printf("\t\t\t\t\t\t----------------------");
	printf("\n\t\t\t\t\t\tTotal surface area : %.2f",TSA);
	printf("\n\t\t\t\t\t\tCurved surface area : %.2f",CSA);
}

void area_sphere()
{
	float radius, area;

    printf("\n\t\t\t\t\t\tFORMULA => A = 4 * pi * r%c",253);
	printf("\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	area = 4 * 3.14 * radius * radius;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tSurface area : %.2f",area);
}

void area_hemisphere()
{
	float radius, TSA, CSA;

    printf("\n\t\t\t\t\t\tFORMULA => TSA = 3 * pi * r%c",253);
    printf("\n\t\t\t\t\t\t           CSA = 2 * pi * r%c",253);
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	TSA = 3 * 3.14 * radius * radius;
	CSA = 2 * 3.14 * radius * radius;

    printf("\t\t\t\t\t\t----------------------");
	printf("\n\t\t\t\t\t\tTotal surface area : %.2f",TSA);
	printf("\n\t\t\t\t\t\tCurved surface area : %.2f",CSA);
}

void volume_cube()
{
	float side, volume;

    printf("\n\t\t\t\t\t\tFORMULA => V = side%c",252);
	printf("\n\n\t\t\t\t\t\tEnter length of side : ");
	scanf("%f",&side);

	volume = side * side * side;

    printf("\t\t\t\t\t\t----------------------");
	printf("\n\t\t\t\t\t\tVolume : %.2f",volume);
}

void volume_cuboid()
{
	float l, b, h, volume;

    printf("\n\t\t\t\t\t\tFORMULA => V = l * b * h");
	printf("\n\n\t\t\t\t\t\tEnter length : ");
	scanf("%f",&l);
	printf("\t\t\t\t\t\tEnter breadth : ");
	scanf("%f",&b);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&h);

	volume = l * b * h;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tVolume : %.2f",volume);
}

void volume_cylinder()
{
	float radius, height, volume;

    printf("\n\t\t\t\t\t\tFORMULA => V = pi * r%c * h",253);
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&height);

	volume = 3.14 * radius * radius * height;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tVolume : %.2f",volume);
}

void volume_cone()
{
	float height, radius, volume;

    printf("\n\t\t\t\t\t\tFORMULA => V = 1/3 * pi * r%c * h",253);
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);
	printf("\t\t\t\t\t\tEnter height : ");
	scanf("%f",&height);

	volume = 3.14 * radius * radius * height * 0.33;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tVolume : %.2f",volume);
}


void volume_sphere()
{
	float radius, volume;

    printf("\n\t\t\t\t\t\tFORMULA => V = 4/3 * pi * r%c",252);
	printf("\n\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	volume = 1.33 * 3.14 * radius * radius * radius;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tVolume : %.2f",volume);
}

void volume_hemisphere()
{
	float radius, volume;

    printf("\n\t\t\t\t\t\tFORMULA => V = 2/3 * pi * r%c",252);
	printf("\n\t\t\t\t\t\tEnter radius : ");
	scanf("%f",&radius);

	volume = 0.66 * radius * radius * radius;

    printf("\t\t\t\t\t\t------------------");
	printf("\n\t\t\t\t\t\tVolume : %.2f",volume);
}

void list_shapes()
{
	system("cls");
	system("color 81 ");
	printf("\n\t\t\t      __________________________________________________________  ");
	printf("\n\t\t\t     |                                                          | ");
	printf("\n\t\t\t     | 2D SHAPES                                     3D SHAPES  | ");
	printf("\n\t\t\t     |%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c| ",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
	printf("\n\t\t\t     | 1.Rectangle                                 1.Cube       | ");
	printf("\n\t\t\t     | 2.Square                                    2.Cuboid     | ");
	printf("\n\t\t\t     | 3.Circle                                    3.Cylinder   | ");
	printf("\n\t\t\t     | 4.Semicircle                                4.Cone       | ");
	printf("\n\t\t\t     | 5.Scalene Triangle                          5.Sphere     | ");
	printf("\n\t\t\t     | 6.Equilateral Triangle                      6.Hemisphere | ");
	printf("\n\t\t\t     | 7.Isoceles Triangle                                      | ");
	printf("\n\t\t\t     | 8.Parallelogram                                          | ");
	printf("\n\t\t\t     | 9.Rhombus                                                | ");
	printf("\n\t\t\t     |10.Trapezium                                              | ");
	printf("\n\t\t\t     |__________________________________________________________|");

}
void menu()
{
	system("cls");
	system("color B5");
	int choose,shape2D,shape3D,shape3DV;
    printf("\n\t\t\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
	printf("\n\t\t\t\t\t\t  %c  W-E-L-C-O-M-E  %c",4,4);
	printf("\n\t\t\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
	printf("\n\n\t\t\t       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   ",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
	printf("\n\t\t\t       %c A-R-E-A   A-N-D   V-O-L-U-M-E   C-A-L-C-U-L-A-T-O-R  %c",4,4);
    printf("\n\t\t\t       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   ",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
	printf("\n");
	printf("\n\t\t\t\t\t   ...............................");
	printf("\n\t\t\t\t\t   .                             .");
	printf("\n\t\t\t\t\t   .   1. AREA OF 2D SHAPES      .");
	printf("\n\t\t\t\t\t   .   2. AREA OF 3D SHAPES      .");
	printf("\n\t\t\t\t\t   .   3. VOLUME OF 3D SHAPES    .");
	printf("\n\t\t\t\t\t   .   4. LIST OF SHAPES         .");
	printf("\n\t\t\t\t\t   .   5. EXIT                   .");
	printf("\n\t\t\t\t\t   ...............................\n");
	printf("\n\t\t\t\t\t\t choose option (1-5) : ");
	scanf("%d",&choose);

	switch(choose)
	{
		case 1:
		{
			system("cls");

			printf("\n\t\t\t\t\t\t1.  rectangle");
			printf("\n\t\t\t\t\t\t2.  square");
			printf("\n\t\t\t\t\t\t3.  circle");
			printf("\n\t\t\t\t\t\t4.  semicircle");
			printf("\n\t\t\t\t\t\t5.  Scalene triangle");
			printf("\n\t\t\t\t\t\t6.  equilateral Triangle");
			printf("\n\t\t\t\t\t\t7.  isoceles Triangle");
			printf("\n\t\t\t\t\t\t8.  parallelogram");
			printf("\n\t\t\t\t\t\t9.  rhombus");
			printf("\n\t\t\t\t\t\t10. trapezium");
			printf("\n\t\t\t\t\t____________________________________");

			printf("\n\n\t\t\t\t\t\tchoose shape (1-10) : ");
			scanf("%d",&shape2D);

			switch(shape2D)
			{
				case 1:
				{
					area_rectangle();
					
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 2:
				{
					area_square();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 3:
				{
					area_circle();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 4:
				{
					area_semicircle();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 5:
				{
					area_scaleneTriangle();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 6:
				{
					area_equilateral();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 7:
				{
					area_isoceles();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 8:
				{
					area_parallelogram();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 9:
				{
					area_rhombus();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 10:
				{
					area_trapezium();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
			}
		}
		case 2:
		{
			system("cls");

			printf("\n\t\t\t\t\t\t1. Cube");
			printf("\n\t\t\t\t\t\t2. Cuboid");
			printf("\n\t\t\t\t\t\t3. Cylinder");
			printf("\n\t\t\t\t\t\t4. Cone");
			printf("\n\t\t\t\t\t\t5. Sphere");
			printf("\n\t\t\t\t\t\t6. Hemisphere");
			printf("\n\t\t\t\t\t____________________________________");

			printf("\n\n\t\t\t\t\t\tchoose shape (1-6) : ");
			scanf("%d",&shape3D);

			switch(shape3D)
			{
				case 1:
				{
					area_cube();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 2:
				{
					area_cuboid();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 3:
				{
					area_cylinder();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 4:
				{
					area_cone();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 5:
				{
					area_sphere();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 6:
				{
					area_hemisphere();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
			}
		}
		case 3:
		{
			system("cls");

			printf("\n\t\t\t\t\t\t1. Cube");
			printf("\n\t\t\t\t\t\t2. Cuboid");
			printf("\n\t\t\t\t\t\t3. Cylinder");
			printf("\n\t\t\t\t\t\t4. Cone");
			printf("\n\t\t\t\t\t\t5. Sphere");
			printf("\n\t\t\t\t\t\t6. Hemisphere");
			printf("\n\t\t\t\t\t____________________________________");

			printf("\n\n\t\t\t\t\t\tchoose shape (1-6) : ");
			scanf("%d",&shape3DV);

			switch(shape3DV)
			{
				case 1:
				{
					volume_cube();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 2:
				{
					volume_cuboid();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 3:
				{
					volume_cylinder();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 4:
				{
					volume_cone();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 5:
				{
					volume_sphere();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
				case 6:
				{
					volume_hemisphere();
					int back;
					printf("\n\n\t\t\t\t\t\tpress 0 to go back to main menu : ");
					scanf("%d",&back);

					if(back==0);
					{
						system("cls");
						menu();
					}
				}
			}
		}
		case 4:
		{
			list_shapes();

			int back;
			printf("\n\n\n\t\t\t\t\tpress 0 to go back to main menu : ");
			scanf("%d",&back);

			if(back==0);
			{
				system("cls");
				menu();
			}

		}
		case 5:
	    {
		    exit(0);    
	    }
	    default:
    	{
		    printf("\n\t\t\t\t\t\tWrong option. try again");
	    }
	}
	
}

int main()
{
	welcome();
	menu();

	return 0;
}
