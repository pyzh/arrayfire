#include <af/dim4.hpp>
#include <af/defines.h>
#include <ArrayInfo.hpp>
#include <Array.hpp>
#include <err_opencl.hpp>
#include <where.hpp>
#include <complex>
#include <kernel/where.hpp>

namespace opencl
{
    template<typename T>
    Array<uint>* where(const Array<T> &in)
    {
        Param Out;
        Param In = in;
        kernel::where<T>(Out, In);
        return createParamArray<uint>(Out);
    }


#define INSTANTIATE(T)                                  \
    template Array<uint>* where<T>(const Array<T> &in);    \

    INSTANTIATE(float  )
    INSTANTIATE(cfloat )
    INSTANTIATE(double )
    INSTANTIATE(cdouble)
    INSTANTIATE(char   )
    INSTANTIATE(int    )
    INSTANTIATE(uint   )
    INSTANTIATE(uchar  )

}
