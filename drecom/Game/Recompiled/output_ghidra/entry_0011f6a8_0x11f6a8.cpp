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

// Function: entry_0011f6a8
// Address: 0x11f6a8 - 0x11f6cc
void entry_0011f6a8_0x11f6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6a8_0x11f6a8");
#endif

    ctx->pc = 0x11f6a8u;

label_11f6a8:
    // 0x11f6a8: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x11f6ac: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x11f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x11f6b0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x11f6b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11f6b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11f6b8: 0x0  nop
    ctx->pc = 0x11f6b8u;
    // NOP
    // 0x11f6bc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F6BCu;
    {
        const bool branch_taken_0x11f6bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f6bc) {
            ctx->pc = 0x11F6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f6a8;
        }
    }
    ctx->pc = 0x11F6C4u;
    // 0x11f6c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11F6C4u;
    {
        const bool branch_taken_0x11f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6C4u;
        // 0x11f6c8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6c4) {
            ctx->pc = 0x11F6F0u;
            return;
        }
    }
    ctx->pc = 0x11F6CCu;
}
