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

// Function: entry_00340cb8
// Address: 0x340cb8 - 0x340ce0
void entry_00340cb8_0x340cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340cb8_0x340cb8");
#endif

    ctx->pc = 0x340cb8u;

    // 0x340cb8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340cb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340cc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cc4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340cc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ccc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cd4: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x340cd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x340CD8u;
    {
        const bool branch_taken_0x340cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340cd8) {
            ctx->pc = 0x340D00u;
            return;
        }
    }
    ctx->pc = 0x340CE0u;
}
