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

// Function: caseD_9
// Address: 0x26c1cc - 0x26c1f8
void caseD_9_0x26c1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x26c1cc");
#endif

    switch (ctx->pc) {
        case 0x26c1ecu: goto label_26c1ec;
        default: break;
    }

    ctx->pc = 0x26c1ccu;

    // 0x26c1cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c1d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c1d4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x26c1d8: 0x24061e6e  addiu       $a2, $zero, 0x1E6E
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7790));
    // 0x26c1dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c1e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c1e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C1E4u;
    SET_GPR_U32(ctx, 31, 0x26C1ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C1E4u, 0x26C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1ECu;
label_26c1ec:
    // 0x26c1ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c1ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c1f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26C1F0u;
    {
        const bool branch_taken_0x26c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1f0) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C1F8u;
}
