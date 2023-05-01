/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:43:58 by agrimald          #+#    #+#             */
/*   Updated: 2023/05/01 19:09:15 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int main()
{
	FILE *archivo;
	char name;
	
	archivo=fopen("archivo.txt", "r");
	if(archivo== NULL)
	{
		printf("Error al abrir el archivo\n");
	}
	else
	{
		printf("\n El contenido del archivo es:\n\n");
		while(feof(archivo)==0)
		{
			name=fgetc(archivo);
			printf("%c", name);
		}
	}
	fclose(archivo);
	getch();
	return 0;
}
*/
#include <stdio.h>

int main()
{
    FILE *archivo;      // Declarar un puntero a un objeto de tipo FILE
    char line[100];     // Declarar un arreglo de caracteres para almacenar cada línea del archivo

    archivo = fopen("archivo.txt", "r");     // Abrir el archivo en modo lectura
    if (archivo == NULL)    // Verificar si se pudo abrir el archivo correctamente
    {
        printf("Error al abrir el archivo\n");   // Imprimir un mensaje de error si no se pudo abrir el archivo
    }
    else
    {
        printf("\nEl contenido del archivo es:\n\n");   // Imprimir un mensaje indicando que se va a mostrar el contenido del archivo
        while (fgets(line, sizeof(line), archivo) != NULL)  // Leer cada línea del archivo y almacenarla en el arreglo 'line' hasta que se alcance el final del archivo
        {
            printf("%s", line);     // Imprimir cada línea en la pantalla
        }
        fclose(archivo);   // Cerrar el archivo
    }
    return 0;   // Indicar que el programa finalizó correctamente
}

