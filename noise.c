main(i) { for (;;i++) putchar(i + (1 - (i >> 17)) * ((i * i >> 2) & i >> 8)); }
