#import "describe.h"

void speak(void) {
    char name[100];
   	char *description;

   	strcpy(name, "Zara Ali");

   	/* allocate memory dynamically */
   	description = malloc( 200 * sizeof(char) );
	
   	if( description == NULL ) {
    	fprintf(stderr, "Error - unable to allocate required memory\n");
   	} else {
    	strcpy( description, "Zara ali a DPS student in class 10th");
   	}
   
   	printf("Name = %s\n", name );
   	printf("Description: %s\n", description );
	free(description);
}

void swap(const void *pa, const void *pb, int size) {
    char temp[size];
    memcpy(temp, pa, size);
    memcpy(pa, pb, size);
    memcpy(pb, temp, size);
}
