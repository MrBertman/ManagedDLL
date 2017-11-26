using System;
using System.Runtime.InteropServices;

namespace COMLib
{
    //[Guid("0D53A3E8-E51A-49C7-944E-E72A2064F938"),
    //    ClassInterface(ClassInterfaceType.None)]
    public class Calc : ICalc
    {
        public int Count(int num1, int num2, string op)
        {
            int res = 0;

            switch (op)
            {
                case "+": res = num1 + num2; break;
                case "-": res = num1 - num2; break;
                case "*": res = num1 * num2; break;
                case "/":
                    if (num2 != 0)
                    {
                        res = num1 / num2;
                    }
                    break;
            }

            return res;
        }
    }
}
