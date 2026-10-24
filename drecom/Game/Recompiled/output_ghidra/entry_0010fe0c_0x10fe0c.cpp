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

// Function: entry_0010fe0c
// Address: 0x10fe0c - 0x10fe28
void entry_0010fe0c_0x10fe0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fe0c_0x10fe0c");
#endif

    switch (ctx->pc) {
        case 0x10fe24u: goto label_10fe24;
        default: break;
    }

    ctx->pc = 0x10fe0cu;

    // 0x10fe0c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10fe10: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10fe14: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x10fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x10fe18: 0x8c6445b8  lw          $a0, 0x45B8($v1)
    ctx->pc = 0x10fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3845B8u));
    // 0x10fe1c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10FE1Cu;
    SET_GPR_U32(ctx, 31, 0x10FE24u);
    ctx->pc = 0x10FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE1Cu;
    // 0x10fe20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10FE24u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FE24u) { return; }
    ctx->pc = 0x10FE24u;
label_10fe24:
    // 0x10fe24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10fe24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fe28u;
}
