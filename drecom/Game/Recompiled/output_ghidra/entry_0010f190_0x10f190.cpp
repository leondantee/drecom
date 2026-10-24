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

// Function: entry_0010f190
// Address: 0x10f190 - 0x10f1b8
void entry_0010f190_0x10f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f190_0x10f190");
#endif

    switch (ctx->pc) {
        case 0x10f1a4u: goto label_10f1a4;
        default: break;
    }

    ctx->pc = 0x10f190u;

    // 0x10f190: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10f194: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x10f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10f198: 0x8c6445bc  lw          $a0, 0x45BC($v1)
    ctx->pc = 0x10f198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17852)));
    // 0x10f19c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F19Cu;
    SET_GPR_U32(ctx, 31, 0x10F1A4u);
    ctx->pc = 0x10F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F19Cu;
    // 0x10f1a0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F1A4u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F1A4u) { return; }
    ctx->pc = 0x10F1A4u;
label_10f1a4:
    // 0x10f1a4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10f1a8: 0x8c6245a8  lw          $v0, 0x45A8($v1)
    ctx->pc = 0x10f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10f1ac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x10f1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10f1b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F1B0u;
    {
        const bool branch_taken_0x10f1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1B0u;
        // 0x10f1b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1b0) {
            ctx->pc = 0x10F1C8u;
            return;
        }
    }
    ctx->pc = 0x10F1B8u;
}
