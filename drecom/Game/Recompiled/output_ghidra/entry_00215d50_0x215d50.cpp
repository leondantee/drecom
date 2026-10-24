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

// Function: entry_00215d50
// Address: 0x215d50 - 0x215d64
void entry_00215d50_0x215d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215d50_0x215d50");
#endif

    switch (ctx->pc) {
        case 0x215d58u: goto label_215d58;
        case 0x215d60u: goto label_215d60;
        default: break;
    }

    ctx->pc = 0x215d50u;

    // 0x215d50: 0xc084a98  jal         func_212A60
    ctx->pc = 0x215D50u;
    SET_GPR_U32(ctx, 31, 0x215D58u);
    ctx->pc = 0x215D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D50u;
    // 0x215d54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x215D58u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215D58u) { return; }
    ctx->pc = 0x215D58u;
label_215d58:
    // 0x215d58: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x215D58u;
    SET_GPR_U32(ctx, 31, 0x215D60u);
    ctx->pc = 0x215D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D58u;
    // 0x215d5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x215D60u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215D60u) { return; }
    ctx->pc = 0x215D60u;
label_215d60:
    // 0x215d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x215d64u;
}
