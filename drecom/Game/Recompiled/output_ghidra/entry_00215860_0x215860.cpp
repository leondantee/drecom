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

// Function: entry_00215860
// Address: 0x215860 - 0x215878
void entry_00215860_0x215860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215860_0x215860");
#endif

    switch (ctx->pc) {
        case 0x215868u: goto label_215868;
        case 0x215870u: goto label_215870;
        default: break;
    }

    ctx->pc = 0x215860u;

    // 0x215860: 0xc084a98  jal         func_212A60
    ctx->pc = 0x215860u;
    SET_GPR_U32(ctx, 31, 0x215868u);
    ctx->pc = 0x215864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215860u;
    // 0x215864: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x215868u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215868u) { return; }
    ctx->pc = 0x215868u;
label_215868:
    // 0x215868: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x215868u;
    SET_GPR_U32(ctx, 31, 0x215870u);
    ctx->pc = 0x21586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215868u;
    // 0x21586c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x215870u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215870u) { return; }
    ctx->pc = 0x215870u;
label_215870:
    // 0x215870: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x215870u;
    {
        const bool branch_taken_0x215870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215870u;
        // 0x215874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215870) {
            ctx->pc = 0x2158B4u;
            return;
        }
    }
    ctx->pc = 0x215878u;
}
