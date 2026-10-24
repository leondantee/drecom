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

// Function: entry_0010f7a8
// Address: 0x10f7a8 - 0x10f7cc
void entry_0010f7a8_0x10f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f7a8_0x10f7a8");
#endif

    ctx->pc = 0x10f7a8u;

label_10f7a8:
    // 0x10f7a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10f7ac: 0x0  nop
    ctx->pc = 0x10f7acu;
    // NOP
    // 0x10f7b0: 0x0  nop
    ctx->pc = 0x10f7b0u;
    // NOP
    // 0x10f7b4: 0x0  nop
    ctx->pc = 0x10f7b4u;
    // NOP
    // 0x10f7b8: 0x0  nop
    ctx->pc = 0x10f7b8u;
    // NOP
    // 0x10f7bc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10F7BCu;
    {
        const bool branch_taken_0x10f7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10f7bc) {
            ctx->pc = 0x10F7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f7a8;
        }
    }
    ctx->pc = 0x10F7C4u;
    // 0x10f7c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10F7C4u;
    {
        const bool branch_taken_0x10f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7C4u;
        // 0x10f7c8: 0x26903e80  addiu       $s0, $s4, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7c4) {
            ctx->pc = 0x10F768u;
            return;
        }
    }
    ctx->pc = 0x10F7CCu;
}
