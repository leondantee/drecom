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

// Function: entry_001c2eb4
// Address: 0x1c2eb4 - 0x1c2eec
void entry_001c2eb4_0x1c2eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2eb4_0x1c2eb4");
#endif

    switch (ctx->pc) {
        case 0x1c2ee4u: goto label_1c2ee4;
        default: break;
    }

    ctx->pc = 0x1c2eb4u;

    // 0x1c2eb4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2eb8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2ebc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2EBCu;
    {
        const bool branch_taken_0x1c2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ebc) {
            ctx->pc = 0x1C2EECu;
            return;
        }
    }
    ctx->pc = 0x1C2EC4u;
    // 0x1c2ec4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ecc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2ed0: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c2ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c2ed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ed8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2edc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C2EDCu;
    SET_GPR_U32(ctx, 31, 0x1C2EE4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C2EDCu, 0x1C2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EE4u;
label_1c2ee4:
    // 0x1c2ee4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2EE4u;
    {
        const bool branch_taken_0x1c2ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ee4) {
            ctx->pc = 0x1C2F0Cu;
            return;
        }
    }
    ctx->pc = 0x1C2EECu;
}
