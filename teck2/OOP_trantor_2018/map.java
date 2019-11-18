public class Map {
    private int x;
    private int y;
    private int rsc[];

    public static void map_check(Map map, Player ply) {
        for (int y = 0; y < rsc[7]; y ++)
            ply.setRep("Player ");
        for (int y = 0; y < rsc[0]; y ++)
            ply.setRep("food ");
        for (int y = 0; y < rsc[1]; y ++)
            ply.setRep("sibur ");
        for (int y = 0; y < rsc[2]; y ++)
            ply.setRep("phiras ");
        for (int y = 0; y < rsc[3]; y ++)
            ply.setRep("linemate ");
        for (int y = 0; y < rsc[4]; y ++)
            ply.setRep("mendiane ");
        for (int y = 0; y < rsc[5]; y ++)
            ply.setRep("thystame ");
        for (int y = 0; y < rsc[6]; y ++)
            ply.setRep("deraumere ");
    }

    protected void map_create(Server s) {
        Map cell = new Map();

        map_ srand(time(NULL));
        for (int y = 0; y < s.height; y++) {
            for (int x = 0; x < s.width; x++) {
                map_cell_fill(cell, y, x);
                s.m_list[y][x] = cell;
            }
        }
        s.m_list[s.height] = NULL;
    }

    protected void map_cell_fill(Map cell, int y, int x) {
        cell.x = x;
        cell.y = y;
        cell.rsc[0] = map_item_gen(40, 1, 3);
        cell.rsc[1] = map_item_gen(80, 1, 3);
        cell.rsc[2] = map_item_gen(60, 1, 3);
        cell.rsc[3] = map_item_gen(30, 1, 3);
        cell.rsc[4] = map_item_gen(30, 1, 3);
        cell.rsc[5] = map_item_gen(50, 1, 3);
        cell.rsc[6] = map_item_gen(10, 1, 2);
        cell.rsc[7] = 0;
    }
protected void map_create(Server s) {
	Map cell = new Map();

	srand(time(NULL));
	for (int y = 0; y < s.height; y++) {
		for (int x = 0; x < s.width; x++) {
			map_cell_fill(cell, y, x);
			s.m_list[y][x] = cell;
		}
	}
	s.m_list[s.height] = NULL;
}

protected void map_cell_fill(Map cell, int y, int x) {
	cell.x = x;
	cell.y = y;
	cell.rsc[0] = map_item_gen(40, 1, 3);
	cell.rsc[1] = map_item_gen(80, 1, 3);
	cell.rsc[2] = map_item_gen(60, 1, 3);
	cell.rsc[3] = map_item_gen(30, 1, 3);
	cell.rsc[4] = map_item_gen(30, 1, 3);
	cell.rsc[5] = map_item_gen(50, 1, 3);
	cell.rsc[6] = map_item_gen(10, 1, 2);
	cell.rsc[7] = 0;
}

protected String map_cell_check(Server s, Map m, String str)
{
    for (int x = 0; x < m.rsc[7]; x++) {
        str = string_concat(str, s.item[7]);
        str = string_concat(str, " ");
    }
    for (int y = 0; y < 7; y++) {
        for (int x = 0; x < m.rsc[y]; x++) {
            str = string_concat(str, s.item[y]);
            str = string_concat(str, " ");
        }
    }
    str[string_lenght(str) - 1] = '\0';
    return (str);
}

protected int map_item_gen(int percent, int min, int max)
{
    int rslt = map_rand() % 100 + 1;

    if (rslt <= percent)
        return (map_rand() % (max - min) + min);
    return (0);
}

    protected String map_cell_check(Server s, Map m, String str)
    {
        for (int x = 0; x < m.rsc[7]; x++) {
            str = string_concat(str, s.item[7]);
            str = string_concat(str, " ");
        }
        for (int y = 0; y < 7; y++) {
            for (int x = 0; x < m.rsc[y]; x++) {
                str = string_concat(str, s.item[y]);
                str = string_concat(str, " ");
            }
        }
        str[string_lenght(str) - 1] = '\0';
        return (str);
    }

    protected int map_item_gen(int percent, int min, int max)
    {
        int rslt = map_rand() % 100 + 1;

        if (rslt <= percent)
            return (map_rand() % (max - min) + min);
        return (0);
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int[] getRsc() {
        return rsc;
    }
}