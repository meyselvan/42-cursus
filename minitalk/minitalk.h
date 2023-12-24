#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>

void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
int		ft_atoi_pid(char *str);
void	ft_print_signal(int signal);
void	ft_send_signal(int pid, char c);
int		ft_checkerrror_pid(char *str);

#endif