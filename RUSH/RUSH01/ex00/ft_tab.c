




void  init_tab(*argv[1])
[
    int x;
    int y;
    int tab[4][4]; 

    while(x <= 3)
    {
        while (y <= 3)
        {
            tab[x][y] = 0;
            y++;
            }
            x++;
    }
    return(tab);
]