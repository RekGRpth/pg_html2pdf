#ifndef __MYWPDFRENDERER_HPP
#define __MYWPDFRENDERER_HPP

#ifdef __cplusplus
extern "C" {
#endif

#include <hpdf.h>

typedef void (MyWPdfRenderer_error)(const char *msg);
bool MyWPdfRenderer_render(MyWPdfRenderer_error error, HPDF_Doc pdf, HPDF_Page page, const char *html);

#ifdef __cplusplus
}
#endif
#endif