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

// Function: entry_0011b8dc
// Address: 0x11b8dc - 0x11b904
void entry_0011b8dc_0x11b8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8dc_0x11b8dc");
#endif

    ctx->pc = 0x11b8dcu;

    // 0x11b8dc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x11b8e0: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B8E0u;
    {
        const bool branch_taken_0x11b8e0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E0u;
        // 0x11b8e4: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e0) {
            ctx->pc = 0x11B910u;
            return;
        }
    }
    ctx->pc = 0x11B8E8u;
    // 0x11b8e8: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B8E8u;
    {
        const bool branch_taken_0x11b8e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E8u;
        // 0x11b8ec: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e8) {
            ctx->pc = 0x11B934u;
            return;
        }
    }
    ctx->pc = 0x11B8F0u;
    // 0x11b8f0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B8F0u;
    {
        const bool branch_taken_0x11b8f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F0u;
        // 0x11b8f4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f0) {
            ctx->pc = 0x11B904u;
            return;
        }
    }
    ctx->pc = 0x11B8F8u;
    // 0x11b8f8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11b8fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B8FCu;
    {
        const bool branch_taken_0x11b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8FCu;
        // 0x11b900: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8fc) {
            ctx->pc = 0x11B938u;
            return;
        }
    }
    ctx->pc = 0x11B904u;
}
