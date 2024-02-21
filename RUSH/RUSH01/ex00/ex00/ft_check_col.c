void check_lines(int *tab, int y)
{
    int i;
    int o;

    i = 0;
    while(tab[i] <= y <= 3)
    {
        if(y == 0)
        {
            o = tab[i];
            i++;
        }
        while(y == 1)
        {
            if(tab[i] == o)
            {
                tab[i]++;
                o = tab[i];
            }
            else
            {
                i++;
            }
        }
        while(y == 2)
        {
            if(tab[i] == o)
            {
                tab[i]++;
                o = tab[i];
            }
            else
            {
                i++;
            }
        }
        while(y == 3)
        {
            if(tab[i] == o)
            {
                tab[i]++;
                o = tab[i];
            }
            else
            {
                i++;
            }
        }
        while(y == 3)
        {
            if(tab[i] == o)
            {
                tab[i]++;
                o = tab[i];
            }
            else
            {
                i++;
            }
        }
    }
    return(0);
}