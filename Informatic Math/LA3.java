import java.io.*;
class LA3{
    public static void main(String[] args) throws Exception{
        BufferedReader nabilaReader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Ordo Matriks = 2*2");
            int [][] matriks = new int[2][2];
            
        System.out.println("Masukkan Elemen Matriks: ");
        for(int i = 0;i<2;i++){
            for(int j=0;j<2;j++){
                System.out.print("Elemen ["+(i+1)+","+(j+1)+"] = ");
                matriks [i][j]=Integer.parseInt(nabilaReader.readLine());
            }
        }
        
        for(int i=0;i<2;i++){
            System.out.print("|");
            for(int j=0;j<2;j++)
            {
                System.out.print(matriks[i][j]+" ");
            }
            System.out.println("|");
        }

        int determinan=((matriks[0][0]*matriks[1][1])-(matriks[1][0]*matriks[0][1]));
        System.out.println("Determinannya = "+determinan);
    }
}