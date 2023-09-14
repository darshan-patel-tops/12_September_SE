//R&D
// Research And Development
//Debugging Skills


#include<stdio.h>
#include<string.h>


//strlen()	It returns the string's length.
//strnlen()	It returns the specified value if the value specified is less than the string length, otherwise the string length.
//strcmp()	It compares two strings and returns 0 if the strings are the same.
//strncmp()	It compares two strings only to n characters.
//strcat()	It concatenates two strings and returns the concatenated string.
//strncat()	It concatenates n characters of one string to another string.
//strcpy()	It copies one string into another.
//strncpy()	It copies the first n characters of one string into another.
//strchr()	It finds out the first occurrence of a given character in a string.
//strrchr()	It finds out the last occurrence of a given character in a string.
//strstr()	It finds out the first occurrence of a given string in a string.
//strnstr()	It finds out the first occurrence of a given string in a string where the search is limited to n characters.
//strcasecmp()	It compares two strings without sensitivity to the case.
//strncasecmp()	It compares n characters of one string to another without sensitivity to the case.
main()
{
	char name[50] = "Admin";
	
	printf("%s \n",name);
	
	printf("%d\n",sizeof(name));
	printf("%d\n",strlen(name));
	
	char name2[50];
	strcpy(name2,name2);
	printf("%s\n",name2);
	
	
	
	char greeting[50] = " Welcome ";
	printf("%s \n",strcat(greeting,name));
	printf("%s %s \n",greeting,name);
	
	
}