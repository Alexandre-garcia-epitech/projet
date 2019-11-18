public class player {
    private int x;
    private int y;
    private int fwd_x;
    private int fwd_y;
    private int move;
    private int lvl;
    private int sock;
    private String rep = "";
    private int inv[] = {10, 0, 0, 0, 0, 0, 0};

    public Player(Server server, Map map) {
        move = rand() % (5 - 1) + 1;
        x = rand() % server.width;
        y = rand() % server.height;
        fwd_x = player_fwd_x(server.width);
        fwd_y = player_fwd_y(server.height);
        lvl = 1;
        server.m_list[y][x].map.rsc[7] += 1;
        for (int y = 0; y < 7; y++) {
            if (y == 1)
                inv[y] = 10;
            else
                inv[y] = 0;
        }
    }

    protected int player_fwd_x(int max)
    {
        switch (move) {
            case 1:
                if ((x += 1) >= max)
                    return (0);
                break;
            case 3:
                if ((x -= 1) < 0)
                    return (max - 1);
                break;
        }
        return (x);
    }

   protected int player_fwd_y(int max)
    {
        switch (move) {
            case 2:
                if ((y += 1) >= max)
                    return (0);
                break;
            case 4:
                if ((y -= 1) < 0)
                    return (max - 1);
                break;
        }
        return (y);
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getFwd_x() {
        return fwd_x;
    }

    public int getFwd_y() {
        return fwd_y;
    }

    public int getMove() {
        return move;
    }

    public int getLvl() {
        return lvl;
    }

    public int getSock() {
        return sock;
    }

    public String getRep() {
        return rep;
    }

    public int[] getInv() {
        return inv;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setFwd_x(int fwd_x) {
        this.fwd_x = fwd_x;
    }

    public void setFwd_y(int fwd_y) {
        this.fwd_y = fwd_y;
    }

    public void setMove(int move) {
        this.move = move;
    }

    public void setLvl(int lvl) {
        this.lvl = lvl;
    }

    public void setRep(String rep) {
        this.rep = rep;
    }
}