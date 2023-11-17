#include "mistring.h"


int main() {

	char str1[25] = "baloncesto";
	char str2[25] = "piano";
	char str2_b[25] = "piano";
	char str3[25] = "sol";
	char str3_b[25] = "sol";
	char str4[25] = "carlos";
	char str4_b[25] = "carla";	
	char str5[25] = "mayonesa";
	char str5_b[25] = "mayonesa";
	char str6[25] = "paracaidista";
	char str7[25] = "acera";
	char str7_b[25] = "aceras";


	printf("\n");
	printf("Las strings utilizadas para estas pruebas son: %s,%s,%s,%s,%s y %s.\n",str1,str2,str3,str4,str5,str6);
	printf("-------------------------------------\n");
	printf("Pruebas de mi_strlen()\n");
	printf("-------------------------------------\n");
	printf("[mi_strlen]La longitud de %s es %d.\n",str1,mi_strlen(&str1));
	printf("[mi_strlen]La longitud de %s es %d.\n",str2,mi_strlen(&str2));
	printf("[mi_strlen]La longitud de %s es %d.\n",str3,mi_strlen(&str3));
	printf("[mi_strlen]La longitud de %s es %d.\n",str4,mi_strlen(&str4));
	printf("[mi_strlen]La longitud de %s es %d.\n",str5,mi_strlen(&str5));
	printf("[mi_strlen]La longitud de %s es %d.\n",str6,mi_strlen(&str6));
	printf("-------------------------------------\n");
	printf("Pruebas de mi_strcpy()\n");
	printf("-------------------------------------\n");
	printf("Se va a copiar %s(str1) en %s(str2).\n",str1,str2);
	printf("Contenido de str2: %s.\n",str2);
	mi_strcpy(&str2,&str1);printf("[mi_strcpy]Ejecutada.\n");
	printf("Contenido de str2: %s.\n",str2);
	printf("Se va a copiar %s(str6) en %s(str3).\n",str6,str3);
	printf("Contenido de str3: %s.\n",str3);
	mi_strcpy(&str3,&str6);printf("[mi_strcpy]Ejecutada.\n");
	printf("Contenido de str3: %s.\n",str3);
	printf("Se va a copiar %s(str4) en %s(str5).\n",str4,str5);
	printf("Contenido de str2: %s.\n",str5);
	mi_strcpy(&str5,&str4);printf("[mi_strcpy]Ejecutada.\n");
	printf("Contenido de str2: %s.\n",str5);
	printf("-------------------------------------\n");
	//Restauro las strings a como estaban antes de hacer el test de copy.
	mi_strcpy(&str2,&str2_b);mi_strcpy(&str3,&str3_b);mi_strcpy(&str5,&str5_b);
	printf("[mi_strcpy]Strings restauradas correctamente.\n");
	printf("-------------------------------------\n");
	printf("Pruebas de mi_strcat()\n");
	printf("-------------------------------------\n");
	printf("Se van a concatenar %s(str2) y %s(str3) en (str3).\n",str2,str3);
	printf("Contenido de str3: %s.\n",str3);
	mi_strcat(&str3,&str2);printf("[mi_strcat]Ejecutada.\n");
	printf("Contenido de str3: %s.\n",str3);
	printf("Se van a concatenar %s(str6) y %s(str1) en (str1).\n",str6,str1);
	printf("Contenido de str1: %s.\n",str1);
	mi_strcat(&str1,&str6);printf("[mi_strcat]Ejecutada.\n");
	printf("Contenido de str1: %s.\n",str1);
	printf("Se van a concatenar %s(str4) y %s(str5) en (str5).\n",str4,str5);
	printf("Contenido de str5: %s.\n",str5);
	mi_strcat(&str5,&str4);printf("[mi_strcat]Ejecutada.\n");
	printf("Contenido de str5: %s.\n",str5);
	printf("-------------------------------------\n");
	mi_strcpy(&str2,&str2_b);mi_strcpy(&str3,&str3_b);mi_strcpy(&str5,&str5_b);
	printf("[mi_strcpy]Strings restauradas correctamente.\n");
	printf("-------------------------------------\n");
	printf("Pruebas de mi_strequals()\n");
	printf("-------------------------------------\n");
	printf("(Compara dos cadenas. Si son idénticas, la función devuelve un 1.\n Si son diferentes, la función devuelve un 0.\n");
	printf("Se van a comparar %s(str4) y %s(str4_b).\n",str4,str4_b);
	printf("[mi_strequals]El resultado es %d.\n",mi_strequals(&str4,&str4_b));
	printf("Se van a comparar %s(str3) y %s(str3_b).\n",str3,str3_b);
	printf("[mi_strequals]El resultado es %d.\n",mi_strequals(&str3,&str3_b));
	printf("Se van a comparar %s(str2) y %s(str5).\n",str2,str5);
	printf("[mi_strequals]El resultado es %d.\n",mi_strequals(&str2,&str5));
	printf("Se van a comparar %s(str2) y %s(str2_b).\n",str2,str2_b);
	printf("[mi_strequals]El resultado es %d.\n",mi_strequals(&str2,&str2_b));
	printf("Se van a comparar %s(str7) y %s(str7_b).\n",str7,str7_b);
	printf("[mi_strequals]El resultado es %d.\n",mi_strequals(&str7,&str7_b));
	printf("-------------------------------------\n");
	printf("Pruebas de mi_strdup()\n");
	printf("-------------------------------------\n");
	printf("[mi_strdup]Se va a crear un duplicado de %s(str2).\n",str2);
	char *ptr1 = mi_strdup(&str2);
	printf("[mi_strdup]Se ha creado un duplicado para la string %s en la dirección %p.\n",ptr1,ptr1);
	printf("[mi_strdup]Se va a crear un duplicado de %s(str4).\n",str4);
	char *ptr2 = mi_strdup(&str4);
	printf("[mi_strdup]Se ha creado un duplicado para la string %s en la dirección %p.\n",ptr2,ptr2);
	printf("[mi_strdup]Se va a crear un duplicado de %s(str6).\n",str6);
	char *ptr3 = mi_strdup(&str6);
	printf("[mi_strdup]Se ha creado un duplicado para la string %s en la dirección %p.\n",ptr3,ptr3);

    	printf("-------------------------------------\n");
    	return 0;
}

