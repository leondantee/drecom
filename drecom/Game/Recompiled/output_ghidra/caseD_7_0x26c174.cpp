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

// Function: caseD_7
// Address: 0x26c174 - 0x26c1a0
void caseD_7_0x26c174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x26c174");
#endif

    switch (ctx->pc) {
        case 0x26c194u: goto label_26c194;
        default: break;
    }

    ctx->pc = 0x26c174u;

    // 0x26c174: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c178: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c17c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x26c180: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x26c180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x26c184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c188: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c18c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C18Cu;
    SET_GPR_U32(ctx, 31, 0x26C194u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C18Cu, 0x26C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C194u;
label_26c194:
    // 0x26c194: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c194u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c198: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26C198u;
    {
        const bool branch_taken_0x26c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c198) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C1A0u;
}
