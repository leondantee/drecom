#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00224aa8
// Address: 0x224aa8 - 0x224ab0
void entry_00224aa8_0x224aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224aa8_0x224aa8");
#endif

    ctx->pc = 0x224aa8u;

    // 0x224aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x224aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224aac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x224aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x224ab0u;
}
