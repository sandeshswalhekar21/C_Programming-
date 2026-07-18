
import java.util.*;



class program65
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);

       int iValue = 0;
       boolean bRet = false;
       
       System.out.println("Enter Number :");
       iValue = sobj.nextInt();

       NumberX nobj = new NumberX();  
       bRet = nobj.CheckPrime(iValue);

      if( bRet == true)
      {
        System.out.printf("It is Prime");
      }
      else
      {
        System.out.printf("It is not Prime");
      }
    }
}

class NumberX                                           
{
  public boolean CheckPrime(int iNo)
  {
        int iCnt = 0;
        

        for (iCnt=2; iCnt<= (iNo/2); iCnt++)
        {
          if((iNo % iCnt) ==0)
          {
           break;
          }
         
        }
        if(iCnt >= (iNo/2)+1)
        {
          return false;
        }
        else
        {
          return true;
        }
  }
   
}



