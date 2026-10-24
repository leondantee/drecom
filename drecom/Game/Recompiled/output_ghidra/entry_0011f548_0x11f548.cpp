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

// Function: entry_0011f548
// Address: 0x11f548 - 0x11f55c
void entry_0011f548_0x11f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f548_0x11f548");
#endif

    ctx->pc = 0x11f548u;

    // 0x11f548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11f54c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F54Cu;
    {
        const bool branch_taken_0x11f54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F54Cu;
        // 0x11f550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f54c) {
            ctx->pc = 0x11F55Cu;
            return;
        }
    }
    ctx->pc = 0x11F554u;
    // 0x11f554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F554u;
    {
        const bool branch_taken_0x11f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F554u;
        // 0x11f558: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f554) {
            ctx->pc = 0x11F560u;
            return;
        }
    }
    ctx->pc = 0x11F55Cu;
}
