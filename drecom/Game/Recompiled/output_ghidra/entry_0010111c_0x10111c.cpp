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

// Function: entry_0010111c
// Address: 0x10111c - 0x101130
void entry_0010111c_0x10111c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010111c_0x10111c");
#endif

    switch (ctx->pc) {
        case 0x101128u: goto label_101128;
        default: break;
    }

    ctx->pc = 0x10111cu;

    // 0x10111c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x101120: 0xc046760  jal         func_119D80
    ctx->pc = 0x101120u;
    SET_GPR_U32(ctx, 31, 0x101128u);
    ctx->pc = 0x101124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101120u;
    // 0x101124: 0x2484c2f0  addiu       $a0, $a0, -0x3D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x101128u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x101128u) { return; }
    ctx->pc = 0x101128u;
label_101128:
    // 0x101128: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x101128u;
    {
        const bool branch_taken_0x101128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101128u;
        // 0x10112c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101128) {
            ctx->pc = 0x101158u;
            return;
        }
    }
    ctx->pc = 0x101130u;
}
