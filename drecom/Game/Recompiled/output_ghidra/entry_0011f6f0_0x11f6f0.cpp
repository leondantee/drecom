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

// Function: entry_0011f6f0
// Address: 0x11f6f0 - 0x11f704
void entry_0011f6f0_0x11f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6f0_0x11f6f0");
#endif

    ctx->pc = 0x11f6f0u;

    // 0x11f6f0: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x11F6F0u;
    {
        const bool branch_taken_0x11f6f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x11F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6F0u;
        // 0x11f6f4: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6f0) {
            ctx->pc = 0x11F77Cu;
            return;
        }
    }
    ctx->pc = 0x11F6F8u;
    // 0x11f6f8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F6F8u;
    {
        const bool branch_taken_0x11f6f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6F8u;
        // 0x11f6fc: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6f8) {
            ctx->pc = 0x11F704u;
            return;
        }
    }
    ctx->pc = 0x11F700u;
    // 0x11f700: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x11f700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    ctx->pc = 0x11f704u;
}
