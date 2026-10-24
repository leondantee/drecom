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

// Function: entry_002139ac
// Address: 0x2139ac - 0x2139b8
void entry_002139ac_0x2139ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002139ac_0x2139ac");
#endif

    switch (ctx->pc) {
        case 0x2139b4u: goto label_2139b4;
        default: break;
    }

    ctx->pc = 0x2139acu;

    // 0x2139ac: 0xc084a94  jal         func_212A50
    ctx->pc = 0x2139ACu;
    SET_GPR_U32(ctx, 31, 0x2139B4u);
    ctx->pc = 0x2139B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139ACu;
    // 0x2139b0: 0xacb00004  sw          $s0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x2139B4u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2139B4u) { return; }
    ctx->pc = 0x2139B4u;
label_2139b4:
    // 0x2139b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2139b8u;
}
