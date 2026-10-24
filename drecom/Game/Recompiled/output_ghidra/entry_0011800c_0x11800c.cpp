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

// Function: entry_0011800c
// Address: 0x11800c - 0x118020
void entry_0011800c_0x11800c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011800c_0x11800c");
#endif

    ctx->pc = 0x11800cu;

    // 0x11800c: 0x8ec24d40  lw          $v0, 0x4D40($s6)
    ctx->pc = 0x11800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19776)));
    // 0x118010: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118010u;
    {
        const bool branch_taken_0x118010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x118014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118010u;
        // 0x118014: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118010) {
            ctx->pc = 0x118020u;
            return;
        }
    }
    ctx->pc = 0x118018u;
    // 0x118018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118018u;
    {
        const bool branch_taken_0x118018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118018u;
        // 0x11801c: 0xaed14d40  sw          $s1, 0x4D40($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 19776), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118018) {
            ctx->pc = 0x118028u;
            return;
        }
    }
    ctx->pc = 0x118020u;
}
