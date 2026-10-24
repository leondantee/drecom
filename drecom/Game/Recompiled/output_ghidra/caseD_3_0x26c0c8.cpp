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

// Function: caseD_3
// Address: 0x26c0c8 - 0x26c0f0
void caseD_3_0x26c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x26c0c8");
#endif

    switch (ctx->pc) {
        case 0x26c0e8u: goto label_26c0e8;
        default: break;
    }

    ctx->pc = 0x26c0c8u;

    // 0x26c0c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c0cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c0d0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x26c0d4: 0x24060a71  addiu       $a2, $zero, 0xA71
    ctx->pc = 0x26c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2673));
    // 0x26c0d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c0dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c0e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C0E0u;
    SET_GPR_U32(ctx, 31, 0x26C0E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C0E0u, 0x26C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0E8u;
label_26c0e8:
    // 0x26c0e8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26C0E8u;
    {
        const bool branch_taken_0x26c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c0e8) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C0F0u;
}
