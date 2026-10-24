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

// Function: entry_002dad4c
// Address: 0x2dad4c - 0x2dad64
void entry_002dad4c_0x2dad4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad4c_0x2dad4c");
#endif

    switch (ctx->pc) {
        case 0x2dad5cu: goto label_2dad5c;
        default: break;
    }

    ctx->pc = 0x2dad4cu;

    // 0x2dad4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad50: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x2dad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2dad54: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD54u;
    SET_GPR_U32(ctx, 31, 0x2DAD5Cu);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD54u, 0x2DAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD5Cu;
label_2dad5c:
    // 0x2dad5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAD5Cu;
    {
        const bool branch_taken_0x2dad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad5c) {
            ctx->pc = 0x2DAD74u;
            return;
        }
    }
    ctx->pc = 0x2DAD64u;
}
