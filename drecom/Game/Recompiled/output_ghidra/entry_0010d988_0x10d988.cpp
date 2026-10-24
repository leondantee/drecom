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

// Function: entry_0010d988
// Address: 0x10d988 - 0x10d99c
void entry_0010d988_0x10d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d988_0x10d988");
#endif

    switch (ctx->pc) {
        case 0x10d994u: goto label_10d994;
        default: break;
    }

    ctx->pc = 0x10d988u;

    // 0x10d988: 0x8ec445b8  lw          $a0, 0x45B8($s6)
    ctx->pc = 0x10d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17848)));
    // 0x10d98c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10D98Cu;
    SET_GPR_U32(ctx, 31, 0x10D994u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10D994u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D994u) { return; }
    ctx->pc = 0x10D994u;
label_10d994:
    // 0x10d994: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x10D994u;
    {
        const bool branch_taken_0x10d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D994u;
        // 0x10d998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d994) {
            ctx->pc = 0x10DA44u;
            return;
        }
    }
    ctx->pc = 0x10D99Cu;
}
