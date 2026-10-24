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

// Function: entry_00254efc
// Address: 0x254efc - 0x254f14
void entry_00254efc_0x254efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254efc_0x254efc");
#endif

    switch (ctx->pc) {
        case 0x254f10u: goto label_254f10;
        default: break;
    }

    ctx->pc = 0x254efcu;

    // 0x254efc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x254efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254f00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x254f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254f04: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x254f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f08: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x254F08u;
    SET_GPR_U32(ctx, 31, 0x254F10u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x254F08u, 0x254F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F10u;
label_254f10:
    // 0x254f10: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x254f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x254f14u;
}
