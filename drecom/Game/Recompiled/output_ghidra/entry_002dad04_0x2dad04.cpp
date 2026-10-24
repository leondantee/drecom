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

// Function: entry_002dad04
// Address: 0x2dad04 - 0x2dad1c
void entry_002dad04_0x2dad04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad04_0x2dad04");
#endif

    switch (ctx->pc) {
        case 0x2dad14u: goto label_2dad14;
        default: break;
    }

    ctx->pc = 0x2dad04u;

    // 0x2dad04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad08: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2dad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2dad0c: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD14u);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD0Cu, 0x2DAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD14u;
label_2dad14:
    // 0x2dad14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DAD14u;
    {
        const bool branch_taken_0x2dad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad14) {
            ctx->pc = 0x2DAD74u;
            return;
        }
    }
    ctx->pc = 0x2DAD1Cu;
}
