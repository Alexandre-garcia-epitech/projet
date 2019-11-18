import java.io.IOException;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;

public class Server {
    private int port;
    private int nb_client;
    private int height;
    private int width;
    private int freq;
    private Player p_list[];
    private Map m_list[];
    private final String item[] = {"food", "sibur", "phiras", "linemate", "mendiane", "thystame", "deraumere", "player"};
    private final String cmds[] = {"forward", "right", "left", "look", "inventory", "broadcast", "connect_nbr", "fork", "eject", "take", "set", "incantation"};
    int sock_srv;
    private ServerSocket server = null;
    private String host = "";

    protected void cmd_set(int i, String a) {
        int y = 0;
        p_list[i].setRep("ko\n");
        while (y < (item.length - 1)) {
            if (item[i].equals(a) == true)
                set(i, a);
            y++;
        }
    }

    protected void set(int i, String a) {
       if (p_list[i].getInv() > 0) {
           p_list[i].getInv() -= 1;
           m_list[p_list[i].getY()][p_list[i].getX()].getRsc()[i] += 1;
           p_list[i].setRep("ok\n");
       }
    }

    protected void cmd_take(int i, String a)
    {
        int y = 0;
        p_list[i].setRep("ko\n");
        while (y < (item.length - 1)) {
            if (item[i].equals(a) == true)
                take(i, a);
            y++;
        }
    }

    protected void take(int i, String a)
    {
        if (m_list[p_list[i].getY()][p_list[i].getX()].getRsc()[i] > 0) {
            m_list[p_list[i].getY()][p_list[i].getX()].getRsc()[i] -= 1;
            p_list[i].getInv()[i] += 1;
            p_list[i].setRep("ok\n");
        }
    }

    protected void cmd_forward(int i, String a) {
        m_list[p_list[i].getY()][p_list[i].getX()].getRsc()[7] -= 1;
        p_list[i].getX() = p_list.getFwd_x();
        p_list[i].getY() = p_list.getFwd_y();
        switch (p_list[i].getMove(i)) {
            case 1:
                forward_right(i, a);
                break;
            case 2:
                forward_bottom(i, a);
                break;
            case 3:
                forward_left(i, a);
                break;
            case 4:
                forward_top(i, a);
                break;
        }
        m_list[p_list[i].getY()][p_list[i].getX()].getRsc()[7] += 1;
        p_list[i].setRep("ok\n");
    }

    protected void forward_right(int i, String a) {
        p_list[i].getFwd_x() += 1;
        if (p_list[i].getFwd_x() >= width)
            p_list[i].getFwd_x();
    }

    protected void forward_bottom(int i, String a) {
        p_list[i].getFwd_y() += 1;
        if (p_list[i].getFwd_y() >= height)
            p_list[i].getFwd_y() = 0;
    }

    protected void forward_left(int i, String a) {
        p_list[i].getFwd_x() -= 1;
        if (p_list[i].getFwd_x() < 0)
            p_list[i].getFwd_x() = (width - 1);
    }

    protected void forward_top(int i, String a) {
        p_list[i].getFwd_y() -= 1;
        if (p_list[i].getFwd_y() < 0)
            p_list[i].getFwd_y() = (height - 1);
    }

    protected void inventory(int i, String a) {
        p_list[i].setRes("[food " + Integer.toString(p_list[i].getInv()[0]);
        p_list[i].setRes(p_list[i].getRes() + ", sibur " + Integer.toString(p_list[i].getInv()[1]);
        p_list[i].setRes(p_list[i].getRes() + ", phiras " + Integer.toString(p_list[i].getInv()[2]);
        p_list[i].setRes(p_list[i].getRes() + ", linemate " + Integer.toString(p_list[i].getInv()[3]);
        p_list[i].setRes(p_list[i].getRes() + ", mendiane " + Integer.toString(p_list[i].getInv()[4]);
        p_list[i].setRes(p_list[i].getRes() + ", thystame " + Integer.toString(p_list[i].getInv()[5]);
        p_list[i].setRes(p_list[i].getRes() + ", deraumere " + Integer.toString(p_list[i].getInv()[6]);
        p_list[i].setRes(p_list[i].getRes() + "]\n");
    }

    protected void left(int i, String a) {
        p_list[i].getMove() -= 1;
        if (p_list[i].getMove() < 1)
            p_list[i].getMove() = 4;
        p_list[i].getFwd_y() = p_list[i].getY();
        p_list[i].getFwd_x() = p_list[i].getX();
        switch (p_list[i].getMove()) {
            case 1:
                forward_right(i, a);
                break;
            case 2:
                forward_bottom(i, a);
                break;
            case 3:
                forward_left(i, a);
                break;
            case 4:
                forward_top(i, a);
                break;
        }
        p_list[i].setRep("ok\n");
    }
    protected void right(int i, String a) {
        p_list[i].getMove() += 1;
        if (p_list[i].getMove() > 4)
            p_list[i].getMove() = 1;
        p_list[i].getFwd_y() = p_list[i].getY();
        p_list[i].getFwd_x() = p_list[i].getX();
        switch (p_list[i].getMove()) {
            case 1:
                forward_right(i, a);
                break;
            case 2:
                forward_bottom(i, a);
                break;
            case 3:
                forward_left(i, a);
                break;
            case 4:
                forward_top(i, a);
                break;
        }
        p_list[i].setRep("ok\n");
    }

    protected void look(int i, String a) {
        p_list[i].setRes("[");
        switch (p_list[i].getMove()) {
            case 1:
                look_right(i, a);
                break;
            case 2:
                look_bottom(i, a);
                break;
            case 3:
                look_left(i, a);
                break;
            case 4:
                look_top(i, a);
                break;
        }

    }

    protected void look_right(int i, String a) {
        int x = 0;
        int y = -x;

        while (x <= p_list[i].getLvl()) {
            int p1 = Math.abs((p_list[i].getX() + x) % width);
            while (y <= x) {
                int p2 = Math.abs((p_list[i].getY() - y) % height);
                map_check(m_list[p2][p1], p_list[i]);
                if (x != p_list[i].getLvl || y != x)
                    p_list[i].setRes(", ");
            }
            y = (y + 1) % height;
        }
        x = (x + 1) % width;
    }

    protected void look_bottom(int i, String a) {
        int x = -y;
        int y = 0;

        while (y <= p_list[i].getLvl()) {
            int p1 = Math.abs((p_list[i].getY() + y) % height);
            while (x <= y) {
                int p2 = abs((p_list[i].getX() - x) % width);
                map_check(m_list[p1][p2], p_list[i]);
                if (y != p_list[i].getLvl() || x != y)
                    p_list[i].setRes(", ");
            }
            x = (x + 1) % width;
        }
        y = (y + 1) % height;
    }

    protected void look_left(int i, String a)
    {
        int x = 0;
        int y = -x;

        while (x <= p_list[i].getLvl()) {
            int p1 = Math.abs((p_list[i].getX() - x) % width);
            for (y <= x) {
               int p2 = Math.abs((p_list[i].getY() - y) % height);
                map_check(m_list[p2][p1], p_list[i]);
                if (x != p_list.getLvl() || y != x)
                    p_list[i].setRes(", ");
            }
            y = (y + 1) % height;
        }
        x = (x + 1) % width;
    }

    protected void look_top(int i, String a)
    {
        int y = 0;
        int x = -y;

        while (y <= p_list[i].getLvl()) {
            int p1 = Math.abs((p_list[i].getY() - y) % height);
            while (x <= y) {
                int p2 = Math.abs((p_list[i].getX() - x) % width);
                map_check(m_list[p1][p2], p_list[i]);
                if (y != p_list[i].getLvl() || x != y)
                    p_list[i].setRes(", ");
            }
            x = (x + 1) % width;
        }
        y = (y + 1) % height;
    }

    protected void eject(int i, String a)
    {
	    int x = p_list[i].getX();
	    int y = p_list[i].getY();
	    int count = 0;

	    for (int z = 0; p_list[z]; z++) {
		    if (p_list[z].getX() == x && p_list[z].getY() == y)
			    count++;
	    }
	    if (count == 1) {
		    p_list[i].setRep("ko\n");
		    return;
	    }
	    else {
		    switch (p_list[i].move) {
		    case 1: eject_top(i, a);
			    break;
		    case 2: eject_right(i, a);
			    break;
		    case 3: eject_bottom(i, a);
			    break;
		    case 4: eject_left(i, a);
			    break;
		    }
		    p_list[i].setRep("ok\n");
                    return;
	    }
    }

    protected void eject_top(int i, String a)
    {
	    int x = p_list[i].getX();
	    int y = p_list[i].getY();

	    for (int z = 0; p_list[z]; z++) {
                    if (p_list[z].getX() == x && p_list[z].getY() == y && z != i)
                            p_list[z].setY(y - 1);
            }
    }

    protected void eject_right(int i, String a)
    {
            int x = p_list[i].getX();
            int y = p_list[i].getY();

            for (int z = 0; p_list[z]; z++) {
                    if (p_list[z].getX() == x && p_list[z].getY() == y && z != i)
                            p_list[z].setX(x + 1);
            }
    }

    protected void eject_bottom(int i, String a)
    {
            int x = p_list[i].getX();
            int y = p_list[i].getY();

            for (int z = 0; p_list[z]; z++) {
                    if (p_list[z].getX() == x && p_list[z].getY() == y && z != i)
                            p_list[z].setY(y + 1);
            }
    }

    protected void eject_left(int i, String a)
    {
            int x = p_list[i].getX();
            int y = p_list[i].getY();

            for (int z = 0; p_list[z]; z++) {
                    if (p_list[z].getX() == x && p_list[z].getY() == y && z != i)
                            p_list[z].setX(x - 1);
            }
    }

    protected void srv_set(Trantor trantor)
    {
        port = srv_fill_arg(trantor.tab, "-p", 4242);
        nb_client = srv_fill_arg(trantor.tab, "-c", 2);
        height = srv_fill_arg(trantor.tab, "-h", 10);
        width = srv_fill_arg(trantor.tab, "-w", 10);
        freq = srv_fill_arg(trantor.tab, "-f", 100);
        map_set();
    }

    private int srv_fill_arg(Trantor trantor, String str)
    {
        int i = 0;
        while (i < trantor.tab[i].lenght) {
            if (trantor.tab[i].equals(str) == 0)
                return (string_to_int(tab[i + 1]));
            i++;
        }
        return (z);
    }

    protected void conf_serv(Server s) {
        map_create(s);
        try {
            server = new ServerSocket(port, 100, InetAddress.getByName(host));
        } catch (UnknownHostException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
        for (int i = 0; i < port; i ++) {
            Socket client = server.accept();
            System.out.println("Welcome");
        }
    }

    private String read() throws IOException{
        String response = "";
        int stream;<question></question>
        byte[] b = new byte[4096];
        stream = reader.read(b);
        response = new String(b, 0, stream);
        return response;
    }


    public int getPort() {
        return port;
    }

    public int getNb_client() {
        return nb_client;
    }

    public int getHeight() {
        return height;
    }

    public int getWidth() {
        return width;
    }

    public int getFreq() {
        return freq;
    }

    public Player[] getP_list() {
        return p_list;
    }

    public Map[] getM_list() {
        return m_list;
    }

    public String[] getItem() {
        return item;
    }

    public String[] getCmds() {
        return cmds;
    }

    public int getSock_srv() {
        return sock_srv;
    }

    public int getSock_clt() {
        return sock_clt;
    }
}
