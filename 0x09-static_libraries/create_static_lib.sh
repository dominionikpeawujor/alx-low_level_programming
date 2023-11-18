#!/bin/bash

gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ar -rc libmy.a *.o