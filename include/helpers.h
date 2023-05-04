#ifndef HELPERS_H
#define HELPERS_H

void deallocate(t_file_list *head);
void print_list(t_file_list *head);
int search_list_for_name(t_file_list *head, char *name);
t_file_list *add_node_content(t_file_list *head, char *name, char *archiveContent, file_type type);
t_file_list *add_node_time(t_file_list *head, char *name, long long mtime, file_type type);
t_file_list *add_node(t_file_list *head, char *name, file_type type);
char *reverse_string(char *word);
char *my_itoa(int num);
char *dec_to_octal(int dec);
int my_iterative_pow(int nbr, int pwr);
long octal_to_decimal(long nbr);
long long check_mtime(char *file);
int not_just_dots(char *str);

#endif