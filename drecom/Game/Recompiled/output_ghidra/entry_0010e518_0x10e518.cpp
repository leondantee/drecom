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

// Function: entry_0010e518
// Address: 0x10e518 - 0x10e524
void entry_0010e518_0x10e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e518_0x10e518");
#endif

    switch (ctx->pc) {
        case 0x10e520u: goto label_10e520;
        default: break;
    }

    ctx->pc = 0x10e518u;

    // 0x10e518: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E518u;
    SET_GPR_U32(ctx, 31, 0x10E520u);
    ctx->pc = 0x10E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E518u;
    // 0x10e51c: 0x8c6445b8  lw          $a0, 0x45B8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E520u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E520u) { return; }
    ctx->pc = 0x10E520u;
label_10e520:
    // 0x10e520: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10e520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e524u;
}
