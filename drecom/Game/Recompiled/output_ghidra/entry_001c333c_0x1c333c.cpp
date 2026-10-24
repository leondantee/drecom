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

// Function: entry_001c333c
// Address: 0x1c333c - 0x1c3374
void entry_001c333c_0x1c333c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c333c_0x1c333c");
#endif

    switch (ctx->pc) {
        case 0x1c336cu: goto label_1c336c;
        default: break;
    }

    ctx->pc = 0x1c333cu;

    // 0x1c333c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3340: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3344: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3344u;
    {
        const bool branch_taken_0x1c3344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3344) {
            ctx->pc = 0x1C3374u;
            return;
        }
    }
    ctx->pc = 0x1C334Cu;
    // 0x1c334c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c334cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3354: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3358: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c3358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c335c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3360: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3364: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3364u;
    SET_GPR_U32(ctx, 31, 0x1C336Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3364u, 0x1C336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C336Cu;
label_1c336c:
    // 0x1c336c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C336Cu;
    {
        const bool branch_taken_0x1c336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c336c) {
            ctx->pc = 0x1C3394u;
            return;
        }
    }
    ctx->pc = 0x1C3374u;
}
