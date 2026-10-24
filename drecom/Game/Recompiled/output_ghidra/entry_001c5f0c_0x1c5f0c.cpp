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

// Function: entry_001c5f0c
// Address: 0x1c5f0c - 0x1c5f44
void entry_001c5f0c_0x1c5f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f0c_0x1c5f0c");
#endif

    switch (ctx->pc) {
        case 0x1c5f3cu: goto label_1c5f3c;
        default: break;
    }

    ctx->pc = 0x1c5f0cu;

    // 0x1c5f0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5f10: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5f14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5F14u;
    {
        const bool branch_taken_0x1c5f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f14) {
            ctx->pc = 0x1C5F44u;
            return;
        }
    }
    ctx->pc = 0x1C5F1Cu;
    // 0x1c5f1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f24: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5f28: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c5f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c5f2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5f34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5F34u;
    SET_GPR_U32(ctx, 31, 0x1C5F3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5F34u, 0x1C5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F3Cu;
label_1c5f3c:
    // 0x1c5f3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5F3Cu;
    {
        const bool branch_taken_0x1c5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f3c) {
            ctx->pc = 0x1C5F64u;
            return;
        }
    }
    ctx->pc = 0x1C5F44u;
}
