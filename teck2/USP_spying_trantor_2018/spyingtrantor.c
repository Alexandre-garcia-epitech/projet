/*
** EPITECH PROJECT, 2018
** spyingtrantor
** File description:
** spyingtrantor
*/

#include "include/my.h"

void    loop_function(int descript, char **av)
{
    char *asr = "";
    char *cmd_send;
    size_t buffer = BUFF;

    while (test_dead_ext(descript, asr) == 0) {
        write(1, "$>", 2);
        if (getline(&cmd_send, &buffer, stdin) == -1)
            exit(0);
        if (test_cmd(cmd_send) == 0) {
            write(descript, cmd_send, my_strlen(cmd_send));
            asr = malloc(sizeof(char) * BUFF);
            read(descript, asr, BUFF);
            write(1, asr, my_strlen(asr));
        }
    }
}

int    send_info_team(int descript, char **av)
{
    char *str = malloc(sizeof(char) * BUFF);

    read(descript, str, BUFF);
    error_server(str);
    write(descript, av[3], my_strlen(av[3]));
    write(descript, "\n", 1);
    read(descript, str, BUFF);
    test_error_team(str, av);
    loop_function(descript, av);
    return (0);
}

int    main(int ac, char **av)
{
    int connection;
    int descript;
    struct sockaddr_in sockett;

    error_argument(ac);
    test_port(av[2]);
    descript = socket(AF_INET, SOCK_STREAM, 0);
    error_socket(descript);
    sockett.sin_family = AF_INET;
    sockett.sin_port = htons(atoi(av[2]));
    sockett.sin_addr.s_addr = inet_addr(av[1]);
    connection = connect(descript, (struct sockaddr *)&sockett,
    sizeof(sockett));
    error_connection(connection, av);
    send_info_team(descript, av);
    return (0);
}
