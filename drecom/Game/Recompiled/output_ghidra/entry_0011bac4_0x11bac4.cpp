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

// Function: entry_0011bac4
// Address: 0x11bac4 - 0x11bad8
void entry_0011bac4_0x11bac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bac4_0x11bac4");
#endif

    ctx->pc = 0x11bac4u;

    // 0x11bac4: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x11bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11bac8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BAC8u;
    {
        const bool branch_taken_0x11bac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAC8u;
        // 0x11bacc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bac8) {
            ctx->pc = 0x11BAD8u;
            return;
        }
    }
    ctx->pc = 0x11BAD0u;
    // 0x11bad0: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x11bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x11bad4: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x11bad4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    ctx->pc = 0x11bad8u;
}
