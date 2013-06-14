package workshop;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;


public class ConexClient {
	final String HOST ="localhost";//declaro la ip constante
	final int PUERTO = 3550;//puerto para conexcion
	
	public void initClient()
	{
		try {
			Socket sc= new Socket(HOST, PUERTO);
			InputStreamReader entrada = new InputStreamReader(sc.getInputStream());
			BufferedReader reader = new BufferedReader(entrada);
			String str= reader.readLine();
			
			System.out.println("mensaje de entrada: "+ str);

			PrintStream mensaje = new PrintStream(sc.getOutputStream());
			mensaje.println("23456ABCAX");
			
			InputStreamReader cliente = new InputStreamReader(sc.getInputStream());
			BufferedReader reader2 = new BufferedReader(cliente);
			String str2= reader2.readLine();
			System.out.println("Cliente Solicitado: "+ str2);
			sc.close();
			
		}catch (IOException e)
		{
			e.printStackTrace();
		}
	}

}
