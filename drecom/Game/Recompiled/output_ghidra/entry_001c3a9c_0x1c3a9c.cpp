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

// Function: entry_001c3a9c
// Address: 0x1c3a9c - 0x1c3ad4
void entry_001c3a9c_0x1c3a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3a9c_0x1c3a9c");
#endif

    switch (ctx->pc) {
        case 0x1c3accu: goto label_1c3acc;
        default: break;
    }

    ctx->pc = 0x1c3a9cu;

    // 0x1c3a9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3aa0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3aa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3AA4u;
    {
        const bool branch_taken_0x1c3aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3aa4) {
            ctx->pc = 0x1C3AD4u;
            return;
        }
    }
    ctx->pc = 0x1C3AACu;
    // 0x1c3aac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ab4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3ab8: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c3abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ac0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3ac4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3AC4u;
    SET_GPR_U32(ctx, 31, 0x1C3ACCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3AC4u, 0x1C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ACCu;
label_1c3acc:
    // 0x1c3acc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3ACCu;
    {
        const bool branch_taken_0x1c3acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3acc) {
            ctx->pc = 0x1C3AF4u;
            return;
        }
    }
    ctx->pc = 0x1C3AD4u;
}
