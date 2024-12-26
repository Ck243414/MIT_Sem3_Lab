class Game
{
    void type()
    {
        System.out.println("indoor & outdoor games");
    }
}

class Cricket extends Game
{
    void type()
    {
        System.out.println("cricket is an outdoor game");
    }
}

class Chess extends Game
{
    void type()
    {
        System.out.println("chess is an indoor game");
    }
}

public class GameMain
{
    public static void main(String args[])
    {
        Game game = new Game();
        Cricket cricket = new Cricket();
        Chess chess = new Chess();
        Game ref;
        ref = game; ref.type();
        ref = cricket; ref.type();
        ref = chess; ref.type();
    }
}