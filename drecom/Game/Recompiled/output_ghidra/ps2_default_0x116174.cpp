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

// Function: default
// Address: 0x116174 - 0x116190
void ps2_default_0x116174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x116174");
#endif

    ctx->pc = 0x116174u;

    // 0x116174: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x116174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116178: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x116178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x11617c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11617Cu;
    {
        const bool branch_taken_0x11617c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11617Cu;
        // 0x116180: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11617c) {
            ctx->pc = 0x1161B8u;
            return;
        }
    }
    ctx->pc = 0x116184u;
    // 0x116184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116188: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x116188u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x11618c: 0x0  nop
    ctx->pc = 0x11618cu;
    // NOP
    ctx->pc = 0x116190u;
}
