



void check_lines(int *tab, int x)
{
    int i;
    int o;

    i = 0;
    while(tab[i] <= x <= 3)
    {
        if(x == 0)
        {
            o = tab[i];
            i++;
        }
        while(x == 1)
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
        while(x == 2)
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
        while(x == 3)
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
        while(x == 3)
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