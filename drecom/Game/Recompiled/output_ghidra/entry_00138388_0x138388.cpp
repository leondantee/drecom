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

// Function: entry_00138388
// Address: 0x138388 - 0x1383b8
void entry_00138388_0x138388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138388_0x138388");
#endif

    ctx->pc = 0x138388u;

    // 0x138388: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x138388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13838c: 0x8e540058  lw          $s4, 0x58($s2)
    ctx->pc = 0x13838cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x138390: 0xa2800f30  sb          $zero, 0xF30($s4)
    ctx->pc = 0x138390u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3888), (uint8_t)GPR_U32(ctx, 0));
    // 0x138394: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x138394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138398: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13839c: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x13839cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1383a0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1383a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1383a8: 0xa0601170  sb          $zero, 0x1170($v1)
    ctx->pc = 0x1383a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4464), (uint8_t)GPR_U32(ctx, 0));
    // 0x1383ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1383acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1383b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1383B0u;
    {
        const bool branch_taken_0x1383b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383b0) {
            ctx->pc = 0x1383E0u;
            return;
        }
    }
    ctx->pc = 0x1383B8u;
}
