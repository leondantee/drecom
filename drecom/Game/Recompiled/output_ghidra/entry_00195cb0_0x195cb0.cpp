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

// Function: entry_00195cb0
// Address: 0x195cb0 - 0x195cd4
void entry_00195cb0_0x195cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195cb0_0x195cb0");
#endif

    ctx->pc = 0x195cb0u;

    // 0x195cb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x195cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x195cb4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CE4u;
            return;
        }
    }
    ctx->pc = 0x195CBCu;
    // 0x195cbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195cc0: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195CC0u;
    {
        const bool branch_taken_0x195cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x195cc0) {
            ctx->pc = 0x195CD4u;
            return;
        }
    }
    ctx->pc = 0x195CC8u;
    // 0x195cc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x195cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x195ccc: 0x8c32ee30  lw          $s2, -0x11D0($at)
    ctx->pc = 0x195cccu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3EEE30u));
    // 0x195cd0: 0x0  nop
    ctx->pc = 0x195cd0u;
    // NOP
    ctx->pc = 0x195cd4u;
}
