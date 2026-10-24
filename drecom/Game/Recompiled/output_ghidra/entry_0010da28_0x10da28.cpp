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

// Function: entry_0010da28
// Address: 0x10da28 - 0x10da44
void entry_0010da28_0x10da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010da28_0x10da28");
#endif

    switch (ctx->pc) {
        case 0x10da40u: goto label_10da40;
        default: break;
    }

    ctx->pc = 0x10da28u;

    // 0x10da28: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10da28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10da2c: 0x27c23e40  addiu       $v0, $fp, 0x3E40
    ctx->pc = 0x10da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 15936));
    // 0x10da30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10da30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10da34: 0x8ec445b8  lw          $a0, 0x45B8($s6)
    ctx->pc = 0x10da34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17848)));
    // 0x10da38: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DA38u;
    SET_GPR_U32(ctx, 31, 0x10DA40u);
    ctx->pc = 0x10DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA38u;
    // 0x10da3c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DA40u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DA40u) { return; }
    ctx->pc = 0x10DA40u;
label_10da40:
    // 0x10da40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10da40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10da44u;
}
