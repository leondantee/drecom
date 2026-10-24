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

// Function: $L9
// Address: 0x11b1b8 - 0x11b1e8
void ps2__L9_0x11b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L9_0x11b1b8");
#endif

    ctx->pc = 0x11b1b8u;

label_11b1b8:
    // 0x11b1b8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B1B8u;
    {
        const bool branch_taken_0x11b1b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1B8u;
        // 0x11b1bc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1b8) {
            ctx->pc = 0x11B204u;
            return;
        }
    }
    ctx->pc = 0x11B1C0u;
    // 0x11b1c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x11b1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b1c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11b1c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b1cc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11b1d0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11b1d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B1D4u;
    {
        const bool branch_taken_0x11b1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1D4u;
        // 0x11b1d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1d4) {
            ctx->pc = 0x11B1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B1DCu;
    // 0x11b1dc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x11b1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B1E0u;
    {
        const bool branch_taken_0x11b1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1E0u;
        // 0x11b1e4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1e0) {
            ctx->pc = 0x11B204u;
            return;
        }
    }
    ctx->pc = 0x11B1E8u;
}
