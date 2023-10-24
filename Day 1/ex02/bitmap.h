#include <stdint.h>
#include <stddef.h>

typedef struct bmp_header_t
{
    uint16_t magic;
    uint32_t size;
    uint16_t _app1;
    uint16_t _app2;
    uint32_t offset;
} bmp_header_t;

typedef struct bmp_info_header_t
{
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t raw_data_size;
    uint32_t h_resolution;
    uint32_t v_resolution;
    uint32_t palette_size;
    uint32_t important_colors;
} bmp_info_header_t;