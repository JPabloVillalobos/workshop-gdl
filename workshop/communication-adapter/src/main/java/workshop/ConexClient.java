package workshop;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;


public class ConexClient {
	final String HOST ="localhost";//declaro la ip constante
	final int PUERTO = 3550;//puerto para conexcion
	
	//declaracion de varialbes
	Socket sc;
	PrintStream mensaje;
	InputStreamReader entrada;
	InputStreamReader entrada2;
	



	public void initClient()
	{
		try {
			sc= new Socket(HOST, PUERTO);
			entrada = new InputStreamReader(sc.getInputStream());
			BufferedReader reader = new BufferedReader(entrada);
			String str= reader.readLine();

			
			System.out.println("mensaje de entrada: "+ str);

			mensaje = new PrintStream(sc.getOutputStream());
			mensaje.println("HOLA ");
			sc.close();
			
		}catch (IOException e)
		{
			e.printStackTrace();
		}
	}

}
