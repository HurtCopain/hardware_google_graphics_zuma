/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef EXYNOS_RESOURCE_RESTRICTION_ZUMA_H_
#define EXYNOS_RESOURCE_RESTRICTION_ZUMA_H_

#include "../../gs201/libhwc2.1/ExynosResourceRestriction.h"

namespace zuma {

static feature_support_t feature_table[] = {
    {MPP_DPP_GFS,
        MPP_ATTR_AFBC | MPP_ATTR_BLOCK_MODE | MPP_ATTR_WINDOW_UPDATE |
        MPP_ATTR_SCALE |MPP_ATTR_ROT_90 |
        MPP_ATTR_FLIP_H | MPP_ATTR_FLIP_V |
        MPP_ATTR_DIM |
        MPP_ATTR_WCG | MPP_ATTR_HDR10 | MPP_ATTR_HDR10PLUS |
        MPP_ATTR_LAYER_TRANSFORM
    },

    {MPP_DPP_VGRFS,
        MPP_ATTR_AFBC | MPP_ATTR_BLOCK_MODE | MPP_ATTR_WINDOW_UPDATE | MPP_ATTR_SCALE |
        MPP_ATTR_FLIP_H | MPP_ATTR_FLIP_V | MPP_ATTR_ROT_90 |
        MPP_ATTR_DIM |
        MPP_ATTR_WCG | MPP_ATTR_HDR10 | MPP_ATTR_HDR10PLUS |
        MPP_ATTR_LAYER_TRANSFORM
    },

    {MPP_G2D,
        MPP_ATTR_AFBC | MPP_ATTR_SCALE |
        MPP_ATTR_FLIP_H | MPP_ATTR_FLIP_V | MPP_ATTR_ROT_90 |
        MPP_ATTR_WCG | MPP_ATTR_HDR10 | MPP_ATTR_HDR10PLUS | MPP_ATTR_USE_CAPA |
        MPP_ATTR_LAYER_TRANSFORM
    }
};

static const restriction_key_t restriction_format_table[] = {
    {MPP_DPP_GFS, NODE_NONE, HAL_PIXEL_FORMAT_RGB_565, 0},
    {MPP_DPP_GFS, NODE_NONE, HAL_PIXEL_FORMAT_RGBA_8888, 0},
    {MPP_DPP_GFS, NODE_NONE, HAL_PIXEL_FORMAT_RGBX_8888, 0},
    {MPP_DPP_GFS, NODE_NONE, HAL_PIXEL_FORMAT_BGRA_8888, 0},
    {MPP_DPP_GFS, NODE_NONE, HAL_PIXEL_FORMAT_RGBA_1010102, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_RGB_565, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_RGBA_8888, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_RGBX_8888, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_BGRA_8888, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_RGBA_1010102, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M_PRIV, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCrCb_420_SP_M, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCrCb_420_SP_M_FULL, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SPN, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M_S10B, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SPN_S10B, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_P010_M, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_P010_SPN, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_YCBCR_P010, 0},
    {MPP_DPP_VGRFS, NODE_NONE, MALI_GRALLOC_FORMAT_INTERNAL_P010, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_GOOGLE_NV12_SP, 0},
    {MPP_DPP_VGRFS, NODE_NONE, HAL_PIXEL_FORMAT_GOOGLE_NV12_SP_10B, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_RGB_565, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_RGB_888, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_RGBA_8888, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_RGBX_8888, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_BGRA_8888, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_RGBA_1010102, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M_PRIV, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M_TILED, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCrCb_420_SP_M, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCrCb_420_SP_M_FULL, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SPN, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SP_M_S10B, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SPN_S10B, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_P010_M, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_P010_SPN, 0},
    {MPP_G2D, NODE_NONE, MALI_GRALLOC_FORMAT_INTERNAL_P010, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_YCrCb_420_SP, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_EXYNOS_YCbCr_420_SPN_TILED, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_GOOGLE_NV12_SP, 0},
    {MPP_G2D, NODE_NONE, HAL_PIXEL_FORMAT_GOOGLE_NV12_SP_10B, 0},
};


static ppc_table ppc_table_map = {
    /* G2D support only 2 plane YUV, so all YUV format should use YUV2P PPC table */
    /* In case of Scale-Up, G2D should use same PPC table */
    {PPC_IDX(MPP_G2D,PPC_FORMAT_YUV420,PPC_ROT_NO),   {2.2, 2.4, 4.3, 5.0, 4.5, 3.4, 3.4}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_YUV420,PPC_ROT),      {2.2, 3.6, 4.2, 4.3, 3.6, 2.0, 2.0}},

    {PPC_IDX(MPP_G2D,PPC_FORMAT_YUV422,PPC_ROT_NO),   {2.2, 2.4, 4.3, 5.0, 4.5, 3.4, 3.4}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_YUV422,PPC_ROT),      {2.2, 3.6, 4.2, 4.3, 3.6, 2.0, 2.0}},

    {PPC_IDX(MPP_G2D,PPC_FORMAT_P010,PPC_ROT_NO),     {2.2, 2.4, 4.3, 5.0, 4.5, 3.4, 3.4}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_P010,PPC_ROT),        {2.2, 3.6, 4.2, 4.3, 3.6, 2.0, 2.0}},

    {PPC_IDX(MPP_G2D,PPC_FORMAT_RGB32,PPC_ROT_NO),    {3.6, 2.0, 2.9, 2.3, 2.9, 3.9, 3.9}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_RGB32,PPC_ROT),       {3.5, 3.2, 3.5, 3.4, 3.8, 3.8, 3.8}},

    {PPC_IDX(MPP_G2D,PPC_FORMAT_SBWC,PPC_ROT_NO),     {3.2, 2.8, 3.0, 3.5, 2.9, 3.3, 3.3}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_SBWC,PPC_ROT),        {2.2, 3.1, 3.2, 3.2, 2.8, 1.9, 1.9}},

    {PPC_IDX(MPP_G2D,PPC_FORMAT_AFBC_RGB,PPC_ROT_NO), {3.1, 2.8, 2.6, 3.0, 3.7, 3.0, 3.0}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_AFBC_RGB,PPC_ROT),    {2.1, 3.2, 3.2, 3.5, 3.4, 3.8, 3.8}},

    {PPC_IDX(MPP_G2D,PPC_FORMAT_AFBC_YUV,PPC_ROT_NO), {3.0, 3.3, 3.1, 3.2, 3.4, 3.3, 3.3}},
    {PPC_IDX(MPP_G2D,PPC_FORMAT_AFBC_YUV,PPC_ROT),    {2.2, 3.0, 3.4, 3.6, 3.6, 2.0, 2.0}},
};

} // namespace zuma

#endif // EXYNOS_RESOURCE_RESTRICTION_ZUMA_H_
