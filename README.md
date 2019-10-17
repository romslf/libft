# Libft

Une copie de Libc avec quelques ajouts.

# Liste des fonctions

* memset
* bzero
* memcpy
* memccpy
* memmove
* memchr
* memcmp
* strlen
* isalpha
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower
* strchr
* strrchr
* strncmp
* strlcpy
* strlcat
* strnstr
* atoi
* calloc
* strdup

# Fonctions supplémentaires

### ft_substr
char *ft_substr(char const *s, unsigned int start, size_t len);
* Paramètres:
#1. La chaine de laquelle extraire la nouvelle chaine
#2. L’index de début de la nouvelle chaine
#3. La taille maximale de la nouvelle chaine.
* Valeur de retour:
The nouvelle chaine de caractere. NULL si
l’allocation échoue.
* Description:
Alloue (avec malloc(3)) et retourne une chaine de
caractères issue de la chaine donnée en argument
Cette nouvelle chaine commence à l’index ’start’ et
a pour taille maximale ’len’

### ft_strjoin
char *ft_strjoin(char const *s1, char const *s2);
* Paramètres:
#1. La chaine de caractères préfixe.
#2. La chaine de caractères suffixe.
* Valeur de retour:
La nouvelle chaine de caractères. NULL si
l’allocation échoue.
* Description:
Alloue (avec malloc(3)) et retourne une nouvelle
chaine, résultat de la concaténation de s1 et s2.

### ft_strtrim
char *ft_strtrim(char const *s1, char const *set);
* Paramètres:
#1. La chaine de caractères à trimmer.
#2. Le set de reference de caractères à trimmer.
* Valeur de retour:
La chaine de caractères trimmée. NULL si
l’allocation échoue.
* Description:
Alloue (avec malloc(3)) et retourne une copie de la
chaine de caractères donnée en argument, sans les
caractères spécifiés dans le set donné en argument
au début et à la fin de la chaine de caractères.

### ft_split
char **ft_split(char const *s, char c);
* Paramètres:
#1. La chaine de caractères à découper.
#2. Le caractère délimitant.
* Valeur de retour:
Le tableau de nouvelles chaines de caractères,
résultant du découpage. NULL si l’allocation
échoue.
* Description:
Alloue (avec malloc(3)) et retourne un tableau
de chaines de caracteres obtenu en séparant s à
l’aide du caractère c, utilisé comme délimiteur. Le
tableau doit être terminé par NULL.

### ft_itoa
char *ft_itoa(int n);
* Paramètres:
#1. l’integer à convertir.
Valeur de retour La chaine de caractères représentant l’integer.
NULL si l’allocation échoue.
* Description:
Alloue (avec malloc(3)) et retourne une chaine de
caractères représentant l’integer reçu en argument.
Les nombres négatifs doivent être gérés.

### ft_strmapi
char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
* Paramètres:
#1. La chaine de caractères sur laquelle itérer
#2. La fonction à appliquer à chaque caractère.
Valeur de retour La chaine de caractères résultant des applications
successives de f. Retourne NULL si l’allocation
échoue.
* Description:
Applique la fonction f à chaque caractère de la
chaine de caractères passée en argument pour créer
une nouvelle chaine de caractères (avec malloc(3))
résultant des applications successives de f.

### ft_putchar_fd
void ft_putchar_fd(char c, int fd);
* Paramètres:
#1. Le caractère à écrire
#2. Le file descriptor sur lequel écrire.
* Description:
Écrit le caractère c sur le file descriptor donné.

### ft_putstr_fd
void ft_putstr_fd(char *s, int fd);
* Paramètres:
#1. La chaine de caractères à écrire
#2. Le file descriptor sur lequel écrire.
* Description:
Écrit la chaine de caractères s sur le file
descriptor donné.

### ft_putendl_fd
void ft_putendl_fd(char *s, int fd);
* Paramètres:
#1. La chaine de caractères à écrire
#2. Le file descriptor sur lequel écrire.
* Description:
Écrit La chaine de caractères s sur le file
descriptor donné, suivie d’un retour à la ligne.

### ft_putnbr_fd
void ft_putnbr_fd(int n, int fd);
* Paramètres:
#1. L’integer à écrire
#2. Le file descriptor sur lequel écrire.
* Description:
Écrit l’integer n sur le file descriptor donné.