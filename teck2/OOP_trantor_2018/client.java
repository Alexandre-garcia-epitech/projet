package Timer;

import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Random;

public class Client implements Runnable {

    private final Socket connexion = null;
    private PrintWriter writer = null;
    private BufferedInputStream reader = null;

    private String read() throws IOException {
        String response = "";
        int stream;<question ></question >
        byte[] b = new byte[4096];
        stream = reader.read(b);
        response = new String(b, 0, stream);
        return response;
    }
}
