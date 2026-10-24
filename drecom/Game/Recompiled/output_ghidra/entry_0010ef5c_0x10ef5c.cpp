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

// Function: entry_0010ef5c
// Address: 0x10ef5c - 0x10ef7c
void entry_0010ef5c_0x10ef5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef5c_0x10ef5c");
#endif

    switch (ctx->pc) {
        case 0x10ef68u: goto label_10ef68;
        default: break;
    }

    ctx->pc = 0x10ef5cu;

    // 0x10ef5c: 0x8e6445bc  lw          $a0, 0x45BC($s3)
    ctx->pc = 0x10ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17852)));
    // 0x10ef60: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10EF60u;
    SET_GPR_U32(ctx, 31, 0x10EF68u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10EF68u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EF68u) { return; }
    ctx->pc = 0x10EF68u;
label_10ef68:
    // 0x10ef68: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x10ef68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x10ef6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ef70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10ef74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10EF74u;
    {
        const bool branch_taken_0x10ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF74u;
        // 0x10ef78: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef74) {
            ctx->pc = 0x10EFA4u;
            return;
        }
    }
    ctx->pc = 0x10EF7Cu;
}
