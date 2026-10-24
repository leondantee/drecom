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

// Function: entry_0011b938
// Address: 0x11b938 - 0x11b94c
void entry_0011b938_0x11b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b938_0x11b938");
#endif

    ctx->pc = 0x11b938u;

    // 0x11b938: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x11B938u;
    {
        const bool branch_taken_0x11b938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B938u;
        // 0x11b93c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b938) {
            ctx->pc = 0x11BC58u;
            return;
        }
    }
    ctx->pc = 0x11B940u;
    // 0x11b940: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11b940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11b944: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x11B944u;
    {
        const bool branch_taken_0x11b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B944u;
        // 0x11b948: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b944) {
            ctx->pc = 0x11BC5Cu;
            return;
        }
    }
    ctx->pc = 0x11B94Cu;
}
