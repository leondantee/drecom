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

// Function: entry_001c2e4c
// Address: 0x1c2e4c - 0x1c2e84
void entry_001c2e4c_0x1c2e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2e4c_0x1c2e4c");
#endif

    switch (ctx->pc) {
        case 0x1c2e7cu: goto label_1c2e7c;
        default: break;
    }

    ctx->pc = 0x1c2e4cu;

    // 0x1c2e4c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2e50: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2e54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2E54u;
    {
        const bool branch_taken_0x1c2e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e54) {
            ctx->pc = 0x1C2E84u;
            return;
        }
    }
    ctx->pc = 0x1C2E5Cu;
    // 0x1c2e5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2e64: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2e68: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c2e6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2e70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2e74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2E74u;
    SET_GPR_U32(ctx, 31, 0x1C2E7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2E74u, 0x1C2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E7Cu;
label_1c2e7c:
    // 0x1c2e7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2E7Cu;
    {
        const bool branch_taken_0x1c2e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e7c) {
            ctx->pc = 0x1C2EA4u;
            return;
        }
    }
    ctx->pc = 0x1C2E84u;
}
