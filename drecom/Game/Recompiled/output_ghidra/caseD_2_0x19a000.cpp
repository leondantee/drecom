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

// Function: caseD_2
// Address: 0x19a000 - 0x19a038
void caseD_2_0x19a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x19a000");
#endif

    switch (ctx->pc) {
        case 0x19a020u: goto label_19a020;
        default: break;
    }

    ctx->pc = 0x19a000u;

    // 0x19a000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a004: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a008: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19a00c: 0x24061e2d  addiu       $a2, $zero, 0x1E2D
    ctx->pc = 0x19a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7725));
    // 0x19a010: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a014: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19a018: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19A018u;
    SET_GPR_U32(ctx, 31, 0x19A020u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A018u, 0x19A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A020u;
label_19a020:
    // 0x19a020: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a024: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19a028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a02c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a030: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x19A030u;
    {
        const bool branch_taken_0x19a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a030) {
            ctx->pc = 0x19A284u;
            return;
        }
    }
    ctx->pc = 0x19A038u;
}
