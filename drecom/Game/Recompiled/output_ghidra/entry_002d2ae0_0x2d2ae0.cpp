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

// Function: entry_002d2ae0
// Address: 0x2d2ae0 - 0x2d2b04
void entry_002d2ae0_0x2d2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2ae0_0x2d2ae0");
#endif

    switch (ctx->pc) {
        case 0x2d2af0u: goto label_2d2af0;
        case 0x2d2afcu: goto label_2d2afc;
        default: break;
    }

    ctx->pc = 0x2d2ae0u;

    // 0x2d2ae0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2ae4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d2ae8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D2AE8u;
    SET_GPR_U32(ctx, 31, 0x2D2AF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2AE8u, 0x2D2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AF0u;
label_2d2af0:
    // 0x2d2af0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2af4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2AF4u;
    SET_GPR_U32(ctx, 31, 0x2D2AFCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2AF4u, 0x2D2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AFCu;
label_2d2afc:
    // 0x2d2afc: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2D2AFCu;
    {
        const bool branch_taken_0x2d2afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2afc) {
            ctx->pc = 0x2D2DA4u;
            return;
        }
    }
    ctx->pc = 0x2D2B04u;
}
