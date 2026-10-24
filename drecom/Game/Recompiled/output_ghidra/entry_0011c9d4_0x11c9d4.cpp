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

// Function: entry_0011c9d4
// Address: 0x11c9d4 - 0x11c9e8
void entry_0011c9d4_0x11c9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c9d4_0x11c9d4");
#endif

    ctx->pc = 0x11c9d4u;

    // 0x11c9d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11c9d8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x11c9d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x11c9dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C9DCu;
    {
        const bool branch_taken_0x11c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9DCu;
        // 0x11c9e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9dc) {
            ctx->pc = 0x11CA14u;
            return;
        }
    }
    ctx->pc = 0x11C9E4u;
    // 0x11c9e4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x11c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x11c9e8u;
}
