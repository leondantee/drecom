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

// Function: entry_002dad1c
// Address: 0x2dad1c - 0x2dad34
void entry_002dad1c_0x2dad1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad1c_0x2dad1c");
#endif

    switch (ctx->pc) {
        case 0x2dad2cu: goto label_2dad2c;
        default: break;
    }

    ctx->pc = 0x2dad1cu;

    // 0x2dad1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad20: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2dad24: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD24u;
    SET_GPR_U32(ctx, 31, 0x2DAD2Cu);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD24u, 0x2DAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD2Cu;
label_2dad2c:
    // 0x2dad2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DAD2Cu;
    {
        const bool branch_taken_0x2dad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad2c) {
            ctx->pc = 0x2DAD74u;
            return;
        }
    }
    ctx->pc = 0x2DAD34u;
}
