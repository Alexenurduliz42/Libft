<p align="center">
  <img src="https://repository-images.githubusercontent.com/204142917/82f36f80-66bf-11ea-8c8e-cdb47d752440" alt="imagen de Libft">
</p>

![GitHub License](https://img.shields.io/github/license/alexhiguera/libft) ![GitHub release date](https://img.shields.io/github/release-date-pre/alexhiguera/libft) ![GitHub License](https://badgen.net/github/tag/alexhiguera/libft) ![GitHub repo size](https://img.shields.io/github/repo-size/alexhiguera/libft?color=militar%20green)

# Descripción
 Libft es una libreria de C | Esta rama utils es una modificación de la libreria original. En esta versión se incluyen recursos adicionales como ft_printf y get_next_line. y han sido eliminadas muchas funciones no necesarias.


## Funciones
|Nº| Función           | Descripción                                                                                          | Sintaxis                             |
|--|-------------------|------------------------------------------------------------------------------------------------------|--------------------------------------|
| 1| ft_strlen         |Calcular la longitud de una cadena de caracteres antes del carácter nulo  '\0'                        | `size_T ft_strlen(char *str);`       |
| 2| ft_bzero          |Establece un bloque de memoria con un valor de cero (para borrar o reiniciar la memoria).        | `void ft_memset(str, tamaño);`            |
| 3| ft_strlcpy        |Copia una cadena en otra, limitando la cantidad de caracteres para prevenir desbordamientos de búfer.|`size_t ft_strlcpy(char *dest, const char *src, size_t destsize);` |
| 4| ft_strlcat        |Concatena una cadena con otra, limitando la cantidad de caracteres para evitar desbordamientos de búfer.|`size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` |
| 5| ft_strchr         |Busca la primera ocurrencia de un carácter en una cadena y devuelve un puntero a esa ubicación.    |`char *ft_strchr(const char *s, int c);` |
| 6| ft_strrchr        |Busca la última ocurrencia de un carácter en una cadena y devuelve un puntero a esa ubicación.     |`char *ft_strrchr(const char *s, int c);`|
| 7| ft_strncmp        |Compara dos cadenas de caracteres y determinar si son iguales o cuál es lexicográficamente mayor.|`ft_strcmp(const char *s1, const char *s2)`|
| 8| ft_strnstr        |Busca la primera ocurrencia de una subcadena en una cadena dada, limitando la búsqueda a un número específico de caracteres.|`char *ft_strnstr(const char *haystack, const char *needle, size_t len);`|
| 9| ft_atoi           |Convierte una cadena que representa un número en su equivalente entero.                               |`int ft_atoi(const char *str);`       |
|10| ft_calloc         |Asigna un bloque de memoria con un número específico de elementos, inicializándolos en cero.   |`void *ft_calloc(size_t count, size_t size);`|
|11| ft_strdup         |Duplica una cadena de caracteres existente y devuelve un nuevo puntero a la copia.                    |   `char	*ft_strdup(const char *s1);` |
|12| ft_substr         |Devuelve un substring que empieza desde el índice ’start’.                 |`char *ft_substr(char const *s, unsigned int start, size_t len);`|
|13| ft_strjoin        |Devuelve la concatenación de dos strings.                                                |`char *ft_strjoin(char const *s1, char const *s2);`|
|14| ft_strtrim        |Elimina todos los caracteres un string hasta encontrar un caracter no perteneciente a ’set’.|`char *ft_strtrim(char const *s1, char const *set);`|
|15| ft_split          |Separa un array de strings utilizando un caracter delimitador.                                     |`char **ft_split(char const *s, char c);`|
|16|ft_itoa            |Genera una string que represente el valor entero recibido como argumento.                                            |`char *ft_itoa(int n);`|
|17|ft_strmapi         |A cada carácter del string, aplica una función dada y genera un nuevo string resultante.|`char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`|
|18|ft_striteri |Hace lo mismo que ft_striteri, dando la dirección del propio carácter, que podrá modificarse si es necesario.|`void ft_striteri(char *s, void (*f)(unsigned int, char*));`|
|19| ft_lstnew         |Crea un nuevo nodo en la lista.                                                                        |  `t_list *ft_lstnew(void *content);`|
|20| ft_lstadd_front   |Añade un nodo nuevo al principio de la lista.                                             |`void ft_lstadd_front(t_list **lst, t_list *new);`|
|21| ft_lstsize        |Cuenta el número de nodos de una lista.                                                                |`int ft_lstsize(t_list *lst);`       |
|22| ft_lstlast        |Devuelve el último nodo de una lista.                                                                  | `t_list *ft_lstlast(t_list *lst);`  |
|23| ft_lstadd_back    |Añade un nodo nuevo al final de una lista.                                                 |`void ft_lstadd_back(t_list **lst, t_list *new);`|
|24| ft_lstdelone      |Toma como parámetro un nodo y libera la memoria del contenido el nodo.               | `void ft_lstdelone(t_list *lst, void (*del)(void *));`|
|25| ft_lstclear       |Elimina y libera un nodo dado y todos los consecutivos de ese nodo.                   |`void ft_lstclear(t_list **lst, void (*del)(void *));`|
|26| ft_lstiteri       |Itera una lista y aplica una función en el contenido de cada nodo.                    |`void ft_lstclear(t_list **lst, void (*del)(void *));`|
|27| ft_lstmap         |Hace lo mismo que ft_lstiteri y crea una lista resultante.        |`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` 
---

<p align="center">
  <img src="https://images.vexels.com/media/users/3/166179/isolated/lists/b83d6b47a9502dfaf535087627a8bf96-c-programming-language-icon.png" alt="imagen logo de C">
</p>
