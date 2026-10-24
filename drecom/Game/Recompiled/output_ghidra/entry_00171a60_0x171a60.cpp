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

// Function: entry_00171a60
// Address: 0x171a60 - 0x171a80
void entry_00171a60_0x171a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a60_0x171a60");
#endif

    ctx->pc = 0x171a60u;

    // 0x171a60: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x171a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x171a64: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x171a64u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171a68: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171A68u;
    {
        const bool branch_taken_0x171a68 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x171a68) {
            ctx->pc = 0x171A80u;
            return;
        }
    }
    ctx->pc = 0x171A70u;
    // 0x171a70: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171a74: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x171a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x171a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171A78u;
    {
        const bool branch_taken_0x171a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a78) {
            ctx->pc = 0x171A88u;
            return;
        }
    }
    ctx->pc = 0x171A80u;
}
