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

// Function: entry_0011ef54
// Address: 0x11ef54 - 0x11ef68
void entry_0011ef54_0x11ef54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef54_0x11ef54");
#endif

    ctx->pc = 0x11ef54u;

    // 0x11ef54: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11ef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11ef58: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x11ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x11ef5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF5Cu;
    {
        const bool branch_taken_0x11ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF5Cu;
        // 0x11ef60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef5c) {
            ctx->pc = 0x11EF6Cu;
            return;
        }
    }
    ctx->pc = 0x11EF64u;
    // 0x11ef64: 0x0  nop
    ctx->pc = 0x11ef64u;
    // NOP
    ctx->pc = 0x11ef68u;
}
