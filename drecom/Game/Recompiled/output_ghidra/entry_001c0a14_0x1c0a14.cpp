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

// Function: entry_001c0a14
// Address: 0x1c0a14 - 0x1c0a4c
void entry_001c0a14_0x1c0a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0a14_0x1c0a14");
#endif

    switch (ctx->pc) {
        case 0x1c0a44u: goto label_1c0a44;
        default: break;
    }

    ctx->pc = 0x1c0a14u;

    // 0x1c0a14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0a18: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c0a1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0A1Cu;
    {
        const bool branch_taken_0x1c0a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a1c) {
            ctx->pc = 0x1C0A4Cu;
            return;
        }
    }
    ctx->pc = 0x1C0A24u;
    // 0x1c0a24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a2c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0a30: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c0a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c0a34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0a3c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A44u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0A3Cu, 0x1C0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A44u;
label_1c0a44:
    // 0x1c0a44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0A44u;
    {
        const bool branch_taken_0x1c0a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a44) {
            ctx->pc = 0x1C0A6Cu;
            return;
        }
    }
    ctx->pc = 0x1C0A4Cu;
}
