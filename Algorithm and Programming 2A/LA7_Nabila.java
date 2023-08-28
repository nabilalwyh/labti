import java.io.*;
import java.util.Scanner;

public class LA7_Nabila {
    File fileku = new File("la7_nabila.txt"); 
    Scanner input = new Scanner(System.in);

    public void menu(){
        System.out.println("========= MENU FILEKU =========");
        System.out.println("1. BUAT FILE BARU ");
        System.out.println("2. TULIS FILE ");
        System.out.println("3. BACA FILE  ");
        System.out.println("4. HAPUS FILE");
        System.out.println("5. KELUAR");
        System.out.print("Input angka: ");
        int pil = input.nextInt();

        switch (pil) {
            case 1:
                buatFile();            
                menu();
                break;
            case 2:
                tulisFile();
                menu();
                break;
            case 3:
                bacaFile();
                menu();
                break;
            case 4:
                hapusFile();
                menu();
                break;
            case 5:
                System.exit(pil);
            default:
                System.out.println("Pilihan tidak ada");
                menu();
                break;
        }
    }

    public void buatFile(){
        try {
            if(fileku.createNewFile()){
                System.out.println("File Telah Dibuat: " + fileku.getName());
            } else {
                System.out.println("File sudah ada.");
            }
        } catch (IOException e) {
            System.out.println("Terjadi Error.");
            e.printStackTrace();
        }
    }

    public void tulisFile(){
        try {
            FileWriter fileku = new FileWriter("la7_nabila.txt");
            fileku.write("Nama Lengkap: Nabila Alawiyah\n");
            fileku.write("Kelas: 1IA25\n");
            fileku.write("NPM: 51422187\n");
            fileku.close();
            System.out.println("Berhasil");
        } catch (IOException e) {
            // TODO: handle exception
            System.out.println("error");
            e.printStackTrace();
        }     
    }

    public void bacaFile(){
        try {
            Scanner input = new Scanner(fileku);
            while (input.hasNextLine()) {
              String data = input.nextLine();
              System.out.println(data);
            }
            input.close();
          } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
          }
    }

    public void hapusFile(){
        if (fileku.delete()) { 
            System.out.println("File yang telah terhapus: " + fileku.getName());
        } else {
         System.out.println("Gagal untuk menghapus file.");
        } 
    }

    public static void main(String[] args) {


        LA7_Nabila nabila = new LA7_Nabila();
        nabila.menu();
       

    }
}

