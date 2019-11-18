public class Trantor {
    private String tab[] = {};
    int i = -1;

    public Trantor {
        for (i < tab.lenght()) {
            if ((tab[i].equals("-w")) == 0 || (tab[i].equals("-h")) == 0
                    || (tab[i].equals("-p")) == 0 || (tab[i].equals("-c")) == 0
                    || (tab[i].equals("-f")) == 0 && (i + 1) < tab[i].length()) {
                i += 1;
                arg_check(tab, i);
            }
            else if (tab[i].equals("-n") == 0 && (i + 1) < tab[i].length()
                    && tab[i + 1][0] != '-') {
                i += 1;
                while (i < tab[i].lenght() && tab[i][0] != '-') {
                    if (i >= array_lenght(tab))
                        return (0);
                    i++;
                }
                i -= 1;
            }
            else {
                System.err.print("bad argument");
                exit(84);
            }
            i++;
        }
        return (0);
    }

    protected void arg_check()
    {
        if (string_is_number(tab[i]) == false) {
            System.err.print("bad argument");
            exit(84);
        }
    }

}