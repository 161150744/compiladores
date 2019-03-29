#!/bin/bash

lex exemplo.l
gcc -lfl lex.yy.c