int remaining(int choc, int wrap)
{

    if (choc < wrap)
        return 0;
    else
    {
        int next = choc / wrap;

        return next + remaining(next + choc % wrap, wrap);

    }

}

int countMaxChoco(int money, int price, int wrap)
{
    int choc = money / price;
    return choc + remaining(choc, wrap);
}
