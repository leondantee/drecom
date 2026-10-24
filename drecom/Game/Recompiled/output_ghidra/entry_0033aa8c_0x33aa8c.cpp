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

// Function: entry_0033aa8c
// Address: 0x33aa8c - 0x33aaa8
void entry_0033aa8c_0x33aa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aa8c_0x33aa8c");
#endif

    switch (ctx->pc) {
        case 0x33aa9cu: goto label_33aa9c;
        default: break;
    }

    ctx->pc = 0x33aa8cu;

    // 0x33aa8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33aa90: 0x244428b0  addiu       $a0, $v0, 0x28B0
    ctx->pc = 0x33aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x33aa94: 0xc046760  jal         func_119D80
    ctx->pc = 0x33AA94u;
    SET_GPR_U32(ctx, 31, 0x33AA9Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33AA9Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33AA9Cu) { return; }
    ctx->pc = 0x33AA9Cu;
label_33aa9c:
    // 0x33aa9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aaa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x33AAA0u;
    {
        const bool branch_taken_0x33aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aaa0) {
            ctx->pc = 0x33AB30u;
            return;
        }
    }
    ctx->pc = 0x33AAA8u;
}
