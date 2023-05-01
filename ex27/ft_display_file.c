/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:43:58 by agrimald          #+#    #+#             */
/*   Updated: 2023/05/01 20:32:33 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
//estaba hecho pero faltaban mas cositas
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
*/
//estudiar esto
#include <stdio.h>

#define BUFFER_SIZE 4096

int main(int argc, char *argv[]) {
    // Verificar el número de argumentos
    if (argc != 2)
   	{
        if (argc < 2)
	   	{
            // Si no se proporciona un nombre de archivo, mostrar un mensaje de error
            printf("File name missing.\n");
        } else
	   	{
            // Si se proporcionan demasiados argumentos, mostrar otro mensaje de error
            printf("Too many arguments.\n");
        }
        return 1; // Salir del programa con un código de error
    }

    // Abrir el archivo en modo de lectura
    FILE *archivo = fopen(argv[1], "r");
    if (archivo == NULL) 
	{
        // Si el archivo no se puede abrir, mostrar un mensaje de error
        printf("Cannot read file.\n");
        return 1; // Salir del programa con un código de error
    }

    // Leer el contenido del archivo y mostrarlo en la salida estándar
    char buffer[BUFFER_SIZE];
    int num_leidos;
    while ((num_leidos = fread(buffer, 1, BUFFER_SIZE, archivo)) > 0) {
        // Leer el archivo en bloques de tamaño fijo y mostrarlos en la salida estándar
        fwrite(buffer, 1, num_leidos, stdout);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
/*
 * otra manera de hacerlo
#include <stdio.h>

#define BUFFER_SIZE 4096 // Tamaño máximo del buffer de lectura

int main()
{
    char filename[256]; // Buffer para almacenar el nombre del archivo
    FILE *file;
    char buffer[BUFFER_SIZE];
    size_t bytes_read;

    printf("Ingrese el nombre del archivo: ");
    scanf("%255s", filename); // Lee hasta 255 caracteres desde la entrada estándar

    file = fopen(filename, "r");
    if (!file)
    {
        printf("No se pudo abrir el archivo %s.\n", filename);
        return 1;
    }

    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file)) > 0)
    {
        fwrite(buffer, 1, bytes_read, stdout);
    }

    if (ferror(file))
    {
        printf("No se pudo leer el archivo %s.\n", filename);
        fclose(file); // Cerramos el archivo antes de salir del programa
        return 1;
    }

    fclose(file);

    return 0;
}
*/
