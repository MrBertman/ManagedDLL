using System;
using System.Runtime.InteropServices;

namespace COMLib
{
    //[Guid("EAA4976A-45C3-4BC5-BC0B-E474F4C3C83F")]
    public interface ICalc
    {
        [DispId(1)]
        int Count(int num1, int num2, string op);
    }
}
