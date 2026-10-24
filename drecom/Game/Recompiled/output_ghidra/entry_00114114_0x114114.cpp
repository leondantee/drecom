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

// Function: entry_00114114
// Address: 0x114114 - 0x114128
void entry_00114114_0x114114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114114_0x114114");
#endif

    ctx->pc = 0x114114u;

    // 0x114114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114118: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x114118u;
    {
        const bool branch_taken_0x114118 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x11411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114118u;
        // 0x11411c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114118) {
            ctx->pc = 0x114168u;
            return;
        }
    }
    ctx->pc = 0x114120u;
    // 0x114120: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x114120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114124: 0x0  nop
    ctx->pc = 0x114124u;
    // NOP
    ctx->pc = 0x114128u;
}
