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

// Function: entry_0010f674
// Address: 0x10f674 - 0x10f68c
void entry_0010f674_0x10f674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f674_0x10f674");
#endif

    switch (ctx->pc) {
        case 0x10f688u: goto label_10f688;
        default: break;
    }

    ctx->pc = 0x10f674u;

    // 0x10f674: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f678: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x10f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x10f67c: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3845BCu));
    // 0x10f680: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F680u;
    SET_GPR_U32(ctx, 31, 0x10F688u);
    ctx->pc = 0x10F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F680u;
    // 0x10f684: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F688u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F688u) { return; }
    ctx->pc = 0x10F688u;
label_10f688:
    // 0x10f688: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f68cu;
}
