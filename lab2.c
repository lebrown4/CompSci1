//Lauren Brown
#include <stdio.h>
int main()
{
	char answer;
	
	printf("Metamorphic Rock Identifier\n");
	
	do
	{
		printf("\nWhat is the texture of your rock?");
		printf("\n\ta. Medium-to-coarse grained");
		printf("\n\tb. Fine grained");
		printf("\n\tc. No crystals");
		
		do
		{
			printf("\n\nEnter the letter of your choice: ");
			scanf(" %c", &answer);
			
			switch(answer)
				{
					case 'a':
					case 'A':
						printf("\nWhat is the color of your rock?");
						printf("\n\ta. Light/White, Pink, Yellow, Brown, Green ");
						printf("\n\tb. Medium/Gray, White, Pink, Red");
						printf("\n\tc. Dark Green");
						
						do
						{
							printf("\n\nEnter the letter of your choice: ");
							scanf(" %c", &answer);
				
							switch(answer)
								{
									case 'a':
									case 'A':
										printf("\nWhat are the special features of your rock?");
										printf("\n\ta. Mostly white from pure quartz mineral, may have some small amount of other minerals (does not fizz)");
										printf("\n\tb. Limestone/Calcite original rock will fizz when an acid (vinegar) is dropped on the surface");
										
										do
										{
											printf("\n\nEnter the letter of your choice: ");
											scanf(" %c", &answer);
											
											switch(answer)
												{
													case 'a':
													case 'A':
														printf("\nYour rock is Quartzite");
														break;
													case 'b':
													case 'B':
														printf("\nYour rock is Marble");
														break;
												}
										}while((answer != 'a' && answer != 'A') && (answer != 'b' && answer != 'B'));
										break;
									case 'b':
									case 'B':
										printf("\nIf the special feature of your rock is that bands of black minerals are present,");
										printf("\nYour rock is Gniess");
										break;
									case 'c':
									case 'C':
										printf("\nIf the special feature of your rock is that it may appear speckled with crystals of light colored minerals,");
										printf("\nYour rock is Amphibolite");
										break;
								}
						}while((answer != 'a' && answer != 'A') && (answer != 'b' && answer != 'B') && (answer != 'c' && answer != 'C'));
							break;
					case 'b':
					case 'B':
						printf("\nWhat is the color of your rock?");
						printf("\n\ta. Light to Medium, Gray, Silver, Brown");
						printf("\n\tb. Dark Black, Gray, Green, Red, Brown");
						
						do
						{
							printf("\n\nEnter the letter of your choice: ");
							scanf(" %c", &answer);
							
							switch(answer)
								{
									case 'a':
									case 'A':
										printf("\nWhat are the special features of your rock?");
										printf("\n\ta. Very small grains, looks like it has layers or sheets");
										printf("\n\tb. Individual garnet crystals present in rock (is the same as mica schist but also has garnets)");
										printf("\n\tc. Many black & brown mica mineral crystals; may look shiny");
										
										do
										{
											printf("\n\nEnter the letter of your choice: ");
											scanf(" %c", &answer);
								
											switch(answer)
												{
												case 'a':
												case 'A':
													printf("\nYour rock is Phyllite");
													break;
												case 'b':
												case 'B':
													printf("\nYour rock is Garnet Schist");
													break;
												case 'c':
												case 'C':
													printf("\nYour rock is Mica Schist");
													break;
												}
											}while ((answer != 'a' && answer != 'A') && (answer != 'b' && answer != 'B') && (answer != 'c' && answer != 'C'));
										break;
									case 'b':
									case 'B':
										printf("\nWhat are the special features of your rock?");
										printf("\n\ta. Can be broken into sheets, looks like it has layers");
										printf("\n\tb. Can not break into sheets, can sometimes be light colored, looks like a solid block");
										
										do
										{
											printf("\n\nEnter the letter of your choice: ");
											scanf(" %c", &answer);
								
											switch(answer)
												{
												case 'a':
												case 'A':
													printf("\nYour rock is Slate");
													break;
												case 'b':
												case 'B':
													printf("\nYour rock is Hornfels");
													break;
												}
											}while ((answer != 'a' && answer != 'A') && (answer != 'b' && answer != 'B'));
										break;
								}
							}while ((answer != 'a' && answer != 'A') && (answer != 'b' && answer != 'B') && (answer != 'c' && answer != 'C'));
						break;
					case 'c':
					case 'C':
						printf("\nIf the color of your rock is black and its special features are that it's light weight and shiny,");
						printf("\nYour rock is Anthracite Coal");
						break;
				}
			}while((answer != 'a' && answer != 'A') && (answer != 'b' && answer != 'B') && (answer != 'c' && answer != 'C'));
			
			do
			{
				printf("\n\nWould you like to find another rock? Y/N: ");
				scanf(" %c", &answer);
			}while ((answer != 'y' && answer != 'Y') && (answer != 'n' && answer != 'N'));
		}while((answer == 'y' || answer == 'Y'));
	return 0;
}
