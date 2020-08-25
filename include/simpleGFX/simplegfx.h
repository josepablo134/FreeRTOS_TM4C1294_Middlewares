#ifndef GFX_H_
#define GFX_H_

#ifdef __cplusplus
    extern "C"
    {
#endif

	#include <stdbool.h>
    #include <stdint.h>
    #include <simpleGFX/simplegfx_config.h>

    /*
    *   Type of framebuffer depends on implementation of
    *   display.
    **/

    typedef struct framebuffer_t{
                uint16_t    height,width;
                uint16_t    pages,columns;
                uint16_t    buffLength;
                uint8_t     *buffer;
    }framebuffer_t;

    extern void gfx_init( framebuffer_t* fb );

	extern void gfx_fillScreen( framebuffer_t* fb , uint32_t value );
	
	extern void gfx_merge( framebuffer_t* fbDest , framebuffer_t* fbA , framebuffer_t* fbB );

	extern void gfx_drawPixel( framebuffer_t* fb , uint16_t x , uint16_t y , uint32_t value );

	extern void gfx_drawHLine( framebuffer_t* fb , uint16_t x , uint16_t y , uint16_t length , uint32_t value );

	extern void gfx_drawVLine( framebuffer_t* fb , uint16_t x , uint16_t y , uint16_t length , uint32_t value );

	extern void gfx_drawLine( framebuffer_t* fb , uint16_t x0 , uint16_t y0 , uint16_t x1 , uint16_t y1 , uint32_t value );

	extern void gfx_drawTriangle( framebuffer_t* fb , uint16_t x0 , uint16_t y0 , uint16_t x1 , uint16_t y1 ,
									uint16_t x2 , uint16_t y2 , uint32_t value );

	extern void gfx_drawRect( framebuffer_t* fb , uint16_t x , uint16_t y , uint16_t w , uint16_t h , uint32_t value );

	extern void gfx_drawCircle( framebuffer_t* fb , uint16_t x0 , uint16_t y0 , uint16_t r , uint32_t value );

	extern void gfx_drawBitmap( framebuffer_t* fb, uint16_t x, uint16_t y, const uint8_t bitmap[],
								uint16_t w, uint16_t h, uint32_t value);

#ifdef __cplusplus
    }
#endif

#endif