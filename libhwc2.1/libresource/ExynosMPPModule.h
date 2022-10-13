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

#ifndef _EXYNOS_MPP_MODULE_ZUMA_H
#define _EXYNOS_MPP_MODULE_ZUMA_H

#include "../../gs201/libhwc2.1/libresource/ExynosMPPModule.h"

namespace zuma {

class ExynosMPPModule : public gs201::ExynosMPPModule {
    public:
        ExynosMPPModule(ExynosResourceManager* resourceManager, uint32_t physicalType,
                        uint32_t logicalType, const char* name, uint32_t physicalIndex,
                        uint32_t logicalIndex, uint32_t preAssignInfo);
        ~ExynosMPPModule();
        virtual void initTDMInfo(uint32_t hwBlockIndex, uint32_t axiPortIndex);
};

}  // namespace zuma

#endif // _EXYNOS_MPP_MODULE_ZUMA_H
