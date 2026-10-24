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

// Function: entry_001c5d04
// Address: 0x1c5d04 - 0x1c5d3c
void entry_001c5d04_0x1c5d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5d04_0x1c5d04");
#endif

    switch (ctx->pc) {
        case 0x1c5d34u: goto label_1c5d34;
        default: break;
    }

    ctx->pc = 0x1c5d04u;

    // 0x1c5d04: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5d08: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5d0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5D0Cu;
    {
        const bool branch_taken_0x1c5d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d0c) {
            ctx->pc = 0x1C5D3Cu;
            return;
        }
    }
    ctx->pc = 0x1C5D14u;
    // 0x1c5d14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d1c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5d20: 0x2406141e  addiu       $a2, $zero, 0x141E
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5150));
    // 0x1c5d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5d2c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D34u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5D2Cu, 0x1C5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D34u;
label_1c5d34:
    // 0x1c5d34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5D34u;
    {
        const bool branch_taken_0x1c5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d34) {
            ctx->pc = 0x1C5D5Cu;
            return;
        }
    }
    ctx->pc = 0x1C5D3Cu;
}
