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

// Function: entry_001186a8
// Address: 0x1186a8 - 0x1186cc
void entry_001186a8_0x1186a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186a8_0x1186a8");
#endif

    ctx->pc = 0x1186a8u;

label_1186a8:
    // 0x1186a8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1186a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1186ac: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1186acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1186b0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1186b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1186b4: 0x0  nop
    ctx->pc = 0x1186b4u;
    // NOP
    // 0x1186b8: 0x0  nop
    ctx->pc = 0x1186b8u;
    // NOP
    // 0x1186bc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1186BCu;
    {
        const bool branch_taken_0x1186bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1186bc) {
            ctx->pc = 0x1186A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1186a8;
        }
    }
    ctx->pc = 0x1186C4u;
    // 0x1186c4: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x1186C4u;
    {
        const bool branch_taken_0x1186c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186C4u;
        // 0x1186c8: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186c4) {
            ctx->pc = 0x1185C8u;
            return;
        }
    }
    ctx->pc = 0x1186CCu;
}
