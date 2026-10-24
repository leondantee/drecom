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

// Function: entry_00114168
// Address: 0x114168 - 0x114178
void entry_00114168_0x114168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114168_0x114168");
#endif

    ctx->pc = 0x114168u;

    // 0x114168: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x114168u;
    {
        const bool branch_taken_0x114168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114168) {
            ctx->pc = 0x11416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114168u;
            // 0x11416c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1141B8u;
            return;
        }
    }
    ctx->pc = 0x114170u;
    // 0x114170: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x114170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114174: 0x0  nop
    ctx->pc = 0x114174u;
    // NOP
    ctx->pc = 0x114178u;
}
