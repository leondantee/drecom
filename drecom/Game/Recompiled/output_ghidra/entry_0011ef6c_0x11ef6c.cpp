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

// Function: entry_0011ef6c
// Address: 0x11ef6c - 0x11ef80
void entry_0011ef6c_0x11ef6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef6c_0x11ef6c");
#endif

    ctx->pc = 0x11ef6cu;

    // 0x11ef6c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EF6Cu;
    {
        const bool branch_taken_0x11ef6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ef6c) {
            ctx->pc = 0x11EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EF6Cu;
            // 0x11ef70: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EF80u;
            return;
        }
    }
    ctx->pc = 0x11EF74u;
    // 0x11ef74: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11ef74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11ef78: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x11ef78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x11ef7c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x11ef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    ctx->pc = 0x11ef80u;
}
