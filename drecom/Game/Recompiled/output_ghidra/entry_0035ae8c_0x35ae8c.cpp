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

// Function: entry_0035ae8c
// Address: 0x35ae8c - 0x35aeb8
void entry_0035ae8c_0x35ae8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ae8c_0x35ae8c");
#endif

    switch (ctx->pc) {
        case 0x35aeacu: goto label_35aeac;
        default: break;
    }

    ctx->pc = 0x35ae8cu;

    // 0x35ae8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae90: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ae94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ae98: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35AE98u;
    {
        const bool branch_taken_0x35ae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ae98) {
            ctx->pc = 0x35AEB8u;
            return;
        }
    }
    ctx->pc = 0x35AEA0u;
    // 0x35aea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aea4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x35AEA4u;
    SET_GPR_U32(ctx, 31, 0x35AEACu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x35AEA4u, 0x35AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEACu;
label_35aeac:
    // 0x35aeac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aeb0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35AEB0u;
    SET_GPR_U32(ctx, 31, 0x35AEB8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35AEB0u, 0x35AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEB8u;
}
