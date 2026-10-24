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

// Function: entry_0035ea80
// Address: 0x35ea80 - 0x35eaac
void entry_0035ea80_0x35ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ea80_0x35ea80");
#endif

    switch (ctx->pc) {
        case 0x35eaa0u: goto label_35eaa0;
        default: break;
    }

    ctx->pc = 0x35ea80u;

    // 0x35ea80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea84: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ea88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ea8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EA8Cu;
    {
        const bool branch_taken_0x35ea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ea8c) {
            ctx->pc = 0x35EAACu;
            return;
        }
    }
    ctx->pc = 0x35EA94u;
    // 0x35ea94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea98: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35EA98u;
    SET_GPR_U32(ctx, 31, 0x35EAA0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35EA98u, 0x35EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAA0u;
label_35eaa0:
    // 0x35eaa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eaa4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35EAA4u;
    SET_GPR_U32(ctx, 31, 0x35EAACu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35EAA4u, 0x35EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAACu;
}
