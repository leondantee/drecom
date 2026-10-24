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

// Function: entry_00130a70
// Address: 0x130a70 - 0x130ab0
void entry_00130a70_0x130a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130a70_0x130a70");
#endif

    switch (ctx->pc) {
        case 0x130aa8u: goto label_130aa8;
        default: break;
    }

    ctx->pc = 0x130a70u;

    // 0x130a70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x130a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x130a78: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x130a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x130a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x130a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x130a80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x130A80u;
    {
        const bool branch_taken_0x130a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a80) {
            ctx->pc = 0x130AB0u;
            return;
        }
    }
    ctx->pc = 0x130A88u;
    // 0x130a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130a94: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x130a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130a9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130aa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130AA0u;
    SET_GPR_U32(ctx, 31, 0x130AA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130AA0u, 0x130AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AA8u;
label_130aa8:
    // 0x130aa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130AA8u;
    {
        const bool branch_taken_0x130aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130aa8) {
            ctx->pc = 0x130AD0u;
            return;
        }
    }
    ctx->pc = 0x130AB0u;
}
