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

// Function: entry_002dad34
// Address: 0x2dad34 - 0x2dad4c
void entry_002dad34_0x2dad34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad34_0x2dad34");
#endif

    switch (ctx->pc) {
        case 0x2dad44u: goto label_2dad44;
        default: break;
    }

    ctx->pc = 0x2dad34u;

    // 0x2dad34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad38: 0x240500e6  addiu       $a1, $zero, 0xE6
    ctx->pc = 0x2dad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2dad3c: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD44u);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD3Cu, 0x2DAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD44u;
label_2dad44:
    // 0x2dad44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DAD44u;
    {
        const bool branch_taken_0x2dad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad44) {
            ctx->pc = 0x2DAD74u;
            return;
        }
    }
    ctx->pc = 0x2DAD4Cu;
}
