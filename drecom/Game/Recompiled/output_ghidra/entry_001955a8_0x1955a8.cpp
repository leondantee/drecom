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

// Function: entry_001955a8
// Address: 0x1955a8 - 0x1955c4
void entry_001955a8_0x1955a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955a8_0x1955a8");
#endif

    ctx->pc = 0x1955a8u;

    // 0x1955a8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1955ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1955acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1955b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1955B0u;
    {
        const bool branch_taken_0x1955b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955b0) {
            ctx->pc = 0x1955C4u;
            return;
        }
    }
    ctx->pc = 0x1955B8u;
    // 0x1955b8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1955b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1955bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1955BCu;
    {
        const bool branch_taken_0x1955bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955bc) {
            ctx->pc = 0x1955E0u;
            return;
        }
    }
    ctx->pc = 0x1955C4u;
}
