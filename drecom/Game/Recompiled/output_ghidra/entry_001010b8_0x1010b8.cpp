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

// Function: entry_001010b8
// Address: 0x1010b8 - 0x1010d4
void entry_001010b8_0x1010b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001010b8_0x1010b8");
#endif

    ctx->pc = 0x1010b8u;

label_1010b8:
    // 0x1010b8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1010b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1010bc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1010BCu;
    {
        const bool branch_taken_0x1010bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1010C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010BCu;
        // 0x1010c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010bc) {
            ctx->pc = 0x10111Cu;
            return;
        }
    }
    ctx->pc = 0x1010C4u;
    // 0x1010c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1010c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1010c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1010cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1010CCu;
    {
        const bool branch_taken_0x1010cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1010D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010CCu;
        // 0x1010d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010cc) {
            ctx->pc = 0x1010B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1010b8;
        }
    }
    ctx->pc = 0x1010D4u;
}
