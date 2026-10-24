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

// Function: entry_001bf2c4
// Address: 0x1bf2c4 - 0x1bf2fc
void entry_001bf2c4_0x1bf2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf2c4_0x1bf2c4");
#endif

    switch (ctx->pc) {
        case 0x1bf2f4u: goto label_1bf2f4;
        default: break;
    }

    ctx->pc = 0x1bf2c4u;

    // 0x1bf2c4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf2c8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf2cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF2CCu;
    {
        const bool branch_taken_0x1bf2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2cc) {
            ctx->pc = 0x1BF2FCu;
            return;
        }
    }
    ctx->pc = 0x1BF2D4u;
    // 0x1bf2d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf2d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf2dc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf2e0: 0x2406140d  addiu       $a2, $zero, 0x140D
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5133));
    // 0x1bf2e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf2ec: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF2ECu;
    SET_GPR_U32(ctx, 31, 0x1BF2F4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF2ECu, 0x1BF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2F4u;
label_1bf2f4:
    // 0x1bf2f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF2F4u;
    {
        const bool branch_taken_0x1bf2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2f4) {
            ctx->pc = 0x1BF31Cu;
            return;
        }
    }
    ctx->pc = 0x1BF2FCu;
}
