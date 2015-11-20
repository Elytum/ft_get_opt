#include <stdint.h>

#include <stdio.h>

#define OPT_ERROR(opt) (opt.error)

typedef struct	s_uint256
{
	uint64_t	bits[4];
}				t_uint256;

typedef struct	s_opt
{
	char		error;
	t_uint256	options;
}				t_opt;

t_uint256		prepare_reference(const char *str)
{
	t_uint256	options;
	char		tab;
	char		pos;

	memcpy(options, 0, sizeof(options));
	while (*str)
	{
		tab = ((*str & 0b11000000) >> 6);
		pos = *str & 0b00111111;
		printf("Char %i: %i %i\n", *str, tab, pos);
		++str;
	}
	return (options);
}

t_opt		get_opt_all(void)
{
	t_opt				option;

	return (option);
}

t_opt		get_opt_pool(const char *str)
{
	const t_uint256		reference = prepare_reference(str);
	t_opt				option;

	return (option);
}

t_opt		get_opt(const char *str)
{
	t_opt				option;

	if (str)
		option = get_opt_pool(str);
	else
		option = get_opt_all();
	return (option);
}

char	contain_opt(t_opt options, char c)
{
	// return ((options.options[(c & 0b11000000) >> 6]))
	(void)options;
	(void)c;
	return (1);
}

int		main(int ac, char **av)
{
	t_opt	option;

	option = get_opt("abcde");
//	contain_opt

	(void)ac;
	(void)av;
	return (0);
}
