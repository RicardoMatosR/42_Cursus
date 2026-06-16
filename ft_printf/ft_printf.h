#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// Aquí está el puente hacia todas tus herramientas
# include "libft/libft.h" 

// Los prototipos de tus nuevas funciones
int	ft_printf(char const *str, ...);

#endif