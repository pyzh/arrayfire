#include <af/image.h>
#include "error.hpp"

namespace af
{

array dilate(const array& in, const array& mask)
{
    af_array out = 0;
    AF_THROW(af_dilate(&out, in.get(), mask.get()));
    return array(out);
}

array dilate3d(const array& in, const array& mask)
{
    af_array out = 0;
    AF_THROW(af_dilate3d(&out, in.get(), mask.get()));
    return array(out);
}

array erode(const array& in, const array& mask)
{
    af_array out = 0;
    AF_THROW(af_erode(&out, in.get(), mask.get()));
    return array(out);
}

array erode3d(const array& in, const array& mask)
{
    af_array out = 0;
    AF_THROW(af_erode3d(&out, in.get(), mask.get()));
    return array(out);
}

}